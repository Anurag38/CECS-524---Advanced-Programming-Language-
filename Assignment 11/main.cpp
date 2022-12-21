#include "line.h"

int main() {
  Line l1(2, 5, 8, 7); 
  Line l2(l1);

  Line l3;  
  l3.SetPoint1(10, 12);
  l3.SetPoint2(7, 5);

  cout << "Coordinates of Line l1: " << l1 << endl; 
  cout << "Coordinates of Line l2: " << l2 << endl; 
  cout << "Coordinates of Line l3: " << l3 << endl;

  Line l4;
  cout << "Enter Line L4: "; 
  cin >> l4;
  cout << "Coordinates of Line L4: " << l4 << endl;

  cout << "Length of L1: " << l1.Distance() << endl;   
  cout << "Slope of L1: " << l1.Slope() << endl;

  if (l1 == l2) 
    cout << "L1 is equal to L2\n";

  if (l3 != l4) 
    cout << "L3 is not equal to L4\n";
}

