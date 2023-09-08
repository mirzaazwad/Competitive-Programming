#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

struct Point {
    double x, y;
    Point(double x, double y) : x(x), y(y) {}
};

double distance(Point p1, Point p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2))+1e-12;
}

bool are_lengths_equal(double la, double lb) {
    return abs(la - lb) < 1e-6;
}

bool are_lengths_greater(double la, double lb) {
    return la-lb>=1e-6;
}

int count_isosceles_triangles(vector<Point> points,int n) {
    int count = 0;
    
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                Point a = points[i];
                Point b = points[j];
                Point c = points[k];
                
                double ab = distance(a, b);
                double ac = distance(a, c);
                double bc = distance(b, c);
                
                if (are_lengths_equal(ab, ac) || are_lengths_equal(ab, bc) || are_lengths_equal(ac, bc)) {
                    vector<double> sides = {ab, ac, bc};
                    sort(sides.begin(), sides.end());
                    if(are_lengths_greater(sides[0] + sides[1],sides[2])){
                        count++;
                    }
                }
            }
        }
    }
    
    return count;
}

int main() {
    fastio
    int n;
    while(!(cin>>n).eof()){ 
        vector<Point>points;
        for(int i=0;i<n;i++){
            double x,y;
            cin>>x>>y;
            points.push_back(Point(x,y));
        }
        if(n<3){
            cout<<0<<endl;
            continue;
        }
        int result = count_isosceles_triangles(points,n);
        cout <<  result << endl;
    }
    
    
    return 0;
}
