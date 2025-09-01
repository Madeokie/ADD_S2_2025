#include "Finder.h"

std::vector<int> Finder::findSubstrings(const std::string& s1, const std::string& s2) {
    std::vector<int> result;
    result.reserve(s2.size());

    // For each prefix of s2
    for (size_t len = 1; len <= s2.size(); ++len) {
        bool found = false;

        // Search s1 for the prefix
        for (size_t i = 0; i + len <= s1.size(); i++) {
            size_t j = 0;
            while (j < len && s1[i + j] == s2[j]) {
                j++;
            }
            if (j == len) {
                // Record the index of the LAST character of the prefix
                result.push_back(i + len - 1);
                found = true;
                break;
            }
        }

        if (!found) {
            result.push_back(-1);
        }
    }

    return result;
}
