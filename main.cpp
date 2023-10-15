#include <iostream>
#include <cmath>

using namespace std;

class Point {
public:
    int x;
    int y;
    int thickness = 1;
    string color;
    
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
        this->color = "black";
    }
};

class Line : public Point {
public:
    Point p1;
    Point p2;
    double lenght;
    Line(Point p1 = 0, Point p2 = 0) {
        int newX = p1.x > p2.x ? p1.x - p2.x : p2.x - p1.x;
        int newY = p1.y > p2.y ? p1.y - p2.y : p1.y - p2.y;
        this->lenght = sqrt(((newX * newX) + (newY * newY))) ;
    }
};

class Figure : public Line {
public:
    Line line1;
    Line line2;
    Line line3;
    double P;
    double S;
    Figure(Line line1, Line l2, Line l3){
        P = (line1.lenght + line2.lenght + line3.lenght) / 2;
        cout << P << endl;
        S = abs(P*(P - line1.lenght)*(P - line2.lenght)*(P - line3.lenght));
        cout << S;
    }
};

int main()
{
    Point point1(2, 3);
    Point point2(4, 5);
    Point point3(7, 2);
    
    Line line1(point1, point2);
    Line line2(point2, point3);
    Line line3(point3, point1);

    Figure Triagle(line1, line2, line3);
    Figure(line1, line2, line3);
}
