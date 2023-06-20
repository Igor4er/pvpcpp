#include <iostream>
#include <fstream>

int main() {
    std::ifstream file;
    file.open("test.txt");
    std::string buf;
    if (file.is_open()) {
        while (std::getline(file, buf)) {
            std::cout << buf << std::endl;
        }
    }
    else {
        std::cout << "Failed to open file" << std::endl;
    }
    return 0;
}
