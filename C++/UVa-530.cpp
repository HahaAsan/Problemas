#include <iostream>
#include <math.h>

using namespace std;

int main(){

	int n, k;
	int resultado;

	while(1){
      cin >> n >> k;
      if(n == 0 && k == 0) break;
		resultado = 1;
		if (k > (n / 2))
			k = n - k;

		for (int i = 0; i < k; i++) {
      	resultado *= (n - i);
         resultado /= (1 + i);
		}

		printf("%d\n", resultado);
	}

}