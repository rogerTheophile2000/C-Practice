#include <iostream>
using namespace std;

int main()
{
    char c;
    bool isLowerCaseVowel, isUpperCaseVowel;

    cout << "Enter an alphabet" << endl;
    cin >> c;

    isLowerCaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    isUpperCaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    if (!isalpha(c))
        printf("Error ! NOn-alphabetic character. ");
    else if (isLowerCaseVowel || isUpperCaseVowel)
        std::cout << c << " is a vowel." << std::endl;
    else
        cout << c << " is a consonnant." << endl;

    return 0;
}