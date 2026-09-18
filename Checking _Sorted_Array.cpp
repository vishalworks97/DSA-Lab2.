#include <iostream>
#include <cassert>
using namespace std;

// function declearation
bool isSorted(const int* arr, const int size);

// test sorted array
void testSortedArray()
{
    int arr[] = {1, 2, 3, 4, 5};

    bool result = isSorted(arr, 5);

    assert(result == true);
}


// test unsorted array
void testUnsortedArray()
{
    int arr[] = {1, 4, 3, 5, 6};
    bool result = isSorted(arr, 5);
    assert(result == false);
}


// test duplicate values
void testDuplicateValues(){
    int arr[] = {1, 2, 2, 3, 5};
    bool result = isSorted(arr, 5);
    assert(result == true);
}


// test only one value
void testSingleElement(){
    int arr[] = {10};
    bool result = isSorted(arr, 1);
    assert(result == true);
}


//test descending order
void testDescendingArray()
{
    int arr[] = {5, 4, 3, 2, 1};
    bool result = isSorted(arr, 5);
    assert(result == false);}


// test negative values
void testNegativeValues(){
    int arr[] = {-5, -3, -1, 0, 2};
    bool result = isSorted(arr, 5);
    assert(result == true);
}


// extra test - all values same
void testSameValues(){
    int arr[] = {5, 5, 5, 5};
    bool result = isSorted(arr, 4);
    assert(result == true);
}


// extra test - two values
void testTwoElements(){
    int arr[] = {2, 5};
    bool result = isSorted(arr, 2);
    assert(result == true);
}


// extra test negative and positive
void testNegativePositive(){
    int arr[] = {-10, -5, 0, 5, 10};
    bool result = isSorted(arr, 5);
    assert(result == true);
}


// final main
int main()
{
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testSameValues();
    testTwoElements();
    testNegativePositive();

    cout << "All tests passed!" << endl;

    return 0;
}

bool isSorted(const int* arr, const int size)
{ for (int i = 0; i < size - 1; i++){
     if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }

    return true;
}
