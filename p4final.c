#include<stdio.h>
int input()
{
  int a;
  printf("enter the number:");
  scanf("%d",&a);
  return a;
}
int compare(int a ,int b,int c)
{
  if(a>b && a>c)
  {
    return a;
  }
  else if (b>c)
  {
    return b;
  }
  else
  {
    return c;
  }
}
int output(int largest)  
{
  printf("the largest number is %d \n",largest);
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=compare(a,b,c);
  output(largest);
  return 0;
}
