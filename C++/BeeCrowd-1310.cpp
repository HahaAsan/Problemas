#include <iostream>
#include <vector>
#include <stdio.h>

int main() {

    int n;
    while(scanf("%d", &n) == 1){
        int ppd;
        scanf("%d", &ppd);
        int nmax = 0, vmax = 0;
        int natual = 0, vatual = 0;
        
        int vet[n];
        for(int i = 0; i < n; i++){

            scanf("%d", &vet[i]);
            vet[i] -= ppd;
            if(natual == 0 && vet[i] > 0){
                natual++;
                vatual = vet[i];
            }else if(vatual + vet[i] > 0){
                natual++;
                vatual += vet[i];
            }else{
                natual = 0;
                vatual = 0;
            }

            if(vatual > vmax){
                vmax = vatual;
                nmax = natual;
            }
        }

        printf("%d\n", vmax);



    }

}