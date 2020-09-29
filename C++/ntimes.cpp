#include<iostream>
using namespace std;

int stinky(int number);
int main()
{
    int number = 0;
    cin >> number;
    stinky(number);
    
}
int stinky(int number)
{
    int result;
    int temp;
    for(int result = number; result > 0;result--)
    {
        temp = number * result;
        if(result <= 0)
        {
            return temp;
        }

    }
    
}