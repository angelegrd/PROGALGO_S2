#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

size_t folding_string_hash(std::string const &s, size_t max)
{
    return std::accumulate(s.begin(), s.end(), 0, [](int a, int b){ return a + b; }) % max;
}

size_t folding_string_ordered_hash(std::string const &s, size_t max)
{
    size_t hash{0};
    for (size_t i{0}; i < s.size(); i++)
        hash += s[i] * i;
    return hash % max;
}

size_t polynomial_rolling_hash(const std::string &s, size_t p, size_t m)
{
    size_t hash{0};
    size_t puissance{1};
    for (size_t i{0}; i < s.size(); i++)
    {
        hash += s[i] * puissance;
        puissance *= p;
    }
    return hash % m;
}

int main()
{
    size_t max{1024};
    std::string phrase{"Bonjour michel"};
    std::cout << folding_string_hash(phrase, max) << std::endl;
    std::cout << folding_string_ordered_hash(phrase, max) << std::endl;
    std::cout << polynomial_rolling_hash(phrase, 21, max) << std::endl;
    return 0;
}