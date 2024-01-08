#include <iostream>
using namespace std;

class Array
{
    // private members
private:
    int *arr;
    int size;
    int capacity;

public:
    // Constructor to initialize the array
    Array(int size)
    {
        this->size = size;
        capacity = size;
        arr = new int[capacity];
    }
    // functions to create, insert, delete, get size, map, find, sort the array

    void createArray();
    int insertInArray(int index, int value);
    void deleteFromArray(int index);
    int getSize();
    int mapInArray(int index, int value);
    int findInArray(int value);
    void sortInArray();

    // Destructor to deallocate memory
    ~Array()
    {
        delete[] arr;
    }
};
// time complexity is O(n)
// space complexity is O(n)

void Array::createArray()
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << "The element at index " << i << " is: " << arr[i] << endl;
    }
}
// time complexity is O(n)
// space complexity is O(1)

int Array::insertInArray(int index, int value)
{
    if (index < 0 || index > size)
    {
        cout << "Invalid index" << endl;
        return -1;
    }

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = value;
    size++;

    cout << "The new array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 1;
}
// time complexity is O(n)
// space complexity is O(1)

void Array::deleteFromArray(int index)
{
    if (index < 0 || index >= size)
    {
        cout << "Invalid index" << endl;
        return;
    }
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "array after deletion: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int Array::getSize()
{
    cout << "The size of the array is: " << size << endl;
    return 1;
}
// map function
// time complexity is O(n)
// space complexity is O(1)

int Array::mapInArray(int index, int value)
{
    if (index < 0 || index >= size)
    {
        cout << "Invalid index" << endl;
        return -1;
    }
    arr[index] = value;
    cout << "The new array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 1;
}
// find function using linear search algorithm,use binary search for better time complexity and space complexity
// time complexity is O(n)
// space complexity is O(1)

int Array::findInArray(int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            cout << "Element found at index: " << i << endl;
        }
    }
    return -1;
}
// sort function,you can also use other sorting algorithms which have better space and time cpmplexity i.e quick sort and merge sort
// time complexity is O(n^2)
// space complexity is O(1)
void Array::sortInArray()
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "The sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Array myArray(size);
    // myArray.createArray();
    // myArray.insertInArray(0, 1);
    // myArray.insertInArray(1, 2);
    // myArray.deleteFromArray(2);
    // myArray.getSize();
    // myArray.mapInArray(0, 5);
    // myArray.findInArray(5);
    // myArray.sortInArray();

    return 0;
}