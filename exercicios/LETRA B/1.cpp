#include <iostream>
#include <string>

std::string multiplo(int a) {
    std::cin >> a;
    if (a % 4 == 0)
        return "multiplo";
    else
        return "nao multiplo";
}

int main() {
    int n;
    std::cout << multiplo(n) << std::endl;
    return 0;
}