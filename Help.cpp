#include <CMath>
#include "CEquation.h"
#include "Help.h"

double Equation (CEquation &equation) {
    return  log(pow(equation.y, -sqrt(fabs(equation.x)))) * (equation.x - equation.y/2) + pow(sin(atan(equation.z)), 2);
}
