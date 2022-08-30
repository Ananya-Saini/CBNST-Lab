# CBNST-Lab
#include<stdio.h>
#include<math.h>
int main() {
  int a;
  scanf("%d", &a);
  int b;
  scanf("%d", &b);
  int c;
  scanf("%d", &c);
  int d = (b*b) -(4*a*c);
  if(d<0) {
     printf("Real roots don't exist");
  }
  else if(d==0) printf("Two equal roots exist");
  else printf ("Two distinct real roots exist");
  if(d>=0){
    x=(-b+sqrt(d))/(2*a);
    y=(-b-sqrt(d))/(2*a);
    printf("The roots of the given equation are: %f & %f", x, y); 
  }
  return 0;
}
