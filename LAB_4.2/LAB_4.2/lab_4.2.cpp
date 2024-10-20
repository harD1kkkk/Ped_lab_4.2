#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    A = pow(x, 3) + 2;
    while (x <= xk)
    {
        if (x < 4) {
            B = 5 * pow(x, 8) + pow(x, 6) - pow(x, 2) + 3;
        }
        else if (x >= 4 && x < 7) {
            B = atan(abs((x + 3) / 2)) + 7 * x;
        }
        else {
            B = log10(2 * x + exp(5 * x + 5));
        }
        y = A + B;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;
    return 0;
}
