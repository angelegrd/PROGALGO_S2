#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include "ScopedTimer.hpp"
#include "function.hpp"


bool is_sorted(std::vector<int> const& vec) { 
    return std::is_sorted(vec.begin(), vec.end()); 
}  

void display(std::vector<int> const& vec){
    for( int i=0; i<vec.size(); i++){
        std::cout<<vec[i];
    }
}

std::vector<int> generate_random_vector(size_t const size, int const max = 100) {
    std::vector<int> vec(size);
    std::generate(vec.begin(), vec.end(), [&max]() { return std::rand() % max;} );
    return vec;
}

int main(){
    std::vector<int> array;
    array = generate_random_vector(9);
    std::cout << "Tableau non trié (initial) : " << std::endl;
    display(array);

    {
    ScopedTimer timer("Sort - Standard");
    std::sort(array.begin(), array.end());

    }

    display(array);

    return 0;
}