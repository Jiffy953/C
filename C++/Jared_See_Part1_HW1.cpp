#include<iostream>
using namespace std;

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
}