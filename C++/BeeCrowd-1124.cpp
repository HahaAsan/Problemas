#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
}ponto;

int main(){

    int r1, r2, l, c;
    while(1){
        scanf("%d %d %d %d", &l, &c, &r1, &r2);
        if(l == 0) break;
        ponto p2 = {l - r2, c - r2};

        if(r1 * 2 > l || r1 * 2 > c || r2 * 2 > l || r2 * 2 > c) printf("N\n");
        else if(sqrt((p2.x - r1)*(p2.x - r1) + (p2.y - r1)*(p2.y - r1)) >= r1 + r2) printf("S\n");
        else printf("N\n");       


    }

}