#include <iostream>
using namespace std;
int solve(int arr[], int start, int e, int target)
{
    if (start > e)
    {
        return -1;
    }
    int mid = (start + e) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    if (arr[mid] > target)
    {
        return solve(arr, start, e - 1, target);
    }
    else
    {
        return solve(arr, start + 1, e, target);
    }
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int start = 0;
    int e = 7;
    int target = 7;
    int foundElement = solve(arr, start, e, target);
    if (foundElement != -1)
    {
        cout << foundElement << endl;
    }
    else
    {
        cout << "not found";
    }
}
