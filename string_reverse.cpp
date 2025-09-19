#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int size;

    cout << "Enter the length of your string: ";
    cin >> size;

    char *str = new char[size + 1];

    cout << "Enter your string: ";
    cin >> str;

    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    cout << "Reversed string: " << str << endl;

    delete[] str;

    return 0;
}
