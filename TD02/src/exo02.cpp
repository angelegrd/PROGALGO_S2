#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> const& vec) { 
    return std::is_sorted(vec.begin(), vec.end()); 
}  

void display(std::vector<float> const& vec){
    for( int i=0; i<vec.size(); i++){
        std::cout<<vec[i];
    }
}

// l'idée de cette fonction est de prendre le vecteur sur lequel on va travailler en paramètre et de prendre deux index (left et right) qui indiquent la partie du tableau pour laquelle on va répartir les valeurs (inférieur au pivot à gauche supérieur à droite du pivot réciproquement à droite) et la valeur du pivot

size_t quick_sort_partition(std::vector<float> & vec, size_t left, size_t right) {
    // On choisit le pivot comme étant le dernier élément de la partition
    float const pivot_value { vec[vec.size()-1] };
    
    // On garde l'index du premier élément plus grand que le pivot
    size_t first_bigger_element_index { left };
    // On parcourt les éléments de la partition pour les répartir
    for (size_t i {left}; i < right ;i++) {
        // Si l'élément actuel est plus petit que le pivot, on l'échange avec le dernier élément plus petit que le pivot
        if (vec[i]<pivot_value) {
            std::swap(vec[i], vec[first_bigger_element_index]);
            // on incrémente l'index du premier élément plus grand que le pivot (car on vient de le déplacer et placer un élément plus petit que le pivot à sa place)
            first_bigger_element_index += 1;
        }
    }

    // on échange le pivot (qui est positionné à la fin) pour qu'il soit positionné ente les deux sous partitions (des éléments plus petits et plus grand que le pivot)
    std::swap(vec[right], vec[first_bigger_element_index]);

    // on retourne l'index du pivot
    return first_bigger_element_index;
}
/////////JUSQUICI CA MARCHE 




// Surcharge de la fonction qui permet d'appeler la fonction en passant seulement le vecteur et définir les index left et right pour cibler la totalité du tableau à trier automatiquement
// void quick_sort(std::vector<float> & vec) {
//     quick_sort(vec, 0, vec.size() - 1);
// }

void quick_sort(std::vector<float> &vec, size_t const left, size_t const right) {
    if (left < right) {
        size_t index_pivot = quick_sort_partition(vec, left, right);
        // gauche
        quick_sort(vec, left, index_pivot-1);
        // droite
        quick_sort(vec, index_pivot+1, right);
        return;
    }

    // 1. On partitionne le vecteur et on récupère l'index du pivot grâce à la fonction quick_sort_partition
    // 2. appels récursifs sur les deux sous parties gauche et droite du pivot
    // Attention à la condition d'arrêt de la récursivité
}

int main()
{
   std::vector<float> tableau{2, 9, 5, 3, 1, 8, 7, 6};
    quick_sort(tableau, 0, tableau.size()-1);
    display(tableau);
    
return 0;
}