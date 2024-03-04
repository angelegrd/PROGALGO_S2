#include "fraction.hpp"
#include <iostream>

int gcd(int number1, int number2){
    while(number2!=0){
        int stock=number2;
        number2 = number1 % number2;
        number1=stock;
    }
    return number1;
};

Fraction simplify(Fraction &f){
    Fraction result;
    result.numerator= f.numerator /gcd(f.numerator, f.denominator);
    result.denominator= f.denominator /gcd(f.numerator, f.denominator);
 return result;
};



