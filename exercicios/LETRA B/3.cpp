#include <iostream>

int intervalos(int a, int b, int c=0)
{
    do
    {
        std::cin >> a >> b;
    } while (a < 0 || b < 0);

    for (int i = a; i <= b; i++)
    {
        c += i;
    }
    return c;
}

int main()
{
    int d,b,e=0;
    std::cout<<intervalos(d,b,e);
    return 0;
}