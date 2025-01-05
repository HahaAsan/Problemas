#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int casos = 1;

    while (true) {
        int C, S;
        if (!(cin >> C >> S)) break;

        vector<int> a(S);
        
        for (int i = 0; i < S; ++i) {
            cin >> a[i];
        }

        double y = 0;
        for (int num : a) {
            y += num;
        }
        y /= C;

        while (a.size() < 2 * C) {
            a.push_back(0);
        }

        sort(a.begin(), a.end());

        double imbalance = 0;
        cout << "Set #" << casos++ << endl;

        for (int i = 0; i < C; ++i) {
            cout << " " << i << ":";

            if (a[i] > 0) {
                cout << " " << a[i];
            }

            if (a[2 * C - 1 - i] > 0) {
                cout << " " << a[2 * C - 1 - i];
            }

            imbalance += fabs(a[i] + a[2 * C - 1 - i] - y);
            cout << endl;
        }


        cout << "IMBALANCE = ";
        printf("%.5f\n\n", imbalance);
    }

}
