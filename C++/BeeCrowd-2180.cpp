#include <iostream>
#include <math.h>


using namespace std;

#include <bitset>
#include <vector>
#define SIEVE_SIZE 60001 //10 Mi
#define marte 60000000

vector<int> primes;
bitset<SIEVE_SIZE + 1> bs; //se o valor for 0, nao eh primo.
//cria dois vetores:
// - um bitset com tamanho SIEVE_SIZE com valores bool: primo ou nao primo
// - um vetor com os numeros primos.
void sieve()
{
   int i, j, max = SIEVE_SIZE;

   bs.reset(); //todos para false
   bs.flip(); //todos para true
   
   bs.set(0, false);
   bs.set(1, false);

   for(int i = 2; i * i <= max; i++)//poderia ser até raiz(Max) se não tivesse o <vector> primes.
   {

      if( bs.test(i) == true ) // i é primo, e todos os múltiplos de i nao
      {
         primes.push_back( (int)i ); // o 2 eh o primeiro primo
         for( j = i*i; j <= max; j += i ) //múltiplos de i. Ex(3): 9, 12, 15, 18
         {
            bs.set(j, false);
         }
      }
   }
}


//deve-se garantir que p não é maior que raiz(max(primes[]))
bool isPrime(int p)
{
   if( p < SIEVE_SIZE )
   return bs.test(p);
   for(int i=0; i < primes.size()-1; i++)
   {
      if( p % primes[i] == 0 )
      return false;
   }
   return true;
}



bool vosjodi(int y){

   if(y < 2) return false;
   for(int i = 2; i < sqrt(y); i++){

      if(y % i == 0) return false;

   }
   return true;
}

int main(){

   int n;
   cin >> n;
   vector<int> vote;
   int candia = n;
   int cont = 0;
   sieve();
   while(cont < 10){
      if(isPrime(candia)){
         vote.push_back(candia);
         cont ++;
      }
      candia++;

   }
   
   cont = 0;

   for(int i = 0; i < 10; i++){

      cont += vote[i];      
   }

   cout << cont << " km/h" << endl;
   cout << marte / cont << " h / " << (marte / cont) / 24 << " d" << endl;




}

