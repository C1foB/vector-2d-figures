#include <iostream>
#include <Windows.h>
#include "FigureN1.h"
using namespace std;

int main()
{
    long double x = 10.36;
    std::cout << "Hello World!\n"<<x;
    FigureN1 Fg1;
    Fg1.SetPointsX(17, 12, 10);
    Fg1.SetPointsY(10, 11, 8);
    for (int loophorizontal = 0; loophorizontal < 20; loophorizontal++) {
        for (int loopvertical = 0; loopvertical < 20; loopvertical++) {
            int z = Fg1.getTrue(loopvertical, loophorizontal);
            if (z == 1) {
                cout << "#";
            }
            else if (z == 0) {
                cout << " ";
            }
        }
        cout << endl;
    }
}
