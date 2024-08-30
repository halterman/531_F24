#include <iostream>
#include <vector>
#include "vecsum.h"

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vec) {
    size_t n = vec.size();
    os << '{';
    if (n > 0) {
        os << vec[0];
        for (size_t i = 1; i < n; i++) {
            os << ", " << vec[i];
        }
    }
    os << '}';
    return os;
}

int main() {
    std::vector<int> seq {10, 20, 30, 40, 50, 60};

    std::cout << seq << '\n';
    std::cout << vecsum(seq) << '\n';
    std::cout << seq << '\n';
}