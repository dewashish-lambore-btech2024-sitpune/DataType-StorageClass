#include <iostream>
using namespace std;

int a = 5;

void func() {
    auto a = 4;
    cout << "Address of local a: " << &a << endl;
    a++;
    cout << "Size of variable: " << sizeof(a) << endl;
    cout << "Local variable a: " << a << endl;
    cout << endl;
}

void showGlobal() {
    cout << "Global variable a: " << ::a << endl;
    cout << "Address of global a: " << &::a << endl;
    cout << endl;
}

void staticDemo() {
    static int count = 0;
    count++;
    cout << "Static count: " << count << endl;
    cout << "Address of static count: " << &count << endl;
    cout << endl;
}

int main() {
    cout << "Initial global a: " << a << endl;
    cout << endl;
    
    func();
    func();
    func();
    
    showGlobal();
    
    staticDemo();
    staticDemo();
    staticDemo();
    
    return 0;
}

/* Sample Output
Address of func variable a : 0x404194
Size of variable           : 4
The variable is            : 1

Address of func variable a : 0x404194
Size of variable           : 4
The variable is            : 2

Address of func variable a : 0x404194
Size of variable           : 4
The variable is            : 3

The variable is            : 5
Address of global variable a : 0x404040
    */
