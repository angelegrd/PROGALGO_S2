#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> const& vec) { 
    return std::is_sorted(vec.begin(), vec.end()); 
}  

void display(std::vector<int> const& vec){
    for( int i=0; i<vec.size(); i++){
        std::cout<<vec[i];
    }
}

size_t quick_sort_partition(std::vector<float> & vec, size_t left, size_t right, size_t const pivot){
    
    

};

void quick_sort(std::vector<float> & vec, size_t const left, size_t const right){
    float const pivot= vec[(vec.size())-1]; //pivot = dernier nombre
    quick_sort_partition(vec, left, right, pivot);

};


void quick_sort(std::vector<float> & vec) {
    quick_sort(vec, 0, vec.size() - 1);
}




int main()
{
   
    
return 0;
}