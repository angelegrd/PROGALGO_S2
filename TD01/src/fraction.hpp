#pragma once
#include <iostream>

struct Fraction
{
    unsigned int numerator{0} ;
    unsigned int denominator{1} ;

    //exo 5
    void operator+=(Fraction &f);
    void operator-=(Fraction &f);
    void operator*=(Fraction &f);
    void operator/=(Fraction &f);


    //exo 6 1.
    float to_float(){
        return static_cast<float>(numerator)/static_cast<float>(denominator);
    } 
    //exo 6 2.
    operator float() const;
};
//exo 1
Fraction operator+(Fraction &fraction1, Fraction &fraction2);
Fraction operator-(Fraction &fraction1, Fraction &fraction2);    
Fraction operator*(Fraction &fraction1, Fraction &fraction2);
Fraction operator/(Fraction &fraction1, Fraction &fraction2);

//exo 2
std::ostream& operator<<(std::ostream& os, Fraction const &fraction);

//exo 3
bool operator==(Fraction &fraction1, Fraction &fraction2);
bool operator!=(Fraction &fraction1, Fraction &fraction2);

//exo 4
bool operator<(Fraction &fraction1, Fraction &fraction2);
bool operator>(Fraction &f1, Fraction &f2);
bool operator<=(Fraction &f1, Fraction &f2);
bool operator>=(Fraction &f1, Fraction &f2);
