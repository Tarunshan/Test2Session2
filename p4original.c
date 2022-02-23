#include <stdio.h>
int main()
{
  int n;
  printf("Enter value of n");
  scanf("%d",&n);
  int first=0,second=1,third;
  third=first+second;
  printf("%d,%d,%d,",first,second,third);
  for (int i=0;n-3>i;i++)
    {
      first=second;
      second=third;
      third=first+second;
      printf("%d,",third);
    }
  return 0;
}