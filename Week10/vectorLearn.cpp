#include <iostream>
#include <vector>

int main()
{
    // Creating a vector of integers
    std::vector<int> myVector;

    // Adding elements to the vector using push_back
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // Displaying the initial vector
    std::cout << "Initial vector: ";
    for (const auto &element : myVector)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Adding an element at the end using push_back
    myVector.push_back(40);

    // Displaying the updated vector
    std::cout << "Vector after adding an element: ";
    for (const auto &element : myVector)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Removing the last element using pop_back
    myVector.pop_back();

    // Displaying the vector after removing the last element
    std::cout << "Vector after removing the last element: ";
    for (const auto &element : myVector)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Inserting an element at a specific position using insert
    auto it = myVector.begin() + 1; // Insert at the second position
    myVector.insert(it, 99);

    // Displaying the vector after inserting an element
    std::cout << "Vector after inserting an element at the second position: ";
    for (const auto &element : myVector)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Removing an element at a specific position using erase
    it = myVector.begin() + 2; // Remove the element at the third position
    myVector.erase(it);

    // Displaying the vector after erasing an element
    std::cout << "Vector after erasing an element at the third position: ";
    for (const auto &element : myVector)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
