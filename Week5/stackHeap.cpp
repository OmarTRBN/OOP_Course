#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    int dizi_stack[5] = {11, 22 ,33, 44 ,55};

    for (size_t i = 0; i < 5; i++)
    {
        cout << dizi_stack[i] <<  endl;
    }

    cout << "dizi_stack is " << sizeof(dizi_stack) << " bytes." << endl;
        
    int* dizi_new = new int[5]; // Can call constructors.
    int* dizi_heap = (int*)malloc(sizeof(int)*5);
    for (size_t i = 0; i < 5; i++)
    {
        *(dizi_heap+i) = i*i;
        cout << dizi_heap[i] << endl;
    }

    delete[] dizi_new;
    free(dizi_heap);
    return 0;
}