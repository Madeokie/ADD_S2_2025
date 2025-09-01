#include "Finder.h"

std::vector<int> Finder::findSubstrings(const std::string& s1, const std::string& s2) {
    std::vector<int> result;
    result.reserve(s2.size());

    // For each prefix of s2
    for (size_t length = 1; length <= s2.size(); length++) {
        bool found = false;

        // Slide over s1 to search for this prefix
        for (size_t i = 0; i + length <= s1.size(); ++i) {
            size_t j = 0;
            while (j < length && s1[i + j] == s2[j]) {
                ++j;
            }
            if (j == length) {
                // Found prefix: record the index of the LAST character
                result.push_back(static_cast<int>(i + length - 1));
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
