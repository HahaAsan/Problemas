#include <iostream>
using namespace std;

int main() 
{
   int n;
   
   while (cin >> n){
      
      int res = 0;

      while(n > 4){
      
         res += n/5;
         n = n/5;
      
      }

      cout << res << endl;
   }

}