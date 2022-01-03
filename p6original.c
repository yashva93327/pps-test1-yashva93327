#include <stdio.h>
int input_n()
{
  int n;
 printf("Enter the number of terms: ");
 scanf("%d", &n);
 return n;
}
int sum_n(int n)
{
  int sum;
  sum=(n*(n+1))/2;
  return sum;
}
void output(int n, int sum)
{
  printf("The sum of first %d  natural numbers are %d", n, sum);
}
int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n(n);
  output(n,sum);
  return 0;
}
