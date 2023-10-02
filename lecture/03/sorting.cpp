#include <algorithm>
#include <climits>
#include <chrono>
#include <cstring>
#include <iostream>
#include <random>
#include <vector>

#define SIZE 100

template<typename T>
void print_vector(std::vector<T> &list) {
    for( int num : list) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char **argv) {
    if(argc != 2) {
        std::cout << "random: must specify number" << std::endl;
        return (404);
    }
    int number = atoi(argv[1]);

    auto start{std::chrono::steady_clock::now()};
    auto end{std::chrono::steady_clock::now()};

    start = std::chrono::steady_clock::now();

    std::vector<int> list(number);
    // std::vector<int> list;

    std::random_device rd;  // a seed source for the random number engine
    std::mt19937 gen(rd()); // mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> randint(1, INT_MAX);

    for(int i = 0; i < number; ++i) {
        list[i] = randint(gen)%2;
    }
    // for(int i = 0; i < number; ++i) {
    //     list.push_back(randint(gen) % SIZE);
    // }

    auto list2 = list;

    end = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsed_seconds_init{end - start};

    std::cout << "Initialization time = " << elapsed_seconds_init.count() << "s\n";

    // print_vector(list);
    start = std::chrono::steady_clock::now();
    std::sort(list.begin(), list.end());
    end = std::chrono::steady_clock::now();

    std::chrono::duration<double> elapsed_seconds_sort{end - start};
    std::cout << "Sort time = " << elapsed_seconds_sort.count() << "s\n";

    start = std::chrono::steady_clock::now();
    int count = 0;
    for(auto num : list2) {
        count += num;
    }

    memset(&list2[0], 0, sizeof(int)*(list2.size() - count) );
    for(int i = (list2.size() - count); i < list2.size(); ++i) {
        list2[i] = 1;
    }

    end = std::chrono::steady_clock::now();

    std::chrono::duration<double> elapsed_seconds_sort2{end - start};
    std::cout << "Sort2 time = " << elapsed_seconds_sort2.count() << "s\n";

    if(list == list2) {
        std::cout << "works" << std::endl;
    }
    // print_vector(list);

    return 0;
}