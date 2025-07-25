#include<iostream>
using namespace std;

int a = 5;

void func(){
    register int a = 0;
  
    a++;
    cout << "Size of variable: " << sizeof(a) << endl;
    cout << "The variable is :" << a << endl;
    cout << endl;
}

int main(){
    func();
    func();
    func();
    cout << "The variable is :" << a << endl;
    cout << "Address of global variable a: " << &a;
    return 0;
}
/* Sample Output
Size of variable: 4
The variable is :1

Size of variable: 4
The variable is :1

Size of variable: 4
The variable is :1

The variable is :5
Address of global variable a: 0x404040
    */
