
#include <iostream>
using namespace std;

void isunique(int arr[], int ele, int size, int no_of_time_ele[])
{
    int no_of_time = 0;
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == ele)
        {
            no_of_time++;
            no_of_time_ele[i] = no_of_time;
        }
    }
}

int main()
{
    int size_arr;
    cin >> size_arr;
    int arr[size_arr];
    int no_of_time_ele[size_arr];
    for (int i = 0; i < size_arr; i++)
    {
        cin >> arr[i];
        isunique(arr, arr[i], i, no_of_time_ele);
    }

    for (int i = 0; i < size_arr; i++)
    {
        cout << no_of_time_ele[i];
    }

    return 0;
}
