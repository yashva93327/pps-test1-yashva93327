#include<stdio.h>
void input (int *a,int *b,int *c)
{
  printf("enter the first number : ");
  scanf("%d",a);
  printf("enter the second number : ");
  scanf("%d" ,b);
  printf("enter the third number : ");
  scanf("%d",c);
}
void compare(int a, int b, int c, int *largest)
{
  if (a>b && a>c)
  {
   *largest=a;
  }
  else if(b>c)
  {
    *largest=b;
  }
  else
  {
    *largest=c;
  }
}
void output(int largest)
{
  printf("the largest number is %d\n" ,largest);
}
int main()
{
  int a,b,c,largest;
  input(&a,&b,&c);
  compare(a,b,c,&largest);
  output(largest);
  return 0;
}