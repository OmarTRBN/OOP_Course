#include <iostream>

int main(int argc, char const *argv[])
{
    // Vize sinav sorusu!
    int x = 15;
    int &ref = x;  // Reference to variable x
    int *ptr = &x; // Pointer pointing to the address of variable x

    // References don't need more space in memory because
    // they share the same address

    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Value of x via reference: " << ref << std::endl;
    std::cout << "Value of x via pointer: " << *ptr << std::endl;
        
    // Modifying the value using reference
    ref = 30;
    std::cout << "Modified value of x via reference: " << x << std::endl;

    // Modifying the value using pointer
    *ptr = 45;
    std::cout << "Modified value of x via pointer: " << x << std::endl;

    // Difference between reference and pointer
    std::cout << "Address of x: " << &x << std::endl;
    std::cout << "Address of x via reference: " << &ref << std::endl;
    std::cout << "Address of x via pointer: " << ptr << std::endl;

    return 0;
}
