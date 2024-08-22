#include <iostream>

double raio(double raio, double volume)
{
    std::cin >> raio;
    volume = 4 * 3.14 * (raio * raio * raio) / 3;
    return volume;
}

int main()
{
    int rai, volum;
    std::cout << raio(rai, volum);
    return 0;
}