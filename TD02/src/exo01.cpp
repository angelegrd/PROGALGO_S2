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

void bubble_sort(std::vector<int> & vec){
    while(is_sorted(vec)==0){
        for(int i=0; i<vec.size()-1; i++){
            if(vec[i]>vec[i+1]){
                int neworder = vec[i];
                vec[i]=vec[i+1];
                vec[i+1]= neworder;
            }
        }
    }
}

//faire tri par sélection


int main()
{
std::vector<int> tableau{2, 9, 4, 5, 1, 7, 8, 6};
bubble_sort(tableau);
display(tableau);
return 0;
}