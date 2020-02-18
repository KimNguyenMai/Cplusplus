/*Write the definition for a class in C++ called time that has hours and minutes as integer. The class has the following member functions:

  void settime(int, int) // to set the specified value in object

  void showtime() // to display time object

  time sum(time) // to sum two time object & return time

1. Write the definitions for each of the above member functions.

2. Write main function to create three time objects. Set the value in two objects and call sum() to calculate sum and assign it in third object. Display all time objects.
*/

#include <iostream>
#include "time.h"
using namespace std;


int main(){
  Time time1;
  Time time2;
  Time time3;

  cout << "Time 1 object: " << endl; 
  time1.settime(2, 14);
  time1.showtime();

  cout << endl << "Time 2 object: " << endl; 
  time2.settime(24, 120);
  time2.showtime();

  cout << endl << "Time 3 object: " << endl;
  time3 = time1.sum(time2);
  time3.showtime();

}