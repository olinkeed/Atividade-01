#include <iostream>

void calculoarea()
{
    double raio, area;
    std::cin >> raio;
    area = 3.14 * (raio * raio);
    std::cout << area;
}
int main()
{
    calculoarea();
    return 0;
}