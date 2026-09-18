#include <iostream>
using namespace std;

//this function shows address and value
void analyze_pointer(int* ptr)
    {
    cout << "Memory location: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

int main()
{
    // variable on stack
    int iValue = 25;

    cout << "Stack variable:" << endl;
    analyze_pointer(&iValue);

    cout << endl;
    //variable on heap
    int* heapValue = new int;
    *heapValue = 50;

    cout << "Heap variable:" << endl;
    analyze_pointer(heapValue);
    // free  memory
    delete heapValue;

    return 0;
}
