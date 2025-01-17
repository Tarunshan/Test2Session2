#include <stdio.h>
float square(float n)
{
  float sqrt,temp;
  sqrt=n/2;
  temp=0;
  while (sqrt !=temp)
    {
      temp=sqrt;
      sqrt=(n/temp + temp)/2;
    }
  return sqrt;
}

void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("Enter x1 and y1 value");
  scanf("%f%f",x1,y1);
  printf("Enter x2 and y2 value");
  scanf("%f%f",x2,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *dist)
{
  float n;
  n=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
  *dist=square(n);
}

void output(float x1,float y1,float x2,float y2,float dist)
{
  printf("The distance between point (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,dist);
}
int main()
{
  float x1,x2,y1,y2,dist;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&dist);
  output(x1,y1,x2,y2,dist);
  return 0;
}