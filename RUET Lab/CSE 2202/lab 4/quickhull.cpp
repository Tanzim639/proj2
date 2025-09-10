#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;

    // Overloading == for easy comparison
    bool operator==(const Point &p)  {
        return x == p.x && y == p.y;
    }
};

// Function to find the side of point p with respect to line formed by a and b
int findSide(Point a, Point b, Point p) {
    int val = (p.y - a.y) * (b.x - a.x) - (b.y - a.y) * (p.x - a.x);
    return (val > 0) - (val < 0); // Returns 1, -1, or 0
}

// Function to find the distance of point p from the line formed by a and b
int lineDist(Point a, Point b, Point p) {
    return abs((p.y - a.y) * (b.x - a.x) - (b.y - a.y) * (p.x - a.x));
}

// Recursive function to find the points that form the convex hull on one side
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
        // Check if points are already in the hull
        if (find(hull.begin(), hull.end(), a) == hull.end())
            hull.push_back(a);
        if (find(hull.begin(), hull.end(), b) == hull.end())
            hull.push_back(b);
        return;
    }

    quickHull(points, points[index], a, -findSide(points[index], a, b), hull);
    quickHull(points, points[index], b, -findSide(points[index], b, a), hull);
}

// Main function to find the convex hull
vector<Point> findConvexHullbyQuixkHull(vector<Point> &points) {
    if (points.size() < 3) {
        cout << "Convex hull is not possible\n";
        return {};
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

// Helper function to print points
void printHull(vector<Point> &hull) {
    
    cout << "Convex Hull:\n";
    cout << "[ ";
    for ( auto &p : hull) {
        cout << "(" << p.x << ", " << p.y << "), ";
    }
    cout << "]\n"; 
}

int main() {
    vector<Point> points = {{3, 7}, {10, 2}, {1, 9}, {8, 4}, {5, 5}, {2, 3}, {6, 10}, {9, 1}, {7, 8}, {4, 6}};
    vector<Point> hull = findConvexHullbyQuixkHull(points);
    printHull(hull);
}
