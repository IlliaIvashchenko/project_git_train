#include <iostream>

int Policz(int a, int b)
{
    return (a+b)*(a-b);
}

int main() {
    std::cout << "(a+b)(a-b) = " << Policz(7, 10) << std::endl;
    return 0;
}