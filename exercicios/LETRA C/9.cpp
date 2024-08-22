#include <iostream>
void cel()
{
    int temperatura, F;
    std::cin >> temperatura;
    F = temperatura * 9 / 5 + 32;
    std::cout << F;
}

int main()
{

    cel();

    return 0;
}