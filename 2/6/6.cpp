#include <iostream>
#include <filesystem>

int main() {
    for (auto &dirfile : std::filesystem::directory_iterator("testdir")) {
        std::cout << dirfile.path() << std::endl;
    }

    return 0;
}