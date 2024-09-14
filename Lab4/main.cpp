//Garrett Foushay
//9/14
//Ask the user for inputs, then use them in a Mad Libs style story.
//Story made using Meta AI using the following prompts

//Can you help me create a fill in the blank in the style of Mad Libs?

//I would like the story to be about computers, take a 2 nouns, a verb,
//and adjective, and a number. I would like at least 4 sentences, but 
//there is no max limit on the length.

#include <iostream>
#include <string>
using namespace std;

//Create a 128 character buffer for each value we ask for
//Will have a limit from the user of 127 characters because
//Strings are null terminated
char noun1[128];
char adjective1[128];
char adjective2[128];
char verb1[128];
float num1;

//The original words, in order, were:
//innovative
//quantity
//process
//colorful
//10000
string story[] = {
    "The ", 
    " new computer was unveiled at the tech conference, featuring a powerful \nprocessor and a massive ", 
    " of storage. The crowd was amazed as the CEO demonstrated \nthe computer's ability to ", 
    " complex calculations in seconds. The computer's sleek \ndesign and ", 
    " display made it a standout in the industry. With a price tag of ", 
    " \ndollar(s), it was clear that this computer was a game-changer.\n"
};

int main()
{
    cout << "This story will be about the introduction of a new computer Please provide the requested inputs." << endl;
    cout << "Please provide a noun: ";
    cin.getline(noun1, sizeof noun1);
    cout << "Please provide an adjective: ";
    cin.getline(adjective1, sizeof adjective1);
    cout << "Please provide another adjective: ";
    cin.getline(adjective2, sizeof adjective2);
    cout << "Please provide a verb: ";
    cin.getline(verb1, sizeof verb1);
    cout << "Please provide a number: ";
    cin >> num1;

    cout << story[0] << adjective1 << story[1] << noun1 << story[2] << verb1 << story[3] << adjective2 << story[4] << num1 << story[5];
}