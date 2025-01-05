
// foi n

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

struct Evento {
    int x, t;
};


bool compara(Evento e1, Evento e2) {
    return e1.t < e2.t;
}


int calculaEventos(const vector<Evento>& eventos, int v, int inicio) {
    int n = eventos.size();
    vector<int> vet(n, 0);

    for (int i = 0; i < n; ++i) {
        if (abs(eventos[i].x - inicio) <= eventos[i].t * v) {
            vet[i] = 1;
        }

        for (int j = 0; j < i; ++j) {
            if (vet[j] > 0 && abs(eventos[i].x - eventos[j].x) <= (eventos[i].t - eventos[j].t) * v) {
                vet[i] = max(vet[i], vet[j] + 1);
            }
        }
    }

    return *max_element(vet.begin(), vet.end());
}


int main() {
    int n, v;
    cin >> n;

    vector<Evento> eventos(n);
    for (int i = 0; i < n; ++i) {
        cin >> eventos[i].x >> eventos[i].t;
    }
    cin >> v;

    sort(eventos.begin(), eventos.end(), compara);

    int max_eventos_inicial = calculaEventos(eventos, v, 0);

    int max_eventos_livre = 0;
    for (int i = 0; i < n; ++i) {
        max_eventos_livre = max(max_eventos_livre, calculaEventos(eventos, v, eventos[i].x));
    }

    cout << max_eventos_inicial << " " << max_eventos_livre << endl;

}