#include <iostream>

using namespace std;

void toBinary(int decimalNumber)
{
    //for loop that performs a bitwise AND on each bit in a group of 8 bits
    for(int i = 8; i > 0; i--)
    {
        //prints a space to separate the binary number into two groups of 4
        if(i == 4)
            cout << ' ';

        //if a bitwise AND matches the value in the decimal, print 1, else 0
        if(decimalNumber & 1<<i-1)
            cout << 1;
        else
            cout << 0;
    }
    cout << "  ";
}

void toHexidecimal(int decimalNumber)
{
    int remainder = 0;
    int result = 0;

    //first digit
    remainder = (decimalNumber/16) % 16;

    if(remainder < 10)
        cout << remainder;
    else if (remainder == 10)
        cout << 'A';
    else if (remainder == 11)
        cout << 'B';
    else if (remainder == 12)
        cout << 'C';
    else if (remainder == 13)
        cout << 'D';
    else if (remainder == 14)
        cout << 'E';
    else if (remainder == 15)
        cout << 'F';


    //second digit
    result = decimalNumber / 16;
    remainder = decimalNumber % 16;

    if(remainder < 10)
        cout << remainder;
    else if (remainder == 10)
        cout << 'A';
    else if (remainder == 11)
        cout << 'B';
    else if (remainder == 12)
        cout << 'C';
    else if (remainder == 13)
        cout << 'D';
    else if (remainder == 14)
        cout << 'E';
    else if (remainder == 15)
        cout << 'F';

}



int main()
{
    int decimalNumber = 0;

    for (int i = 0; i < 256; i++)
    {
        cout << decimalNumber << "  ";
        toBinary(decimalNumber);
        toHexidecimal(decimalNumber);
        decimalNumber++;
        cout << endl;
    }
}
