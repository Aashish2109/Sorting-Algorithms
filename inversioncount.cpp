#include <bits/stdc++.h>
using namespace std;

int merge(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainarrayindex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainarrayindex++];
    }
    mainarrayindex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainarrayindex++];
    }

    int index1 = 0;
    int index2 = 0;
    int inv = 0;
    mainarrayindex=start;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] <= second[index2])
        {
             arr[mainarrayindex++] = first[index1++];
             
        }
        else
        {
            arr[mainarrayindex++] = second[index2++];
              
            inv += len1 - index1;
        }
    }
    while (index1 < len1)
    {
        arr[mainarrayindex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainarrayindex++] = second[index2++];
    }
    delete[] first;
    delete[] second;
    return inv;
}

int mergeSort(int *arr, int start, int end)
{
    int inv = 0;
    if (start < end)
    {
    int mid = start + (end - start) / 2;
    inv += mergeSort(arr, start, mid);
    inv += mergeSort(arr, mid + 1, end);
    inv += merge(arr, start, end);
}
return inv;
}

int main()
{
    int arr[] = {2,4,1,3,5};
    int size = 5;
    int inversions = mergeSort(arr, 0, size - 1);
    cout << "Number of inversions:" << inversions << endl;
    cout<<"Sorted Array is:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
