#include<stdio.h>
int main(void)
{
char a[2001];
fgets(a,2000,stdin);
printf("%s",a);
return 0;
}
