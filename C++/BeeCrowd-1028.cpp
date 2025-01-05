#include <iostream>
#include <math.h>
using namespace std;

int main(){

   int n;
   cin >> n;

   for(int i = 0; i < n; i ++){
      int ver = 0, socorro = 1;
      int a1, a2;
      cin >> a1 >> a2;
      if(a1 > a2){
         for(int j = 1; j <= sqrt(a2); j++){
            if(a2 % j == 0 && a1 % (a2 / j) == 0){
               printf("%d\n", a2/j);
               ver = 1;
               break;
            }
            if(a1 % j == 0 && a2 % j == 0) socorro = j;
         }
      }else{
         for(int j = 1; j <= sqrt(a1); j++){
            if(a1 % j == 0 && a2 % (a1 / j) == 0){
               printf("%d\n", a1/j);
               ver = 1;
               break;
            }
            if(a1 % j == 0 && a2 % j == 0) socorro = j;
         }
      }
      if(ver == 0) printf("%d\n", socorro);
   }
}