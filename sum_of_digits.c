// SUM OF DIGITS IN A NUMBER 

#include<stdio.h>

int main()
{
    int a,sum=0;
    scanf("%d",&a);
    while(a!=0)
    {
        int rem=a%10;
        sum+=rem;
        a=a/10;
    }
    printf("\nSUM OF DIGITS IS %d",sum);
}