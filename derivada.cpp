#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main (){

    double x = 1;
    double h = 0.025;
    double fx = x * x + 1;
    double fh = h * h + 1;
    x = (x + h);
    double f = x * x + 1;

    double resultado =  (f - fx) / h;

    cout << resultado;

    return 0;


}
