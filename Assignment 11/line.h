#ifndef LINE_H 
#define LINE_H 
#include "point.h" 
#include <iostream>
using namespace std;

class Line {
    Point point1, point2; 

  public:
    Line();
    Line(double x1, double y1, double x2, double y2); 
    Line(Line& I); 

    void SetPoint1(double x1, double y1); 
    void SetPoint2(double x2, double y2); 
    void SetLine(double x1, double y1, double x2, double y2); 

    double Distance(); 
    double Slope(); 

    friend ostream& operator <<(ostream &output, const Line& line);  
    friend istream& operator >>(istream &input, Line &line); 
    
    bool operator==(const Line& line);
    bool operator!=(const Line& line);
};
#endif
