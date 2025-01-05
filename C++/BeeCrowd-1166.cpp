#include <iostream>
#include <cmath> 

int main() {

    int n;
    std::cin >> n;
    int v =0;

    for(int i = 0; i < n; i++){

        int npaus;
        std::cin >> npaus;
        double paus[npaus] = {0};
        int j = 1;
        while(true){
            for(int k = 0; k < npaus; k++){
                if(fmod(sqrt(paus[k] + j), 1) == 0 || paus[k] == 0){
                    paus[k] = j;
                    j++;
                    v=0;
                    break;
                
                }
                v=1;
            }
            if(v)break;
        }
        std::cout << j << std::endl;

    }
}