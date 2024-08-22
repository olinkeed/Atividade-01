#include <iostream>

void raio()
{
    double raio, volume;
    std::cin >> raio;
    volume = 4 * 3.14 * (raio * raio * raio) / 3;
    std::cout << volume;
}

int main()
{
    raio();
    return 0;
}