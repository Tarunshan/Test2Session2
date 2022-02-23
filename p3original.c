#include <stdio.h>
int input_number()
{
  int n;
  printf("Enter number");
  scanf("%d",&n);
  return n;
}

int is_prime(int n)
{
  int count=0;
  for (int i=1;n>=i;i++)
    {
      if (n%i==0)
      {
        count+=1;
      }
    }
  return count;
}

void output(int n,int is_prime)
{
  if (is_prime==2)
  {
    printf("%d is a prime number",n);
  }
  else
  {
    printf("%d is not a prime number",n);
  }
}

int main()
{
  int n,p;
  n=input_number();
  p=is_prime(n);
  output(n,p);
  return 0;
}