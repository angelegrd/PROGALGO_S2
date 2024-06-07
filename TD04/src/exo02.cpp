#include <vector>
#include <iostream>
#include <cstdlib>
#include <string>
#include <stack>
#include <algorithm>
#include <numeric>

int nbLettreFirstMot(std::string const & str){
    int compteur{0};
    auto it { std::find(str.begin(), str.end(), ' ')}; //on cherche le premier espace de la phrase
    compteur = std::distance(str.begin(), it) ; //on compte la distance entre le début de la phrase et le premier espace
    return compteur;
}

std::vector<std::string> split_string(std::string const& str){
    
};


int main(){

    std::string const &phrase {"Nootlan NOOT NOOT"}; //attention il compte pas les accents
    std::cout<< "Il y a "<< nbLettreFirstMot(phrase) << " dans la phrase." <<std::endl;

    return 0;
}