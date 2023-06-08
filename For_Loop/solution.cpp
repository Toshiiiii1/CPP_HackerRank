#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b;

    vector<string> temp = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (n = a; n <= b; n++)
    {
        if (n >= 1 && n <= 9)
            cout << temp[n - 1] << endl;
        else if (n % 2 == 0)
            cout << "even" << endl;
        else if (n % 2 != 0)
            cout << "odd" << endl;
    }

    return 0;
}
