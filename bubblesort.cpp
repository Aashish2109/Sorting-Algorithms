#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (flag == false)
            break;
    }
}
int main()
{
    int size;
    cout << "Enter the size of ARRAY:" << endl;
    cin >> size;
    if (size == 0)
    {

        cout << "Please enter an ARRAY of size greater than than 0" << endl;
    }

    int *arr = new int(size);
    if (size > 0)
    {
        cout << "Enter the ARRAY elements:"
             << " " << endl;
    }

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, size);
    if (size > 0)
    {
        cout << "The Sorted ARRAY is:" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}