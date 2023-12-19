#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Max num: " << RAND_MAX << endl;
    for (size_t i = 1; i <=20 ; i++)
    {
        cout << (1+rand()%6) << endl;
    }
    // rand() will return the same values    
    return 0;
}

