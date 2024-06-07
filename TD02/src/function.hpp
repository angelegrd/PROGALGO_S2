#pragma once
#include <iostream>
#include <vector>

void bubble_sort(std::vector<float> &vec);
void selection_sort(std::vector<float> &vec);
bool is_sorted(std::vector<float> &vec);


size_t quick_sort_partition(std::vector<float> & vec, size_t left, size_t right);
void quick_sort(std::vector<float> &vec, size_t const left, size_t const right);
