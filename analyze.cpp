#include <iostream>
using namespace std;

//This function is to analyze pointer
void analyze_pointer(int *ptr) {
    cout << "Memory location: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

int main() {
    //Stack allocation
    int iValue = 42;
    cout << "Stack variable:" << endl;
    analyze_pointer(&iValue);

    cout << endl;

    // Heap allocation
    int *hValue = new int;
    *hValue = 99;
    cout << "Heap variable:" << endl;
    analyze_pointer(hValue);

    delete hValue;

    return 0;
}
