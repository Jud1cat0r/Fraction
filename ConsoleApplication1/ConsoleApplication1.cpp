#include <iostream>
#include "Fraction.cpp"

int main()
{
    Fraction d1;
    Fraction d2;
    Fraction d3;
    d1.setNumerator (7);
    d1.setDenominator(15);

    d2.setNumerator(2);
    d2.setDenominator(7);

    d3 = d1.division(d2);
    d3.print();
}
