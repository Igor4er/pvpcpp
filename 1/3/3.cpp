#include <iostream>
#include <vector>

struct Entry {
    int divider;
    std::string prnt;
};

std::vector<Entry> ask_for_entrys() {
    struct Entry thr = {3, "Fizz "};
    struct Entry pnt = {5, "Buzz "};

    std::vector<Entry> entrys = {thr, pnt};

    while (true) {
        std::string prnt_i;
        std::cout << "Вкажіть що принтити (щоб перейти до виконання програми введіть RUN): ";
        std::cin >> prnt_i;

        if (prnt_i == "RUN") {
            break;
        }

        int div;
        std::cout << "Вкажіть дільник (число): ";
        std::cin >> div;

        prnt_i.append(1, ' ');
        struct Entry i = {div, prnt_i};
        entrys.push_back(i);
    }
    return entrys;
}

int main() {
    std::vector<Entry> entrys = ask_for_entrys();
    for (int i = 0; i < 1000; i++) {
        std::cout << i << "\r";

        for (auto j : entrys) {
            if (i % j.divider == 0) {
                std::cout << j.prnt;
            }
        }

        if (i == 28) {
            std::cout << "\rЧому число 28 завжди в настрої? Тому що воно знає що далі буде 29, і тому може трохи відпочити";
        }

        std::cout << std::endl;
    }
    return 0;
}
