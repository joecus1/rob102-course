#include <iostream>

int main()
{
    int first, second, ret;
    char op;
    std::cout << "Please enter a first number: ";
    std::cin >> first;
    std:: cout << "Please enter an operator: ";
    std::cin >> op;
    std::cout << "Please enter a second number: ";
    std::cin >> second;

    if(op == '+')
    {
        ret = first + second;
    }
    else if(op == '-')
    {
        ret = first - second;
    }
    else if(op == '*')
    {
        ret = first * second;
    }
    else
    {
        ret = first / second;
    }

    std::cout << "\n" << first << " " << op << " " << second << " = " << ret << "\n";
}