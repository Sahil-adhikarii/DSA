#include <iostream>
using namespace std;

int search(int x[], int end, int sv)
{
    int lwr = 0;
    int upr = end - 1;

    while (lwr <= upr)
    {
        int mid = lwr + ((upr - lwr) / 2);

        if (sv < x[mid])
        {
            upr = mid - 1;
        }
        else if (sv == x[mid])
        {
            return mid;
        }
        else
        {
            lwr = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 12, 15, 18, 20, 25, 30};  // Binary Search on Sorted Array
    int size = sizeof(arr) / sizeof(arr[0]);

    int val;
    cout << "Enter Number To Search: ";
    cin >> val;
    cout << search(arr, size, val) << endl;

    return 0;
}