#include <iostream>
using namespace std;

int majorityFider(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if(arr[j]>arr[j+1]){

                  int temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;

            }
        }
        
    }
     
   return arr[size/2]  ;

      
}

int main()
{

    int arr[] = {2,2,1,3,1,2,2};

    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = majorityFider(arr, size);

    cout << "the majority element in array is " << arr[ans];

    return 0;
}