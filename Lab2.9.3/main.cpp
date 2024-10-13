//Garrett Foushay
//10-12-24
//This is a project in wich I ask the user what kind of drink they would like,
//then wheather they want sugar, whiped cream, ect., then output the full order.

#include <iostream>

//function returns the chosen drink as a printable string
const char* printDrink(int option)
{
    if (option == 1)
    {
        return "Black";
    }
    else if(option == 2)
    {
        return "Espresso";
    }
    else if (option == 3)
    {
        return "Latte";
    }
    else if (option == 4)
    {
        return "Cappuccino";
    }
    else if (option == 5)
    {
        return "Americano";
    }
    else if (option == 6)
    {
        return "Flat White";
    }
    else if (option == 7)
    {
        return "Affogato";
    }
    else if (option == 8)
    {
        return "Cortado";
    }
}

//Function returns the chosen drink extras as a printable string
const char* printExtras(int option)
{
    if (option == 1)
    {
        return "Cream";
    }
    else if (option == 2)
    {
        return "Sugar";
    }
    else if (option == 3)
    {
        return "Whipped Cream";
    }
    else if (option == 4)
    {
        return "Cream and Sugar";
    }
    else if (option == 5)
    {
        return "Cream and Whipped Cream";
    }
    else if (option == 6)
    {
        return "Whippped Cream and Sugar";
    }
    else if (option == 7)
    {
        return "Cream, Sugar, and Whipped Cream";
    }
    else if (option == 8)
    {
        return "No Extras";
    }
}

int main()
{
    int type = 0;
    int extras = 0;

    //Greet the user
    std::cout << "Welcome to our coffee shop, here is our menu:" << std::endl;
    std::cout << "   1) Black" << std::endl;
    std::cout << "   2) Espresso" << std::endl;
    std::cout << "   3) Latte" << std::endl;
    std::cout << "   4) Cappuccino" << std::endl;
    std::cout << "   5) Americano" << std::endl;
    std::cout << "   6) Flat White" << std::endl;
    std::cout << "   7) Affogato" << std::endl;
    std::cout << "   8) Cortado" << std::endl;
    std::cout << "What would you like: ";
    std::cin >> type; //Get what drink they would like

    //Let them know about the optional extras we can add to drinks
    std::cout << "Here are the extras we can add:" << std::endl;
    std::cout << "   1) Cream" << std::endl;
    std::cout << "   2) Sugar" << std::endl;
    std::cout << "   3) Whipped Cream" << std::endl;
    std::cout << "   4) Cream and Sugar" << std::endl;
    std::cout << "   5) Cream and Whipped Cream" << std::endl;
    std::cout << "   6) Whippped Cream and Sugar" << std::endl;
    std::cout << "   7) All Three" << std::endl;
    std::cout << "   8) None" << std::endl;
    std::cout << "What would you like: ";
    std::cin >> extras; //Get their chosen extras

    //Output their order
    std::cout << "You have ordered a(n) " << printDrink(type) << " Style Coffee with " << printExtras(extras) << std::endl;
}
