#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.141592653589793;

int main(){
    double x1, y1, x2, y2, x3, y3;

    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3) {
        double a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        double b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
        double c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

        double A = 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y1 - y1 * x2 - y2 * x3 - y3 * x1);

        double R = ((a * b * c) / (4 * A)) * 2 * PI;

        printf("%.2f\n", R);
    }

}
