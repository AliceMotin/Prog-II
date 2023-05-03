#include "polygon.hpp"

int main()
{
    //primeira forma de inicializar um polygon
    vector< Point2D > listOfPoints;
    listOfPoints.push_back(Point2D(0,0));
    listOfPoints.push_back(Point2D(0,10));
    listOfPoints.push_back(Point2D(10,10));
    listOfPoints.push_back(Point2D(10,0));
    //listOfPoints.push_back(Point2D(30,0));
    //listOfPoints.push_back(Point2D(15,10));

    //Polygon instance
    Polygon Shape1(listOfPoints);
    cout << "Shape Perimeter: " << Shape1.CalcPerimeter() << endl;

    Polygon Shape2 (listOfPoints);
    cout << "Shape Area: " << Shape2.CalcArea() << endl;

    return 0;
};
