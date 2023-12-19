#include <iostream>
// #include <cstdlib>

using namespace std;

void findSmallestAndLargest(int arr[], const int length, int &minimum, int &maximum)
{
    minimum = arr[0];
    maximum = arr[0];
    cout << minimum << "----==----" << maximum << endl;
    for (size_t i = 0; i < length; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
}

int main(int argc, char const *argv[])
{
    srand(time(0));
    
    int  smallest;
    int  largest;
    const int ARR_LENGTH = 10;

    int arr[10];

    cout << "The array has these: \n";

    for (size_t i = 0; i < ARR_LENGTH; i++)
    {
        arr[i] = rand()%90 + 1;
        cout << arr[i] << ' ';
    }
    cout << endl;
    
    findSmallestAndLargest(arr, ARR_LENGTH, smallest, largest);
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;

    return 0;
}
