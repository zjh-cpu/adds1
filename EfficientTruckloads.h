#include <map>

class EfficientTruckloads {
private:
    std::map<std::pair<int, int>, int> memo;

public:
    int numTrucks(int numCrates, int loadSize);
};
