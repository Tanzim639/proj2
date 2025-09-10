#include <bits/stdc++.h>
using namespace std;


struct Point {
    int x, y;
};

vector<Point> randomarr() { 
    vector<Point> v; 
    int n = 100; 
    for (int i = 0; i < n; i++) { 
        Point ptn;
        int p1 = rand() % n; 
        int p2 = rand() % n; 
        ptn={p1,p2};
        v.push_back(ptn); 
    }    
    return v; 
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

void findConvexHull(vector<Point> &points) {
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
    if (m < 3) return;
    stack<Point> hull;
    hull.push(points[0]);
    hull.push(points[1]);
    hull.push(points[2]);
    for (int i = 3; i < m; i++) {
        while (hull.size() > 1 && getOrientation(secondTop(hull), hull.top(), points[i]) != 2)
            hull.pop();
        hull.push(points[i]);
    }

    

    cout<<"[";
    while (!hull.empty()) {
        Point p = hull.top();
        cout << "(" << p.x << ", " << p.y << "), " << " ";
        hull.pop();
    }
    cout<<"]\n";
}

int main() {
    // vector<Point> points = {{0, 3}, {1, 1}, {2, 2}, {4, 4},{0, 0}, {1, 2}, {3, 1}, {3, 3}};
    vector<Point> points = randomarr();
    cout<<"[";
    for(auto it: points){
        cout<<"("<<it.x<<","<<it.y<<"),";
    }
    cout<<"]\n";

    findConvexHull(points);
    return 0;
}
