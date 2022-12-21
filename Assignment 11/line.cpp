#include "line.h" 
#include <cmath>

Line::Line() {}

Line::Line(double x1, double y1, double x2, double y2) {       
  point1.setX(x1);
  point1.setY(y1); 
  
  point2.setX(x2); 
  point2.setY(y2);
}

Line::Line(Line& line) {
  point1.setX(line.point1.getX()); 
  point1.setY(line.point1.getY());  
  
  point2.setX(line.point2.getX()); 
  point2.setY(line.point2.getY());  
}


void Line::SetPoint1(double x1, double y1){
  point1.setX(x1);
  point1.setY(y1);
} 


void Line::SetPoint2(double x2, double y2) { 
  point2.setX(x2);
  point2.setY(y2);
}


void Line::SetLine(double x1, double y1, double x2, double y2) {
  point1.setX(x1);
  point1.setY(y1); 
  
  point2.setX(x2); 
  point2.setY(y2);
} 

double Line::Distance(){
  double distance = sqrt(pow(point2.getX() - point1.getX(), 2) + pow(point2.getY() - point1.getY(), 2));
 
  return distance;
}


double Line::Slope() {
  double slope = (point2.getY() - point1.getY()) / (point2.getX() - point1.getX());
  
  return slope;
}

 
bool Line::operator==(const Line& line) {
  if ((point1.getX() == line.point1.getX()) && 
      (point1.getY() == line.point1.getY()) && 
      (point2.getX() == line.point2.getX()) && 
      (point2.getY() == line.point2.getY())) 
      return true;

    return false;
}


bool Line::operator!=(const Line& line) {
  if ((point1.getX() != line.point1.getX()) || 
      (point1.getY() != line.point1.getY()) || 
      (point2.getX() != line.point2.getX()) || 
      (point2.getY() != line.point2.getY())) 
      return true;

  return false;
}


ostream& operator <<(ostream &output, const Line& line) {

  output << "(" << "(" << line.point1.getX() << "," << line.point1.getY() << ")" << "(" << line.point2.getX() << "," <<   
         line.point2.getY() << ")" << ")"; 
  
  return output;
}


istream& operator >>(istream &input, Line &line) {
  double x1, y1, x2, y2;

  input >> x1 >> y1 >> x2 >> y2; 
  line.point1.setX(x1); 
  line.point1.setY(y1); 
  
  line.point2.setX(x2); 
  line.point2.setY(y2);
   
  return input;
}


