#include "vecsum.h"

int vecsum(const std::vector<int>& vec) {
    int sum = 0;
    for (int elem : vec) {
        sum += elem;
    }
    return sum;
}