#include<stdio.h>
int main()
{
    int n,rem,originalint=0;
    int var=0;
    n=12321;

    originalint=n;

    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        var=var*10;
        var=var+rem;
    }
    if(originalint==var)
    {
        printf(" palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
    return 0;
}
