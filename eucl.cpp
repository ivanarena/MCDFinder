#include <iostream>
using namespace std;

void euclid(int x, int y);

int gcd;

// Given two integers, find their GCD using Euclid's algorithm
int main()
{
    int x, y;

    do {    
        cout << "Enter two integers:" << endl;
        cin >> x >> y;
    } while (x == 0 && y == 0); // (x,y) != (0,0)

    if (x == 0) {
        gcd = y;
    } else if (y == 0) {
        gcd = x;        
    } else {
        euclid(x,y);
    }

    cout << "GCD(" << x << ", " << y << ") = " << gcd << endl;
    return 0;
}

void euclid(int a, int b)
{
    int r;
    r = a % b;
    if (r == 0) {
        gcd = b; 
    } else {
        a = b;
        b = r;
        euclid(a,b);
    }
}
