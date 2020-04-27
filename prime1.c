#include<stdio.h>
int prime_num(int a,int i)
{
    if(i==1)
    return 1;
    else if(a%i==0)
    return 0;
    else
    return prime_num(a,i-1);

}


void main()
{
    int n,ans;
    printf("Enter a Number\n");
    scanf("%d",&n);
    ans=prime_num(n,n/2);
    if(ans==1)
    {
        printf("The entered number is a prime number\n");
    }
    else
    {
        printf("The entered number is not prime\n");
    }
 }
