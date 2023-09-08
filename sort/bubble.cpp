#include <iostream>
#include <math.h>
using namespace std;

void bubble(int arr[], int size)
{
  int i,j,temp;
  for ( i = 0; i < size; i++)
  {
     for(int j=i;j<size;j++){
      if(arr[j]<arr[i]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
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
  cout << endl;
}

int main()
{

  int arr[] = {5, 2, 8, 1, 7, 9, 10, 4};
  int size = sizeof(arr) / sizeof(arr[0]);

  // before the sort
  cout << "before the sorting" << endl;
  display(arr, size);

  // bubble sort function
    bubble(arr, size);

  // after the sort
  cout << "After the sorting" << endl;
  display(arr, size);

  return 0;
}