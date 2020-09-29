//Jared See
//Last run at: 9/26/20 2:39pm

#include<iostream>
using namespace std;

int  rShift(int &, int &, int &, int &, int &, int &);
int main()
{
    int a,b,c,d, max = 0, avg = 0;
    cout << "Enter 4 values: ";
    cin >> a >> b >> c >> d;
    rShift(a,b,c,d,max,avg);
    cout << "New order is: " << a << b << c << d << endl;
    cout << "Max is: " << max << endl;
    cout << "Average is: " << avg << endl;
}

int rShift(int &a, int &b, int &c, int &d, int &max, int &avg)
{
    int temp = b;
    b = a;
    a = d;
    d = c;
    c = temp;

    for(int i = 0; i <= a |i <= b |i <= c |i <= d; i++)
    {
        max = i;
    }
    
    avg = (a + b + c + d) / 4;
}
