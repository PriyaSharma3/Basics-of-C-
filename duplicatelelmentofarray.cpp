#include <iostream>
using namespace std;

int main()
{
    int arr[12], n;
    cout << "Enter size of an array :";
    cin >> n;
    cout << "Enter elements of an array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "duplicate element is : " << arr[i] << endl;
            }
        }
    }
}