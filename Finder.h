#ifndef FINDER_H
#define FINDER_H

#include <vector>
#include <string>

class Finder {
public:
    // Returns the last index of each prefix of s2 in s1, or -1 if not found
    static std::vector<int> findSubstrings(const std::string& s1, const std::string& s2);
};

#endif
