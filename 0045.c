#include<stdio.h>
int main(void)
{
long long int a,b,c;
scanf("%lld %lld %lld",&a,&b,&c);
printf("%lld\n%.1f",a+b+c,(a+b+c)/3.0);
return 0;
}
