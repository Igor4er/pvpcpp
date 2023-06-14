#include <iostream>
using namespace std;

int main()
{
    /*I try everything I see on W3school*/
    string x, y, z;
    cout << "Введіть перший компонент: \n";
    getline(cin >> ws, x);
    cout << "Введіть другий компонент: \n";
    getline(cin >> ws, y);
    cout << "Введіть третій компонент: \n";
    getline(cin >> ws, z);

    cout << "Рецепт чудо-відвару\n";
    cout << "1. " + x + " - 100 г\n";
    cout << "2. " + y + " - 5 столових ложок\n";
    cout << "3. " + z + " - по смаку.\n";
    cout << "Змішати в мисочці, додати соди, скип'ятити і тримати на легкому вогні п'ять хвилин.\n";
}