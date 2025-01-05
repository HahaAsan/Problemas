#include <iostream>
#include <math.h>

using namespace std;

int main(){

   int n;
   cin >> n;

   for(int i = 0; i < n; i++){

      int limmin, limmax;
      cin >> limmin >> limmax;

      int cont = 0, max = 0, escolhido;
      for(int j = limmin; j <= limmax; j++){
         
         int quadrada = sqrt(j);
         
         for(int k = 1; k <= quadrada; k++){
            if(k * k == j){ 
//               printf("foi %d no %d ( raiz)\n", quadrada, j);
               cont++;
               break;
            }
            if(j % k == 0) cont += 2;
//            printf("foi %d no %d\n", k, j);
         }

//         printf("total do %d foi %d\n\n", j, cont);
         if(cont > max){
            max = cont;
            escolhido = j;
         }
         cont = 0;

      }
      printf("Between %d and %d, %d has a maximum of %d divisors.\n", limmin, limmax, escolhido, max);

   }


}