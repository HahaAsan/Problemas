#include <iostream>


int main(){

    int n;
    bool sim = false;
    while(scanf("%d", &n) == 1){

        for(int i = 0; i < 100 && !sim; i++){
            for(int j = i; j < 100; j++){
                if(n == (i*i) + (j*j)){

                    sim = true;
                    break;

                }
            }
        }

        if(sim) printf("YES\n");
        else printf("NO\n");
        sim = false;
    }
    

}