#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{

    int i, j;

    for (i = 0; i < size - 1; i++)
    {

        for (j = i + 1; j < size; j++)
        {

            if (arr[j] < arr[i])
            {

                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void printarr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{

    int arr[] = {5, 7, 6, 8, 2, 7, 93, 4, 8, 52};
    int size = sizeof(arr) / sizeof(arr[0]);
        printarr(arr, size);
        selectionSort(arr, size);
        printarr(arr, size);
        return 0;
}