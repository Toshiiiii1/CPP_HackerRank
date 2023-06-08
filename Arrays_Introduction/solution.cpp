#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    // read array
    for (i=0; i < n; i++)
        cin >> arr[i];
    reverse(arr, arr + n);
    // display array
    for (i=0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}