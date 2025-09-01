#ifndef FINDER_H
#define FINDER_H

#include <vector>
#include <string>

class Finder {
public:
    // Returns indices where each prefix of s2 is found in s1, or -1 if not found.
    static std::vector<int> findPrefixPositions(const std::string& s1, const std::string& s2);
};

#endif
