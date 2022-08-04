// Sort an array of 0s, 1s and 2s
// Input: {0, 1, 2, 0, 1, 2}
// Output: {0, 0, 1, 1, 2, 2}

#include <iostream>
using namespace std;
low = 0;
high = 9;
void sort_arr(int arr, int size, int start, int end)
{
    if (start == end)
    {
        exit(1)
    }
    else
    {
        if (start == 0 or start == 2)
        {
            if (start == 0)
            {
                if (arr[start] != arr[low])
                {
                    temp = arr[start];
                    arr[start] = arr[low];
                    arr[low] = temp;
                    low++;
                }
                else
                {
                    low++;
                }
            }
            else
            {
                if (arr[start] != arr[high])
                {
                }
            }
        }
    }
}

int main()
{
    int arr[10];
    int start = 0;
    int end = 9;
    cout << "please enter array which contain only 0's 1's and 2's " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    sort_arr(arr, 10, start, end);
    cout << "Your sorted array look like :- " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
    }
}