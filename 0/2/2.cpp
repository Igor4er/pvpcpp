#include <iostream>

int main() {
    std::string cmp1;
    std::string cmp2;
    std::string cmp3;

    std::cout << "Вкажіть компоент 1: ";
    getline(std::cin>>std::ws, cmp1);

    std::cout << "Вкажіть компоент 2: ";
    getline(std::cin>>std::ws, cmp2);

    std::cout << "Вкажіть компоент 3: ";
    getline(std::cin>>std::ws, cmp3);

    std::cout << std::endl << "Звари цей відвар із соди, і всі проблеми з вивченням c++ відпадуть самі собою." << std::endl;
    std::cout << "Тобі знадобиться:" << std::endl;
    std::cout << "Сода - 2кг" << std::endl;
    std::cout << cmp1 << " - 800мл" << std::endl;
    std::cout << cmp2 << " - 1 ч.л." << std::endl;
    std::cout << cmp3 << " - 25г" << std::endl;
    std::cout << "Змішати, перемішати, і залишити в світлі місяця з монітора компютера на ніч." << std::endl;

    return 0;
}