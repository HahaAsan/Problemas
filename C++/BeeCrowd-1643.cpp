#include <stdio.h>

void fib(int n, int v[23]){
    v[0] = 1; 
    v[1] = 2; 
    for (int i = 2; i < n; i++) {
        v[i] = v[i-1] + v[i-2];
    }
}

int main(){
    
    int vetor[23], quant[23], n, num;
    for(int i=0; i<23;i++){
        vetor[i] = 0;
        quant[i] = 0;
    }
    fib(23, vetor);
    scanf(" %d", &num);
    for(int k=0; k<num; k++){
        for(int i=0; i<23; i++) quant[i] = 0;    
        scanf(" %d", &n);
        int resto = n;
        for (int i = 22; i >= 0; i--) {
            if (resto >= vetor[i]) {
                quant[i] = 1;
                resto -= vetor[i];
                i--;
            }
            if (resto == 0) break;
        }
        int soma = 0;
        
        for(int i=1; i<23; i++){
            if(quant[i] == 1){
                soma += vetor[i-1];
            }
        }
        printf("%d\n", soma);
    }
}