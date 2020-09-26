#include<iostream>
using namespace std;

<<<<<<< HEAD
int gcd(int x, int y);
int main()
{
    int x,y;
    cin >> x;
    cin >> y;
    cout << gcd(x,y) << endl;
}
int gcd(int x, int y)
{
    {
        if(x > y)
        {
            for(int i = y; i > 0 ; i--)
            {
                
            }
        }
        else
        {
            gcd(x,y);
        }
    }
=======

int gcd(int x, int y);
int main()
{
    int x, y;
    cout << "Enter two values: ";
    cin >> x;
    cin >> y;
    cout << gcd(x,y);
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
    
>>>>>>> 27a07494825937d9b3ad430f069bd7a6a393071e
}