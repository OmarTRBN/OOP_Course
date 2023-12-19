#include <iostream>
#include <iomanip>

using namespace std;
void changeArr(int arr[], int length)
{
    // Pointer address of array is used here (reference)
    for (size_t i = 0; i < length; i++)
    {
        arr[i] *= 2;
    }
}

int main(int argc, char const *argv[])
{
    const int LENGTH = 5;
    int array[5] = {1,2,3,4,5};

    cout << "Before change: "<< endl;
    for (size_t i = 0; i < LENGTH; i++)
    {
        cout << setw(3) << array[i];
    }

    changeArr(array, LENGTH);

    cout << "\nAfter change: " << endl;
    for (size_t i = 0; i < LENGTH; i++)
    {
        cout << setw(3) << array[i];
    }
    
    cout << endl;
    return 0;
}