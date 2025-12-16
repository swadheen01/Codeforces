#include <bits/stdc++.h>
using namespace std;
int part(int arr[], int start, int end)
{
    int pivot = arr[start];
    int p = start + 1;
    int q = end;
    while(p<q)
    {
        while(arr[p]<=pivot) p++;
        while(arr[q]>pivot) q--;

        if(p<q) swap(arr[p], arr[q]);
    }
    swap(arr[start], arr[q]);
    return q;
}
void quick(int arr[], int start, int end)
{
    if(start<end)
    {
        int loc = part(arr,start,end);
        quick(arr,start,loc-1);
        quick(arr,loc+1,end);
    }
}
int main() {
    int arr[] = {10,5,2,15,10,22,11,7,3,17};

    int n = sizeof(arr) / sizeof(arr[0]);   // n = 10;

    cout << "Original array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    quick(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}