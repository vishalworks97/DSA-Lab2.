#include <iostream>
#include <cstring>
using namespace std;

int main()
{ // size of string
    int n;
    cout << "Enter size: ";
    cin >> n;
    cin.ignore();

    char* str = new char[n + 1];
    cout << "Enter string: ";
    cin.getline(str, n + 1);

    int len = strlen(str);

    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;}

    cout<< "Reverse: " << str << endl;

// free memory
    delete[] str;

    return 0;
}