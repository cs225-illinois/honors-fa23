#include <vector>

class List {
private:
    std::vector<int> list_;
public:
    void insert(int number);
    void remove(int index);
    void print();
};
