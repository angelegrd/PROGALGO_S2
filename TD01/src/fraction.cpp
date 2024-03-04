#include "fraction.hpp"
#include "utils.hpp"
#include <iostream>
#include <math.h> 

// exo 1 
// Fraction operator+(Fraction &f1, Fraction &f2){
//     Fraction result;
//     result.numerator=f1.numerator*f2.denominator+f2.numerator*f1.denominator;
//     result.denominator=f1.denominator*f2.denominator;
//     return simplify(result);
// }

// Fraction operator-(Fraction &f1, Fraction &f2){
//     Fraction result;
//     result.numerator=f1.numerator*f2.denominator-f2.numerator*f1.denominator;
//     result.denominator=f1.denominator*f2.denominator;
//     return simplify(result);
// }

// Fraction operator*(Fraction &f1, Fraction &f2){
//     Fraction result;
//     result.numerator=f1.numerator*f2.numerator;
//     result.denominator=f1.denominator*f2.denominator;
//     return simplify(result);
// }

// Fraction operator/(Fraction &f1, Fraction &f2){
//     Fraction result;
//     result.numerator=f1.numerator*f2.denominator;
//     result.denominator=f1.denominator*f2.numerator;
//     return simplify(result);
// }


// exo1 réécris avec l'exo 5
Fraction operator+(Fraction &f1, Fraction &f2){
    Fraction result = f1;
    result += f2;
    return simplify(result);
}

Fraction operator-(Fraction &f1, Fraction &f2){
    Fraction result = f1;
    result -= f2;
    return simplify(result);
}

Fraction operator*(Fraction &f1, Fraction &f2){
    Fraction result = f1;
    result *= f2;
    return simplify(result);
}

Fraction operator/(Fraction &f1, Fraction &f2){
    Fraction result = f1;
    result /= f2;
    return simplify(result);
}

//exo 2
std::ostream& operator<<(std::ostream& os, Fraction const &fraction){
    return os<<fraction.numerator<<"/"<<fraction.denominator<<std::endl;
}


//exo 3
bool operator==(Fraction &f1, Fraction &f2){
    Fraction simplf1=simplify(f1);
    Fraction simplf2=simplify(f2);
    return simplf1.numerator==simplf2.numerator && simplf1.denominator==simplf2.denominator;
}

bool operator!=(Fraction &f1, Fraction &f2){
    return !(f1==f2);
}


//exo 4 avec méthode de produit en croix
bool operator<(Fraction &f1, Fraction &f2){
    Fraction simplf1=simplify(f1);
    Fraction simplf2=simplify(f2);
    return (simplf1.numerator*simplf2.denominator)<(simplf2.numerator*simplf1.denominator);
}
//avec static_cast 

// bool operator<(Fraction &f1, Fraction &f2){
//     return (static_cast<float>(f1.numerator) / static_cast<float>(f1.denominator)) < (static_cast<float>(f2.numerator) / static_cast<float>(f2.denominator));
// }

bool operator>(Fraction &f1, Fraction &f2){
    return !(f1<f2) && !(f1==f2); //inverse de < ET pas égal
}

bool operator<=(Fraction &f1, Fraction &f2){
    return (f1<f2) || (f1==f2); // < OU égal
}

bool operator>=(Fraction &f1, Fraction &f2){
    return !(f1<f2) || (f1==f2); // inverse < OU égal
}


//exo 5
void Fraction::operator+=(Fraction &f){
    numerator=numerator*f.denominator+f.numerator*denominator;
    denominator=denominator*f.denominator;
}

void Fraction::operator-=(Fraction &f){
    numerator=numerator*f.denominator-f.numerator*denominator;
    denominator=denominator*f.denominator;
}

void Fraction::operator*=(Fraction &f){
    numerator=numerator*f.numerator;
    denominator=denominator*f.denominator;
}

void Fraction::operator/=(Fraction &f){
    numerator=numerator*f.denominator;
    denominator=denominator*f.numerator;
}


//exo 6
Fraction::operator float() const
{
    return static_cast<float>(numerator) / static_cast<float>(denominator);
}