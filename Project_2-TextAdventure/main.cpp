//Garrett Foushay
//10-9-2024
//This is the second project, where we are making a simple text adventure game.

#include <iostream>
#include <string>
#include <algorithm> //Has the needed  function to allow me to strip whitespace inline

void attack()
{

}

void move()
{

}

void lookAt()
{

}

void inspect()
{

}

void interact()
{

}

void roomOne()
{

}

void roomTwo()
{

}

void roomThree()
{

}

//Function that reads stdin and returns it as a string with whitespace striped
void getInput(std::string* str)
{
    getline(std::cin, *str);

    //Use the string library and a lambda to trim all whitespace
    str->erase(remove_if(str->begin(), str->end(), [](unsigned char c) {
        if (c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v') return true;
        else return false;
     }), str->end());
}

int main()
{
    std::string userInput = "";

    std::cout << "Welcome, this is a text adventure game." << std::endl;

    //This will be the main menu
    std::cout << "1) Play Game" << std::endl;
    std::cout << "2) Quit" << std::endl;
    std::cout << "Please choose and option: ";
    getInput(&userInput);

    if (stoi(userInput) == 2) return 0;

    roomOne();
}
