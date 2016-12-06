#include <iostream>
#include <cmath>
#include "CEquation.h"

using namespace std;

int main() {
    CEquation *equation = new CEquation (-15.246, 4.642 * pow(10,-2), 20.001 * pow(10,2));

    cout << Equation (*equation) << endl;
    return 0;
}
