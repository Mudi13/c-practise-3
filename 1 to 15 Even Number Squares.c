#include<stdio.h>
int main()
{
    int n;   
    for(int n=1;n<=15;n++)
    if(n%2==0)
    {
        printf("%d \t %d\n",n,n*n);
    }
}