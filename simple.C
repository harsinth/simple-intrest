#include <stdio.h>
int main()
{
    int p,r,t,i;
    printf("Enter the amount borrowed(principal amount):\n ");
    scanf("%d",&p);
    printf("Enter the rate of intrest:\n");
    scanf("%d",&r);
    printf("enter the duration of loan:");
    scanf("%d",&t);
    i=(p*t*r)/100;
    printf("simple intrest is %d",i);
    return 0;
}