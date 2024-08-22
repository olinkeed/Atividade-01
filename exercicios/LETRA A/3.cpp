#include <iostream>

void intervalos()
{
    int a, b, c=0;
    do
    {
        std::cin >> a >> b;
    } while (a < 0 || b < 0);

    for (int i = a; i <= b; i++)
    {
        c += i;
    }
    std::cout << c;
}

int main()
{
    intervalos();
    return 0;
}