#include <iostream>

int main()
{
    double n1, n2;

    std::cin >> n1;
    std::cin >> n2;

    std::cout.precision(10);
    std::cout << n1 / n2;

    return 0;
}