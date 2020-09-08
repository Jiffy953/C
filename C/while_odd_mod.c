#include<stdio.h>

int main(void)
{
    int result;
    int count = 0;
    while(count < 50)
    {
        count = count + 1;
        if (count % 2 != 0)
        {
            printf("%d\n", count);
        }
    }
}
