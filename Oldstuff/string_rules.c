#include<stdio.h>
int main(void)
{
    char character = 'A';
    printf("%c\n", character);

    printf("%s\n", "This is a string");

    char string[] = "This is a string";
    printf("%s\n", string);

    const char *stringPtr = "This is also a string";
    printf("%s\n", stringPtr);
}
