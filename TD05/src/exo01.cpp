#include <vector>
#include <iostream>
#include <cstdlib>
#include <string>
#include <stack>
#include <algorithm>
#include <numeric>

size_t folding_string_hash(std::string const& s, size_t max){
    size_t somme{0};
    for (int i=0; i<s.size(); i++){
        somme+=s[i];
    }
    return somme%max;
};

size_t folding_string_ordered_hash(std::string const& s, size_t max){
    size_t somme{0};
    for (int i=0; i<s.size(); i++){
        somme+=s[i]*i;
    }
    return somme%max;
};


size_t polynomial_rolling_hash(const std::string& s, size_t p, size_t m){
    size_t somme{0};
    
    for (int i{0}; i<s.size(); i++){
        int power{i};
        int p{0};
        int result{1};
        for(int j{1}; j<=power; j++){
            result*=p;
        }
        somme+=s[i]*result;
    }
    return somme%m;

};

int main(){
    std::cout<< folding_string_hash("cba", 200)<<std::endl;
    std::cout<< folding_string_ordered_hash("cba", 200);

    return 0;
}



