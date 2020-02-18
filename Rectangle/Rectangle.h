/*Write the definition for a class in C++ called Rectangle that has floating point data members length and width. The class has the following member functions:
  void setlength(float) // to set the length data member
  void setwidth(float) // to set the width data member
  float perimeter() // to calculate and return the perimeter of the rectangle
  float area() // to calculate and return the area of the rectangle
  void show() // to display the length and width of the rectangle
  int sameArea(Rectangle) // that has one parameter of type Rectangle. sameArea returns 1 if the two Rectangles have the same area, and returns 0 if they don't.*/


#ifndef Rectnagle_h
#define Rectangle_h
#endif

class Rectangle {
    private:
        float length;
        float width;

    public:
        Rectangle(); //default constructor

        void setlength(float); // to set the length data member
        
        void setwidth(float); // to set the width data member

        void show(); // to display the length and width of the rectangle
        
        float perimeter(); // to calculate and return the perimeter of the rectangle
        
        float area(); // to calculate and return the area of the rectangle
        
        int sameArea(Rectangle); // that has one parameter of type Rectangle. sameArea returns 1 if the two Rectangles have the same area, and returns 0 if they don't.
};