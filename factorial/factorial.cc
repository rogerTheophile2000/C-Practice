#include <iostream>
using namespace std;

int main()
{
    int n;
    long double factorial(1.0);

    cout << "Enter a positive integer : ";
    cin >> n;

    if (n < 0)
        cout << "Error ! factoria of a negative number doesn't exist." << endl;
    else
    {
        for (int i(1); i <= n; i++)
        {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;
    }
    return 0;
}