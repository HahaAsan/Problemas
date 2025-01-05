#include <iostream>
#include <vector>


int main() {
    int n, t;
    std::cin >> n >> t;
    int vet[t + 1] = {0};

    for (int i = 0; i < n; i++){

        int c, v;
        std::cin >> c >> v;
        for (int j = c; j <= t; j++){
            vet[j] = std::max(vet[j], vet[j - c] + v);
        }

    }

    std::cout << vet[t] << std::endl;

}
