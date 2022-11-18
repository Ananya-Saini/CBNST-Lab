#include<stdio.h>
#include<math.h>
#define e 0.0001 //3 decimal places 
#define f(x) 3*x-cos(x)-1;
#define df(x) 3 + sin(x);
int main()
{
    float x0, x1, f0, f1, df0;
    int i = 0;
    scanf("%f", &x0);
    do
    {
      f0 = f(x0);
      df0 = df(x0);
      x1 = x0 - f0/df0;
      f1 = f(x1);
      x0 = x1;
      i++;
      printf("Iteration: %d\n", i);
      printf("Value of funcs: %f       Value of roots: %f\n",f1, x1);
    }while(fabs(f1)>e);
    return 0;
}
