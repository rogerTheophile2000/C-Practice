#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter your string : " << endl;
    cin >> str;

    char checkCharacter = ' ';
    cout << "Enter a charater to check : " << endl;
    cin >> checkCharacter;

    int count(0);

    for (int i(0); i < str.size(); i++)
    {
        if (str[i] == checkCharacter)
            ++count;
    }

    cout << "Number of " << checkCharacter << " = " << count;

    return 0;
}
