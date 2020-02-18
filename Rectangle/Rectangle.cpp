/*Write the definition for a class in C++ called Rectangle that has floating point data members length and width. The class has the following member functions:
  void setlength(float) // to set the length data member
  void setwidth(float) // to set the width data member
  float perimeter() // to calculate and return the perimeter of the rectangle
  float area() // to calculate and return the area of the rectangle
  void show() // to display the length and width of the rectangle
  int sameArea(Rectangle) // that has one parameter of type Rectangle. sameArea returns 1 if the two Rectangles have the same area, and returns 0 if they don't.
*/
#include <iostream>
#include "Rectangle.h"
using namespace std;


Rectangle::Rectangle(){
}; //default constructor

void Rectangle::setlength(float L){
    length = L;
}; // to set the length data member
        
void Rectangle::setwidth(float W){
    width = W;
}; // to set the width data member

void Rectangle::show(){
    cout << "Length is: " << length << "\n" << "Width is: " << width << endl;
}; // to display the length and width of the rectangle
        
float Rectangle::perimeter(){
    return 2 * (length + width);
}; // to calculate and return the perimeter of the rectangle

        
float Rectangle::area(){
    return length * width;
}; // to calculate and return the area of the rectangle
        
int Rectangle::sameArea(Rectangle R){
    float area1 = length * width;
    float area2 = R.length * R.width;
    if (area1 == area2){
        cout << "Two rectangles have the same area!  " << endl;
        return 1;
    } 
    else cout << "Two rectangles do not have the same are!" << endl;
        return 0;
}; // that has one parameter of type Rectangle. sameArea returns 1 if the two Rectangles have the same area, and returns 0 if they don't.