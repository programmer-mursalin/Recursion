#include <iostream>
using namespace std;
bool cheak(int arr[], int size, int index)
{
    if (index >= size)
    {
        return true;
    }
    if (arr[index] > arr[index - 1])
    {
        bool agekaans = cheak(arr, size, index + 1);
        return agekaans;
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int index = 1;
    cheak(arr, size, index);
    if (cheak)
    {
        cout << "sorted";
    }
    else
    {
        cout << "no sorted";
    }
}