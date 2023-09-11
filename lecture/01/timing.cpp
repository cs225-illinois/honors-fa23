#include<chrono>
#include <iostream>
#include <vector>

#define SIZE 25000

void col(std::vector<int> &array, int x, int y) {

    for (unsigned int c = 0; c < x; c++) {
        for (unsigned int r = 0; r < y; r++) {
            array[(r * x) + c] = (r * SIZE) + c;
        }
    }
}
 
void row(std::vector<int> &array, int x, int y) {
    for (unsigned int r = 0; r < y; r++) {
        for (unsigned int c = 0; c < x; c++) {
            array[(r * x) + c] = (r * SIZE) + c;
        }
    }
}

int main()
{
    int x = SIZE;
    int y = SIZE;
    std::vector<int> array(x * y);
    auto start{std::chrono::steady_clock::now()};
    auto end{std::chrono::steady_clock::now()};

    start = std::chrono::steady_clock::now();
    row(array, x, y);
    end = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsed_seconds_row{end - start};

    start = std::chrono::steady_clock::now();
    col(array, x, y);
    end = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsed_seconds_col{end - start};

    std::cout << "col runs in " << elapsed_seconds_col.count() << "s\n";
    std::cout << "row runs in " << elapsed_seconds_row.count() << "s\n";

    return array[SIZE];
}