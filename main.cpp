#include <iostream>
using namespace std;
class Figure {
public:
    string name;
    int square;
};
class Rectangle : public Figure {
public:
    Rectangle(int width, int height){
        this->name = "Rectangle";
        this->square = width * height;
    }
};
class Square : public Figure{
public:
    Square(int side,int line){
        this->name = "Square";
        this->square = side * side;
    }
    
    
    void reset(Rectangle Object){
        if(Object.square > this->square){
            cout << "Прямоугольник не влезает в квадрат" << endl;
        }
        else{
            cout << "Прямоугольник влез в квадрат" <<endl;
        }
    }
};
class Rhombus : public Figure{
public:
    Rhombus(int side_length, int diagonalLength){
        this->name = "Rhombus";
        this->square = (side_length * diagonalLength) / 2;
    }
    void reset(Rectangle Object){
        if(Object.square > this->square){
            cout << "Прямоугольник не влезает в ромб" << endl;
        }
        else{
            cout << "Прямоугольник влез в ромб" <<endl;
        }
    }
    
    void reset1(Square Object){
        if(Object.square > this->square){
            cout << "Квадрат не влезает в ромб" << endl;
        }
        else{
            cout << "Квадрат влез в ромб" <<endl;
        }
    }

};
class Triangle : public Figure{
public:
    Triangle(int base, int triangleHeight){
        this->name = "Triangle";
        this->square = (base * triangleHeight) / 2;
    }
    void reset(Rectangle Object){
        if(Object.square > this->square){
            cout << "Прямоугольник не влезает в треугольник" << endl;
        }
        else{
            cout << "Прямоугольник влез в треугольник" <<endl;
        }
    }
    
    void reset1(Square Object){
        if(Object.square > this->square){
            cout << "Квадрат не влезает в треугольник" << endl;
        }
        else{
            cout << "Квадрат влез в треугольник" <<endl;
        }
    }

};
class Parallelogram : public Figure{
public:
    Parallelogram(int side, int height){
        this->name = "Parallelogram";
        this->square = side * height;
    }
    void reset(Rectangle Object){
        if(Object.square > this->square){
            cout << "Прямоугольник не влезает в треугольник" << endl;
        }
        else{
            cout << "Прямоугольник влез в треугольник" <<"\n\n";
        }
    }

    
    void reset1(Square Object){
        if(Object.square > this->square){
            cout << "Квадрат не влезает в паралелограмм" << endl;
        }
        else{
            cout << "Квадрат влез в паралелограмм" <<endl;
        }
    }
};
int main()
{
    Rectangle rectagle(5, 10);
    Square skuer(8,1);
    Rhombus Rombus(4,8);
    Triangle triangle(3,7);
    Parallelogram Paralelogramm(13,9);
    
    skuer.reset(rectagle);
    Rombus.reset(rectagle);
    triangle.reset(rectagle);
    Paralelogramm.reset(rectagle);
    
    Rombus.reset1(skuer);
    triangle.reset1(skuer);
    Paralelogramm.reset1(skuer);
}


/*
 cout << "Rectangle: " << rectagle.name << ", Square: " << rectagle.square << endl;
 cout << "Rectangle: " << rectagle.name << ", Square: " << rectagle.square << endl;
 cout << "Rhombus: " << Rombus.name << ", Square: " << Rombus.square << endl;
 cout << "Triangle: " << triangle.name << ", Square: " << triangle.square << endl;
 cout << "Parallelogram: " << Paralelogramm.name << ", Square: " << Paralelogramm.square << endl;
 */

/*
 
 */
