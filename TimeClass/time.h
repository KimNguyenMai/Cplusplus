/*Write the definition for a class in C++ called time that has hours and minutes as integer. The class has the following member functions:

  void settime(int, int) // to set the specified value in object

  void showtime() // to display time object

  time sum(time) // to sum two time object & return time*/

#include<iostream>
using namespace std;
#ifndef time_h
#define time_h
#endif

class Time {
    private:
    int hours;
    int minutes;

    public: 
    Time();//constructor
    void settime(int, int); // to set the specified value in object
    void showtime(); // to display time object
    Time sum(Time); // to sum two time object & return time
 
};
