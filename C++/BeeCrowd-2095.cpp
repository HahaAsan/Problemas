#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

    int n, aux, vitorias = 0;
    scanf("%d", &n);

    bool vet[n] = {false};

    vector<int> nog;
    vector<int> qua;
    for(int i=0; i<n; i++){
        scanf("%d", &aux);
        qua.push_back(aux);
    }
    for(int i=0; i<n; i++){
        scanf("%d", &aux);
        nog.push_back(aux);
    }
    sort(nog.begin(), nog.end());
    sort(qua.begin(), qua.end());

    int i = 0, j = 0;
    while(i < n && j < n){
        if(nog[j] > qua[i]){
            vitorias++;
            i++;
        }
        j++;

    }

    cout << vitorias << endl;


}