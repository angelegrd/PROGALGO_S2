#include <vector>
#include <iostream>
#include <cstdlib>
#include <string>
#include <stack>
#include <algorithm>
#include <numeric>

int main(){
    std::vector<int> vec{};

    for ( int i=0; i<100; i++)
    {
      int nbRandom = rand() % 100;
      vec.push_back(nbRandom);
    }


// Déclaration d'un itérateur permettant d'indiquer la fin du vecteur vec
    std::vector<int>::iterator end_iterator { vec.end() };

// Parcours du vecteur avec l'itérateur
    for (std::vector<int>::iterator it { vec.begin() }; it != end_iterator; ++it) {
        std::cout << *it << std::endl;                                               //comme pointeur: l'étoile permet d'acceder à la valeur à l'emplacement it
    }





    int nbUtil {};
    std::cout<<"Entrez un nombre a chercher:"<<std::endl;
    std::cin>> nbUtil;

// recherche de l'ément de l'utilisateur dans le vecteur vec
    auto it { std::find(vec.begin(), vec.end(), nbUtil)};

    if ( it != vec.end()){
        std::cout << *it << " est dans le tableau"<< std::endl;
    }
    else{
        std::cout << nbUtil << " n'est pas dans le tableau" << std::endl;
    }





    int nbUtil2 {};
    std::cout<<"Entrez un nombre pour chcercher son occurence:"<<std::endl;
    std::cin>> nbUtil2;

//méthode 1: avec target en boucle for MOINS PERTINENT
    for (const int target:{nbUtil2})
    {
        const int compteur = std::count(vec.cbegin(), vec.cend(), target);
        std::cout << "Methode 1: Nombre : " << target << ", compteur: " << compteur << '\n';
    }

//Méthode 2 : avec un if else  PLUS SIMPLEEEEEEEE
    int compteur = std::count(vec.begin(), vec.end(), nbUtil2);

    if (compteur !=0){
        std::cout <<" Methode 2: " <<nbUtil2 << " est "<< compteur << " fois dans le tableau."<<std::endl;
      
    }
    else{
        std::cout<< nbUtil2<< " n'est pas dans le tableau."<<std::endl;

    }



// Tri du vecteur vec
    std::sort(vec.begin(), vec.end());

// Parcours du vecteur avec l'itérateur
    std::cout<< "Voici le tableau trie:"<< std::endl;
    for (int element : vec)
    {
        std::cout << element << std::endl;
    }


// Somme des éléments du vecteur v
    int sum { std::accumulate(vec.begin(), vec.end(), 0 )}; //par défaut on a l'opérateur +, sinon on écrit : [](int acc, int current_element) { return acc + current_element; }
    std::cout << "La somme des elements du tableau est: "<< sum << std::endl;
    return 0;
}



