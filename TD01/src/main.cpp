#include <iostream>
#include "fraction.hpp"
#include "utils.hpp"


int main(){
    unsigned int numerator1{0};
    unsigned int denominator1{0};
    unsigned int numerator2{0};
    unsigned int denominator2{0};
    
// choix des deux fractions
    std::cout<<"Quel numerateur pour la premiere fraction?"<<std::endl;
    std::cin>>numerator1;

    std::cout<<"Quel denominateur pour la premiere fraction?"<<std::endl;
    std::cin>>denominator1;

    std::cout<<"Quel numerateur pour la deuxieme fraction?"<<std::endl;
    std::cin>>numerator2;

    std::cout<<"Quel denominateur pour la deuxieme fraction?"<<std::endl;
    std::cin>>denominator2;

    Fraction f1{numerator1, denominator1};
    Fraction f2{numerator2, denominator2};

    std::cout<<"Voici vos deux fractions simplifiees et leur affichage decimal:"<<std::endl;

    std::cout << "f1 = " << f1 << " = " << (simplify(f1)) << " = " << static_cast<float>(f1) << std::endl;
    std::cout << "f2 = " << f2 << " = " << (simplify(f2)) << " = " << static_cast<float>(f2) << std::endl;

    std::cout<<std::endl;

//opérations
    std::cout<<"Addition:"<<(f1+f2)<<std::endl;
    std::cout<<"Soustraction:" <<(f1-f2)<<std::endl;
    std::cout<<"Multiplication:"<<(f1* f2)<<std::endl;
    std::cout<<"Division:"<<(f1/ f2)<<std::endl;

// égalité
    if (f1==f2)
    {
        std::cout << "Les deux fractions sont egales" << std::endl;
    }

//différence
    if (f1!=f2)
    {
        std::cout << "Les deux fractions sont differentes." << std::endl;
    }

    std::cout<<std::endl;

//comparaisons
    if(f1<f2){
        std::cout<< f1 << "est inferieure a " << f2 <<std::endl;
    }
     else if (f1 > f2)
        std::cout << f1 << " est superieure a " << f2 << std::endl;
    else if (f1 <= f2)
        std::cout << f1 << " est inferieure ou egale a " << f2 << std::endl;
    else if (f1 >= f2)
        std::cout << f1 << " est superieure ou egale a " << f2 << std::endl;


    return 0;
}