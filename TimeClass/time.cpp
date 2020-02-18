/*Write the definition for a class in C++ called time that has hours and minutes as integer. The class has the following member functions:

  void settime(int, int) // to set the specified value in object

  void showtime() // to display time object

  time sum(time) // to sum two time object & return time

1. Write the definitions for each of the above member functions.*/

#include <iostream>
#include "time.h"
using namespace std;

Time::Time(){
    hours;  
    minutes; 

};

void Time::settime(int h, int m){
    hours = h;
    minutes = m;
};

void Time::showtime(){
    cout << "Hours and minutes: " << hours << ":" << minutes << endl;
};

Time Time::sum(Time t1){

    Time sumtime;

    sumtime.minutes = minutes + t1.minutes;
    sumtime.hours = sumtime.minutes/60;
    sumtime.hours += hours + t1.hours;
    if (sumtime.hours > 24){
        int overtime = abs(24 - sumtime.hours);
        sumtime.hours -= overtime;
        cout << "Hours counted to the next day: " << overtime << endl;
    }
    sumtime.minutes = sumtime.minutes % 60;

    return sumtime;

};