#include<iostream>
using namespace std;

int fib(int x, int y);

int main()
{
    int x;
    int y = 0;
    cin >> x;
    fib(x,y);
}
int fib(int x, int y)
{
    if(x > 0)
    {

        fib(x,y);
    }
}