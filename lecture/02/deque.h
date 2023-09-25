#include <deque>

class List {
private:
    std::deque<int> list_;
public:
    void insert(int number);
    void remove(int index);
    void print();
};
