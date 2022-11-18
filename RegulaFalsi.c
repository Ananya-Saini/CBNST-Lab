#include<stdio.h>
#include<math.h>
#define e 0.0001 //3 decimal places 
#define f(x) x*x*x - 4*x -9;
int main()
{
    float x0, x1, x2, f0, f1, f2;
    int i = 0;
    scanf("%f %f", &x0, &x1);
    do
    {
      f0 = f(x0);
      f1 = f(x1);
      if(f0*f1>0){
        printf("Wrong roots");
        return 0;
      }
      x2 = x0 - ((x1-x0)/(f1-f0))* f0;
      f2 = f(x2);
      if(f0*f2<0){
        x1 = x2;
        f1 = f2;
      }
      else{
        x0 = x2;
        f0 = f2;
      }
      i++;
      printf("Iteration: %d\n", i);
      printf("Value of funcs: %f       Value of roots: %f\n",f2, x2);
    }while(fabs(f2)>e);
    return 0;
}
