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
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        if (arr[i] == 1)
        {
            count1++;
        }
        if (arr[i] == 2)
        {
            count2++;
        }
    }
    for (int i = 0; i <= count0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count0; i <= (count0 + count1); i++)
    {
        arr[i] = 1;
    }
    for (int i = (count0 + count1); i <= n; i++)
    {
        arr[i] = 2;
    }
    cout << "sorted array of 0 ,1 & 2 is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << ends;
    }
}