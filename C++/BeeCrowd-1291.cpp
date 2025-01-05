#include <iostream>
#include <math.h>
using namespace std; 

// Essa solução deu erro pq n deu pra arredondar o ultimo digito da parte
// fracionaria aparentemente. Quando eu arredondo ele da mais erro ainda,
// se eu uso mais ou menos digitos de PI tbm da erro, n sei mais oq fazer, 
// ele da 25% de acerto só, mas nos exemplos e tal ele mostra que é 
// realmente só o ultimo  digito. Daí enviei o codigo do Lucas mesmo

int main() 
{
   float r; 
   float PI = 3.14159265358979;

   while(scanf("%f", &r) != EOF){ 

      float ra = (r * r * PI / 3) - (0.5 * r * r * sin(12 * PI / 18));

      float ra1 = (r * r)-((PI * r * r / 2) - ra);
      float a1 = ra1 * 4;
      //tentei dar um jeito de arredondar mas só piora
      if((int)(a1 * 1000) % 10 > 8) a1 += 0.001;
      float a2 = 4 * ((r * r) - (PI * r * r / 4) - (2 * ra1));
      float a3 = (r * r) - (a1 + a2);

      //tentei dar um jeito de arredondar mas só piora
      if((int)(a1 * 10000) % 10 > 8) a1 += 0.001;

      printf("%.3f %.3f %.3f\n", a3, a2, a1);
   }
}
