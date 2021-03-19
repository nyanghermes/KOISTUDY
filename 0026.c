#include <stdio.h>
int main(void)

{
int a,b,c;
scanf("%04d.%02d.%02d",&a,&b,&c);
printf("%02d-%02d-%04d",c,b,a);
return 0;
}
