#include <iostream>
#include <fstream>

int main() {
    std::ofstream file;
    file.open("test.txt");
    if (file.is_open()) {
        file << "2: Lorem ipsum dolor \nsit amet";
        file.close();
    }
    else {
        std::cout << "Failed to open file" << std::endl;
    }
    return 0;
}
