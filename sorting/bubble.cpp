#include <iostream>
using namespace std;

void bubble(int arr[], int size)
{

  for (int step = 0; step < size; step++)
  {

    for (int i = 0; i < size - step; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
}

void display(int arr[], int size)
{

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{

  int arr[] = {8, 3, 5, 10, 11, 45};

  int size = sizeof(arr)/sizeof(arr[0]);
 display(arr,size);
  bubble(arr, size);
  display(arr,size);

  return 0;
}