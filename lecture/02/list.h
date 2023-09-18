#include <list>

class List {
private:
    std::list<int> list_;
public:
    void insert(int number);
    void remove(int index);
    void print();
};
