#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1;
    }
    std::pair<int, int> key = {numCrates, loadSize};
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }

    int result = numTrucks(numCrates / 2, loadSize) + numTrucks(numCrates - numCrates / 2, loadSize);
    memo[key] = result;

    return result;
}
