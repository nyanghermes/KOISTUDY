#include<stdio.h>
int main(void)
{
  int a;
  scanf("%d", &a);
  if(a>0) printf("plus\n");//0보다 크면 플러스
  else printf("minus\n");//0보다 작으면 마이너스

  if(a%2==0) printf("even\n");//2로 나눈 나머지가 0이면 짝수
  else printf("odd\n");//그 외에는 홀수
  
  return 0;
}