#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::create_directory("testdir");

    return 0;
}