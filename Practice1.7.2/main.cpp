//Garrett Foushay
//9-21-24
//Implement an algorithm that always outputs 1;

#include <iostream>
using namespace std;

int main()
{
    int anyNumber = 0;
    int answer = 0;
    int prevAnswer = 0;

    anyNumber = 73;

    cout << "We'll use " << anyNumber << endl;
    answer = anyNumber + 3;
    cout << anyNumber << " + 3 = " << answer << endl;

    prevAnswer = answer;
    answer *= 2;
    cout << prevAnswer << " * 2 = " << answer << endl;

    prevAnswer = answer;
    answer -= 4;
    cout << prevAnswer << " - 4 = " << answer << endl;

    prevAnswer = answer;
    answer /= 2;
    cout << prevAnswer << " / 2 = " << answer << endl;

    prevAnswer = answer;
    answer -= anyNumber;
    cout << prevAnswer << " - " << anyNumber << " = " << answer << endl;

    cout << "The answer is always " << answer << "!" << endl;
}
