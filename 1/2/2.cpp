#include <iostream>
#include <vector>

struct Entry {
    int divider;
    std::string prnt;
};

struct Entry thr = {3, "Fizz "};
struct Entry pnt = {5, "Buzz "};
struct Entry nnn = {9, "Tyzz "};

std::vector<Entry> entrys = {thr, pnt, nnn};

int main() {
    for (int i = 0; i < 1000; i++) {
        std::cout << i << "\r";

        for (auto j : entrys) {
            if (i % j.divider == 0) {
                std::cout << j.prnt;
            }
        }

        if (i == 28) {
            std::cout << "\rЧому число 28 завжди у настрої? Тому що воно знає що далі буде 29, і тому може трохи відпочити";
        }

        std::cout << std::endl;
    }
    return 0;
}
