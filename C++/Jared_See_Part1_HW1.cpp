//Jared See
//Last run at: 9/26/20 2:39pm


#include<iostream>
using namespace std;


int gcd(int x, int y);
int main()
{
    int x, y;
    cout << "Enter two values: ";
    cin >> x;
    cin >> y;
    cout << "GCD is: "<< gcd(x,y) << endl;
}

int gcd(int x, int y)
{
    if( (x - y) > 0 && x % y == 0)
    {
        return y;
    }
    if( (y - x) > 0 && y % x == 0)
    {
        return x;
    }
    if ( (x - y) > 0 && x % y != 0)
    {
        gcd(x - y, y);
    }
    if ( (y - x) > 0 && y % x != 0)
    {
        gcd(x, y - x);
    }
    else
        gcd(x - y, y);
}