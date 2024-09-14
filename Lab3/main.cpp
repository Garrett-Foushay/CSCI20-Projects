//Garrett Foushay
//9/14
//Ask the user 3 questions, then output what they responded with and comments on it

#include <iostream>
using namespace std;

//Create a 128 character buffer for each value we ask for
//Will have a limit from the user of 127 characters because
//Strings are null terminated
char name[128];
char vehicle[128];
char game[128];

int main()
{
    cout << "What is your name? ";
    //I used this method to get the use input because doing it as discussed so
    //far will only read one token. The problem with this is that every whitespace
    //starts a new token, so if for vehicle you put "69 Corvette Stingray", then only
    //69 is read into the vehicle string, and Corvette would be read as game no matter what
    //the user put because that would be the next token in cin. This method will read all
    //tokens that were input.
    cin.getline(name, sizeof name);
    cout << "Welcome " << name << ", what is your favorite vehicle? ";
    cin.getline(vehicle, sizeof vehicle);
    cout << "Wow, a(n) " << vehicle << " is neat, my favorite is the 1970 Chevy C10." << endl;
    cout << "What is your favorite video game? ";
    cin.getline(game, sizeof game);
    cout << game << " is interesting, I enjoy games such as Age of Empires and Stelaris." << endl;

    return 0;
}