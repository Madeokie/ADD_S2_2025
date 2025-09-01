#include "Finder.h"
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string s1, s2;

    std::cout << "Enter string 1: ";
    std::cin >> s1;
    std::cout << "Enter string 2: ";
    std::cin >> s2;

    std::vector<int> results = Finder::findSubstrings(s1, s2);

    for (size_t i = 0; i < results.size(); ++i) {
        std::cout << results[i] << std::endl;
    }

    return 0;
}
