#include <iostream>

void numero()
{
    int num;
    std::cin >> num;
    if (num % 4 == 0)
        std::cout << "multiplo";
    else
        std::cout << "N multiplo";
}

int main()
{
    numero();

    return 0;
}