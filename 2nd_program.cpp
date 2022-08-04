// Problem :- find combination of pair  from array  which sum given by user 
// Ankit Jodhani 
// 19se02it019
#include <iostream>
using namespace std;
 
void find_combination(int arr[], int arr_size, int sum)
{
    for (int i = 0; i < arr_size - 1; i++)
    {
        for (int j = i + 1; j < arr_size; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                // printf("sum of  (%d + %d) = %d\arr_size", arr[i], arr[j],sum);
                cout<<"sum of "<<arr[i]<<" + "<< arr[j]<<" = "<<sum<<endl;
                arr[i] = 0;
                find_combination(arr, arr_size,sum);
                return;
            }
        }
    }
 
    cout<<"there is no more any combination Sorry"<<endl;
}
 
int main(void)
{
    int arr[] = { 10, 7, -2, 5, 3, 1, 14};
    int sum = 12;
 
    int arr_size = sizeof(arr)/sizeof(arr[0]);
 
    find_combination(arr, arr_size, sum);
 
    return 0;
}