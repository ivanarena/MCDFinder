#include <iostream>
using namespace std;

int euclid(int x, int y);

// Given two integers, find their GCD using Euclid's algorithm
int main()
{
    int x, y;
    int gcd;
    
    do {    
        cout << "Enter two integers:" << endl;
        cin >> x >> y;
    } while (x == 0 && y == 0); // (x,y) != (0,0)

    if (x == 0) {
        gcd = y;
    } else if (y == 0) {
        gcd = x;        
    } else {
        gcd = euclid(x,y);
    }

    cout << "GCD(" << x << ", " << y << ") = " << gcd << endl;
    return 0;
}

int euclid(int a, int b)
{
    int r;
    r = a % b;
    if (r == 0) {
        return b; 
    } else {
        a = b;
        b = r;
        return euclid(a,b);
    }
}
