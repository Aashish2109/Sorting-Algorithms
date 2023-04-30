#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i; // Considering every ith element as minimum
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }
            swap(arr[minIndex], arr[i]);
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of ARRAY:" << endl;
    cin >> size;
    if (size == 0)
    {
        cout << "Please enter an ARRAY of Size greater than 0" << endl;
    }
    int *arr = new int(size);
    if (size > 0)
    {
        cout << "Enter the ARRAY elements:"
             << " " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    selectionSort(arr, size);
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
