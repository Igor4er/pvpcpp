#include <iostream>

int main() {
    for (int i = 0; i < 1000; i++) {
        std::cout << i << "\r";
        
        if (i % 3 == 0) {
            std::cout << "Fizz ";
        }
        if (i % 5 == 0) {
            std::cout << "Buzz";
        }
        if (i == 28) {
            std::cout << "Чому число 28 завжди у настрої? Тому що воно знає що далі буде 29, і тому може трохи відпочити";
        }

        std::cout << std::endl;
    }
    return 0;
}
