#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

struct Point {
    int x, y;
    bool operator==(const Point &p)  {
        return x == p.x && y == p.y;
    }
};
vector<Point> randomarr() { 
    vector<Point> v; 
    int n = 1000000; 
    for (int i = 0; i < n; i++) { 
        Point ptn;
        int p1 = rand() % n; 
        int p2 = rand() % n; 
        ptn={p1+1,p2+1};
        v.push_back(ptn); 
    }    
    return v; 
} 
int findSide(Point a, Point b, Point p) {
    int val = (p.y - a.y) * (b.x - a.x) - (b.y - a.y) * (p.x - a.x);
    return (val > 0) - (val < 0); 
}
int lineDist(Point a, Point b, Point p) {
    return abs((p.y - a.y) * (b.x - a.x) - (b.y - a.y) * (p.x - a.x));
}
void quickHull(vector<Point> &points, Point a, Point b, int side, vector<Point> &hull) {
    int maxDist = 0, index = -1;
    for (int i = 0; i < points.size(); i++) {
        int dist = lineDist(a, b, points[i]);
        if (findSide(a, b, points[i]) == side && dist > maxDist) {
            index = i;
            maxDist = dist;
        }
    }
    if (index == -1) {
        if (find(hull.begin(), hull.end(), a) == hull.end())
            hull.push_back(a);
        if (find(hull.begin(), hull.end(), b) == hull.end())
            hull.push_back(b);
        return;
    }
    quickHull(points, points[index], a, -findSide(points[index], a, b), hull);
    quickHull(points, points[index], b, -findSide(points[index], b, a), hull);
}
vector<Point> findConvexHullbyQuickHull(vector<Point> &points) {
    if (points.size() < 3) {
        return {{-1,-1}};
    }
    vector<Point> hull;
    int minPoint = 0, maxPoint = 0;
    for (int i = 1; i < points.size(); i++) {
        if (points[i].x < points[minPoint].x) minPoint = i;
        if (points[i].x > points[maxPoint].x) maxPoint = i;
    }
    quickHull(points, points[minPoint], points[maxPoint], 1, hull);
    quickHull(points, points[minPoint], points[maxPoint], -1, hull);
    return hull;
}
Point basePoint;
Point secondTop(stack<Point> &S) {
    Point temp = S.top();
    S.pop();
    Point result = S.top();
    S.push(temp);
    return result;
}
void exchange(Point &p1, Point &p2) {
    Point temp = p1;
    p1 = p2;
    p2 = temp;
}
int squareDist(Point p1, Point p2) {
    return (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
}
int getOrientation(Point p, Point q, Point r) {
    int value = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (value == 0) return 0;
    return (value > 0) ? 1 : 2;
}
int comparePoints(const void *vp1, const void *vp2) {
    Point *p1 = (Point *)vp1;
    Point *p2 = (Point *)vp2;
    int o = getOrientation(basePoint, *p1, *p2);
    if (o == 0)
        return (squareDist(basePoint, *p2) >= squareDist(basePoint, *p1)) ? -1 : 1;
    return (o == 2) ? -1 : 1;
}
vector<Point> findConvexHullbyGrahamScan(vector<Point> &points) {
    int n = points.size();
    int minY = points[0].y, minIndex = 0;
    for (int i = 1; i < n; i++) {
        int y = points[i].y;
        if ((y < minY) || (minY == y && points[i].x < points[minIndex].x))
            minY = points[i].y, minIndex = i;
    }
    exchange(points[0], points[minIndex]);
    basePoint = points[0];
    qsort(&points[1], n - 1, sizeof(Point), comparePoints);
    int m = 1;
    for (int i = 1; i < n; i++) {
        while (i < n - 1 && getOrientation(basePoint, points[i], points[i + 1]) == 0)
            i++;
        points[m] = points[i];
        m++;
    }
    if (m < 3) return{{-1,-1}};
    stack<Point> hull;
    hull.push(points[0]);
    hull.push(points[1]);
    hull.push(points[2]);
    for (int i = 3; i < m; i++) {
        while (hull.size() > 1 && getOrientation(secondTop(hull), hull.top(), points[i]) != 2)
            hull.pop();
        hull.push(points[i]);
    }
    vector<Point>res;
    while (!hull.empty()) {  
        Point p = hull.top();
        res.push_back(p);
        hull.pop();
    }
    return res;
}

int main() {
    srand(time(NULL));
    vector<Point> points = randomarr();
    vector<Point> points2 = points;
    auto start = high_resolution_clock::now();
    vector<Point> hull = findConvexHullbyQuickHull(points);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    auto start2 = high_resolution_clock::now();
    vector<Point> hull2 = findConvexHullbyGrahamScan(points2);
    auto end2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(end2 - start2);
    cout<<duration.count()<<"  "<<duration2.count()<<endl;
    // for(auto it: hull){
    //     cout<<it.x<<" "<<it.y<<endl;
    // }
}
