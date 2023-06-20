#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::remove("testdir");

    return 0;
}