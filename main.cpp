#include <iostream>
#include <vector>
#include <string>
#include "Finder.h"

int main() {
    std::string s1 = "4634554567";
    std::string s2 = "45689";

    std::vector<int> result = Finder::findPrefixPositions(s1, s2);

    std::cout << "Prefixes of s2        Output (indexes in s1)" << std::endl;
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << s2.substr(0, i + 1) << "                         " << result[i] << std::endl;
    }

    return 0;
}
