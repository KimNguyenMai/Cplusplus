/*Write the definition for a class in C++ called Rectangle that has floating point data members length and width. The class has the following member functions:

  void setlength(float) // to set the length data member

  void setwidth(float) // to set the width data member

  float perimeter() // to calculate and return the perimeter of the rectangle

  float area() // to calculate and return the area of the rectangle

  void show() // to display the length and width of the rectangle

  int sameArea(Rectangle) // that has one parameter of type Rectangle. sameArea returns 1 if the two Rectangles have the same area, and returns 0 if they don't.

1. Write the definitions for each of the above member functions in C++.

2. Write main function to create two rectangle objects. Set the length and width of the first rectangle to 5 and 2.5. Set the length and width of the second rectangle to 5 and 18.9. Display each rectangle and its area and perimeter.

3. Check whether the two Rectangles have the same area and print a message indicating the result. Set the length and width of the first rectangle to 15 and 6.3. Display each Rectangle and its area and perimeter again. Again, check whether the two Rectangles have the same area and print a message indicating the result.*/

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
  Rectangle rec1;
  Rectangle rec2;

    /*frist test: rec1.setlength(5);
    rec1.setwidth(2.5);*/

    rec1.setlength(15);
    rec1.setwidth(6.3);
    cout << "rectangle 1 dimensions: " << endl;
    rec1.show();
  
    cout << "Perimeter of Rectangle 1 is: " << rec1.perimeter() << "\n" << "Area of Rectangle 1 is: "  << rec1.area() << endl;


    rec2.setlength(5);
    rec2.setwidth(18.9);
    cout << "rectangle 2 dimensions: " << endl;
    rec2.show();

    cout << "Perimeter of Rectangle 2 is: " << rec2.perimeter() << "\n" << "Area of Rectangle 2 is: "  << rec2.area() << endl;

    cout << "Compare two rectangles area: " << rec1.sameArea(rec2) << endl;

return 0;
}