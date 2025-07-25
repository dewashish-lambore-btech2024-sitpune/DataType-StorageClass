
#include<iostream>
using namespace std;

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


int main() {
    cout << "Initial global a: " << a << endl;
    cout << endl;
    
    func();
    func();
    func();
    
    
    return 0;
}
/*
Sample Output
Address of func variable a: 0x7fff3392d2fc
Size of variable: 4
The variable is :5

Address of func variable a: 0x7fff3392d2fc
Size of variable: 4
The variable is :5

Address of func variable a: 0x7fff3392d2fc
Size of variable: 4
The variable is :5

The variable is :5
Address of global variable a: 0x404040*/
