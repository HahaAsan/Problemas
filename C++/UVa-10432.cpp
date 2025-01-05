#include<stdio.h>
#include<math.h>
 
 
int main(){

   double r;
   int n;

   while( scanf("%lf%d", &r, &n) == 2 )
   {

      double angolo = (double) 360 / n ;

      double angolo2 = (double) 90 - (angolo / 2);

      double radiano = angolo2 * M_PI / 180;

      double b = 2 * r * cos(radiano);

      double h = r * sin(radiano);

      double A = (b * h) / 2;

      printf("%.3lf\n",  A * n );

   }

}