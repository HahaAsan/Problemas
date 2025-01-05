#include <stdio.h>
#include <math.h>

#define DIS 12 

int main() {
    int d, vf, vg;

    while (scanf("%d %d %d", &d, &vf, &vg) == 3) {

        double tg = sqrt(DIS * DIS + d * d) / vg; 
        double tf = (double)DIS / vf;
        
        if (tg <= tf) printf("S\n"); 
        else printf("N\n"); 
    }

}
