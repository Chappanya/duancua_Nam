#include<stdio.h>
 long NhiPhan(int a)
{
    long b;
    if(a==0)
         return 0;
    else
         b=a%2; 
    return NhiPhan(a/2)*10+b;
}
int main()
{
    int n;
    printf("Nhap n :");
    scanf("%d",&n);
    printf("%ld",NhiPhan(n));
    return 0;
}