#include <stdio.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter x1 and y1 value ");
  scanf("%f%f",x1,y1);
  printf("Enter x2 and y2 value ");
  scanf("%f%f",x2,y2);
  printf("Enter x3 and y3 value ");
  scanf("%f%f",x3,y3);
}

int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  float area;
  area=0.5*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
  if (area==0)
  {
    return 1;
  }
  else
  {
    return 2;
  }
}
void output(int istriangle)
{
  if (istriangle==1)
  {
    printf("It is not a triangle");
  }
  else
  {
    printf("It is a triangle");
  }
}

int main()
{
  float x1,y1,x2,y2,x3,y3;
  int t;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  t=is_triangle(x1,y1,x2,y2,x3,y3);
  output(t);
  return 0;
}