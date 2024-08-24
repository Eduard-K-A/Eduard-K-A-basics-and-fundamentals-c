#include <iostream>
using namespace std;

int arrayNum = 2;
int array1[2] = {};
int array2[2] = {};
int array3[4] = {}; // Array to hold merged elements

void getNum(int array[]) // asks user to input value for array
{

    cout << "Input " << arrayNum << " integers for the first array:" << endl;
    for (int i = 0; i < arrayNum; i++)
    {
        cout << "Enter an integer: ";
        cin >> array[i];
    }
}

void sortArr(int array3[]) // sorts the array in descending order using bubble sort algorithm
{
    for (int i = 0; i < 2 * arrayNum - 1; i++)
    {
        for (int j = i + 1; j < 2 * arrayNum; j++)
        {
            if (array3[i] < array3[j]) // Swap elements if they are in the wrong order
            {
               int temp = array3[i];               
                array3[i] = array3[j];
                array3[j] = temp;
            }
        }
    }
}

void mergeArr(int array1[], int array2[], int array3[]) // Merge the two arrays into array3
{
    for (int i = 0; i < arrayNum; i++)
    {
        array3[i] = array1[i];
        array3[i + arrayNum] = array2[i];
    }
}

void displayArr(int array3[]) // Display the sorted merged array
{ 
    cout << "Display array in descending order:" << endl;
    for (int i = 0; i < 2 * arrayNum; i++)
    {
        cout << array3[i] << " ";
    }
    cout << endl;
}

int main()
{
    array1[arrayNum] = {};
    array2[arrayNum] = {};
    array3[arrayNum * 2] = {}; // Array to hold merged elements

    getNum(array1); // Input elements for the first array

    getNum(array2); // Input elements for the second array

    mergeArr(array1, array2, array3); // Merge the two arrays into array3

    sortArr(array3); // Sort the merged array in descending order

    displayArr(array3);  // Display the sorted merged array

    return 0;
}
