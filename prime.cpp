#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    bool flag = 0;

    cout << "Enter the Number" << endl;
    cin >> num;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << "Non-Prime Number" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime Number" << endl;
    }
    return 0;
}