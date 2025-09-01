#include <iostream>
#include <vector>
#include <string>
#include "Finder.h"

int main() {
    std::string s1;
    std::string s2;

    std::cout << "Enter string 1: ";
    std::cin >> s1;
    std::cout << "Enter string 2: ";
    std::cin >> s2;

    std::vector<int> result = Finder::findSubstrings(s1, s2);

    std::cout << "Prefixes of s2        Output (indexes in s1)" << std::endl;
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << s2.substr(0, i + 1) << "                         " << result[i] << std::endl;
    }

    return 0;
}
