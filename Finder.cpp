#include "Finder.h"

std::vector<int> Finder::findPrefixPositions(const std::string& s1, const std::string& s2) {
    std::vector<int> result;
    std::string prefix;
    prefix.reserve(s2.size());  // Optimize memory allocation

    for (size_t i = 0; i < s2.size(); ++i) {
        prefix += s2[i];  // Build prefix incrementally
        size_t found = s1.find(prefix);
        result.push_back(found != std::string::npos ? static_cast<int>(found) : -1);
    }

    return result;
}
