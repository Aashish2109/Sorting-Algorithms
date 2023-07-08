#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivotelement = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivotelement)

            count++;
    }

    int pivotelementINdex = start + count;
    swap(arr[pivotelementINdex], arr[start]);

    int i = start, j = end;
    while (i < pivotelementINdex && j > pivotelementINdex)
    {
        while (arr[i] < pivotelement)
        {
            i++;
        }
        while (arr[j] > pivotelement)
        {
            j--;
        }
        if (i < pivotelementINdex && j > pivotelementINdex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotelementINdex;
}
void quicksort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int p = partition(arr, start, end);
    quicksort(arr, start, p - 1);
    quicksort(arr, p + 1, end);
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
    quicksort(arr, 0, size - 1);
    cout<<"The Sorted Array is:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

//OUTPUT
//Enter the size of ARRAY:
// 9
// Enter the ARRAY elements:
// 9 8 7 6 5 4 3 2 1
// The Sorted Array is:
// 1 2 3 4 5 6 7 8 9