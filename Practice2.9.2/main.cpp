//Garrett Foushay
//10-12-24

#include <iostream>

int main()
{
    float input1, input2, output;
    unsigned char operation;

    std::cout << "Please input a number: ";
    std::cin >> input1;

    std::cout << "Please input another number: ";
    std::cin >> input2;

    std::cout << "Please input the operation: ";
    std::cin >> operation;

    if (operation == '+')
    {
        output = input1 + input2;
    }
    else if (operation == '-')
    {
        output = input1 - input2;
    }
    else if (operation == '*')
    {
        output = input1 * input2;
    }
    else if (operation == '/')
    {
        output = input1 / input2;
    }

    std::cout << input1 << operation << input2 << "=" << output << std::endl;
}
