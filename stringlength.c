#include<stdio.h>
int main()
{
    char str[] = "pravin";

    printf("the given string is = %s \n",str);


    int length;
    length = sizeof str;
    printf("string length is %d \n\n",length-1);


    return 0;
}
