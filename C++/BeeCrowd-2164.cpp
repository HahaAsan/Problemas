#include <iostream>
#include <math.h>

using namespace std;

double positivo(int n){

   if(n == 1) return ((1 + sqrt(5)) / 2);

   return ((1 + sqrt(5)) / 2) * positivo(n - 1);

}

double negativo(int n){

   if(n == 1) return ((1 - sqrt(5)) / 2);

   return ((1 - sqrt(5)) / 2) * positivo(n - 1);

}

int main(){

   int n;
   cin >> n;

   double a1 = pow(positivo(1), n), a2 = pow(negativo(1), n);

   double resposta = (a1 - a2) / sqrt(5);

   printf("%.1f", resposta);



}