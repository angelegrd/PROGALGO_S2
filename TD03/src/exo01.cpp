#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>
#include <cctype>
#include <math.h>
#include <stack>
#include "fonction.hpp"

int main()
{
    std::string string{};
    std::cout << "Votre chaine? ";
    std::getline(std::cin, string);
    std::cout << string;
    std::cout << std::endl;

    std::vector<std::string> tokens{split_string(string)};
    std::cout << npi_evaluate(tokens);
    return 0;
}