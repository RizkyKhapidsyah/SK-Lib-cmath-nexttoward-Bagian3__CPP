#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    long double y = -1.0;
    double x = 0.0;

    double hasil = nexttoward(x, y);
    cout << "nexttoward(x, y) = " << hasil << endl;

    _getch();
    return 0;
}