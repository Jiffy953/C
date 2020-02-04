

#include<stdio.h>
int main(void)
{
    printf("%d\n", 455);
    printf("%i\n", 455);
    printf("%d\n", +455);
    printf("%+d\n", +455);
    printf("%d\n\n", -455);
    //he has a comment here so I now do as well as it makes things easier to read lol
    printf("%hd\n", 32000);
    printf("%hd\n", 32767);
    printf("%ld\n", 20000000L); //read below
    printf("%d\n", 200000000L);//have to add L for long at end of value
    printf("%d\n", 20000000044);
    printf("%o\n", 455); //octal
    printf("%u\n", 455);
    printf("%u\n", -4);
    printf("%x\n", 455); //hex
    printf("%X\n", 455); //capital hex
    printf("%s", "C programming class");
    printf("C programming class");
}
