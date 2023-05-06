#include "polygon.hpp"
#include <cmath>

//void Polygon::SetVertex(Point2D* listOfPoints)
//{
  //  m_vertex = new Point2D;
//}

Polygon::Polygon(Point2D* listOfPoint, size_t size){
    m_vertex = new Point2D[size];
    for(size_t i = 0; i < size; i++)
    {
        m_vertex[i] = listOfPoint[i];
    }
    sizet = size;
}

//Polygon::Polygon(Point2D* listOfPoints, size_t size)
//{
       // m_vertex = new Point2D[size];
       // for(size_t i = 0; i < size; i++)
       // {
        //    m_vertex[i] = listOfPoints[i];
       // }

//}
//Polygon::Polygon()
//{
    //cout << "Hi, I'm the constructor" << endl;
//}
Polygon::~Polygon()
{
    if(m_vertex!=nullptr) delete m_vertex;
    ////cout << "Hi, I'm the deconstructor" << endl;
}
/*bool Polygon::ClearPolygon()
{
    if(m_vertex.size() == 0) return false;

    m_vertex.clear();
    return true;
}*/

//float Polygon::CalcPerimeter(size_t size)
//{
  //  float per = 0;

    //for(size_t i = 0; i < size-1; i++)
    //{
      //  Point2D pt1 = m_vertex[i];
       // Point2D pt2 = m_vertex[i + 1];
        //per += sqrt((pt1.GetX()-pt2.GetX())*(pt1.GetX()-pt2.GetX()) +
        //(pt1.GetY()-pt2.GetY())*(pt1.GetY()-pt2.GetY()));

    //}

    //Point2D pt1 = m_vertex[0];
    //Point2D pt2 = m_vertex[size - 1];
    //per += sqrt((pt1.GetX()-pt2.GetX())*(pt1.GetX()-pt2.GetX()) +
    //(pt1.GetY()-pt2.GetY())*(pt1.GetY()-pt2.GetY()));

    //return per;
//}

float Polygon::CalcPerimeter()
{
    float per = 0;

    for(size_t i = 0; i < sizet-1; i++)
    {
        Point2D *p1 = new Point2D[1];
        Point2D *p2 = new Point2D[1];
        p1[0].SetX(m_vertex[i].GetX());
        p1[0].SetY(m_vertex[i].GetY());
        p2[0].SetY(m_vertex[i + 1].GetX());
        p2[0].SetX(m_vertex[i + 1].GetY());

        per += sqrt((p1[0].GetX()-p2[0].GetX())*(p1[0].GetX()-p2[0].GetX()) +
        (p1[0].GetY()-p2[0].GetY())*(p1[0].GetY()-p2[0].GetY()));
    }

    Point2D *p1 = new Point2D[1];
    Point2D *p2 = new Point2D[1];
    p1[0].SetX(m_vertex[0].GetX());
    p1[0].SetY(m_vertex[0].GetY());
    p2[0].SetY(m_vertex[sizet - 1].GetX());
    p2[0].SetX(m_vertex[sizet - 1].GetY());
    per += sqrt((p1[0].GetX()-p2[0].GetX())*(p1[0].GetX()-p2[0].GetX()) +
        (p1[0].GetY()-p2[0].GetY())*(p1[0].GetY()-p2[0].GetY()));

    return per;
}


//float Polygon::CalcArea(size_t size)
//{
  //  float area = 0;
    //for(size_t i = 0; i < size-1; i++)
    //{
      //  Point2D *p1 = new Point2D[1];
        //Point2D *p2 = new Point2D[1];
       // p1[0].SetX(m_vertex[i].GetX());
       // p1[0].SetY(m_vertex[i].GetY());
       // p2[0].SetY(m_vertex[i + 1].GetX());
        //p2[0].SetX(m_vertex[i + 1].GetY());

        //area += (p1[0].GetX()+p2[0].GetX())*(p1[0].GetY()-p2[0].GetY());

    //}
    //Point2D *p1 = new Point2D[1];
    //Point2D *p2 = new Point2D[1];
    //p1[0].SetX(m_vertex[0].GetX());
    //p1[0].SetY(m_vertex[0].GetY());
    //p2[0].SetY(m_vertex[sizet + 1].GetX());
    //p2[0].SetX(m_vertex[sizet + 1].GetY());

    //area += (p1[0].GetX()+p2[0].GetX())*(p1[0].GetY()-p2[0].GetY());

    //return area/2.0;
//}

float Polygon::CalcArea(size_t size)
{
    float area = 0;
    Point2D *p2 = new Point2D[1];
    p2[0].SetY(m_vertex[sizet - 1].GetY());
    p2[0].SetX(m_vertex[sizet - 1].GetX());

    for(size_t i = 0; i < size; i++)
    {
        Point2D *p1 = new Point2D[1];
        p1[0].SetX(m_vertex[i].GetX());
        p1[0].SetY(m_vertex[i].GetY());

        area += (p1[0].GetX() + p2[0].GetX()) *
        (p2[0].GetY() - p1[0].GetY());

        p2[0].SetY(m_vertex[i].GetY());
        p2[0].SetX(m_vertex[i].GetX());

    }

    return abs(area / 2.0);
}
