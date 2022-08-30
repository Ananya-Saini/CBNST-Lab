#include <stdio.h>
#include <math.h>
double root(int , int , int , int , int , int , double);
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int deg, deg1, deg2;
    scanf("%d %d %d", &deg, &deg1, &deg2);
    double x, y;
    scanf("%lf %lf", &x, &y);
    if((root(a, b, c, deg, deg1, deg2, x)>0 && root(a, b, c, deg, deg1, deg2, y)>0) || (root(a, b, c, deg, deg1, deg2, x)<0 && root(a, b, c, deg, deg1, deg2, y)<0)){
        printf("Roots don't exist between the given set");
    }
    else{
        while((root(a, b, c, deg, deg1, deg2, x)-root(a, b, c, deg, deg1, deg2, y)>0.0001) || (root(a, b, c, deg, deg1, deg2, x)-root(a, b, c, deg, deg1, deg2, y)<0.0001)){
            double m = (double)(x+y)/(double)2;
            if((root(a, b, c, deg, deg1, deg2, m))<0.0000 && (root(a, b, c, deg, deg1, deg2, x)<0.0000) || (root(a, b, c, deg, deg1, deg2, m)>0.0000 && (root(a, b, c, deg, deg1, deg2, x)>0.0000))) x=m;
            else y=m;
        }
        printf("Root of the given equation is: %lf", ((x+y)/(double)2));
    }
    return 0;
}
double root(int a, int b, int c, int deg, int deg1, int deg2, double z){
    return ((((double)a)*pow(z, (double)deg))+ (((double)b)*pow(z, (double)deg1)) + (((double)c)*pow(z, (double)deg2)));
}
