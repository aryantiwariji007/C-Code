#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= key)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            // right me jaao
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            // left me jaao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int laststOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= key)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            // right me jaao
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            // left me jaao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int even[5] = {1, 2, 3, 3, 4};
    cout << "first occ of 3 is" << firstOcc(even, 5, 3) << endl;

    return 0;
}