#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int P1, P2, e,d,m,c;
    cout << "Enter first prime number: " << endl;
    cin >> P1;
    cout << "Enter second prime number: " << endl;
    cin >> P2;
    //I would check if the input number is prime, but for the purpose of the exercise, i'm keeping this simple and assuming im living in a perfect world.
    int N = P1 * P2;
    int PhiN = (P1-1) * (P2-1);
    cout << "N = P1 * P2: " << N << endl;
    cout << "PHI of N is: " << PhiN << endl;
    cout << "Pick a odd number that greater than 1 and smaller than PHI of N: " << endl;
    cin >> e;
    d = e % PhiN - 1;
    m = 9; //again, for simplicity, I'm assuming the message is already in number instead of string
    c = pow(m,e); //encrypt message
    m = pow(c,d); // decrypt
    cout << "e is: " << e << endl;
    cout << "d is: " << d << endl;
    cout << "original message is: " << m << endl;
    cout << "encrypted message is: " << c << endl;
    cout << "decrypted message is: " << d << endl;

    return 0;
}
