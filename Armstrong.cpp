#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number: " << endl;
    cin >> num;

    int sum = 0;
    int originalNum = num;

    while (num > 0)
    {
        int lastDigit = num % 10;
        sum += lastDigit * lastDigit * lastDigit;
        num = num / 10;
    }

    if (sum == originalNum)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong";
    }

    return 0;
}