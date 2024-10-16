#include<iostream>
#include<climits>

using namespace std;

int main()
{
    int i{0};
    cout << "hello world" << endl;
    cout << "cout value: " << i << ", sizeof: " << sizeof i << ", max value: " << INT32_MAX << ", min value: " << INT32_MIN << endl;
    
    string name{"My name is ?"};
    cout << name << endl;

    const float pi{3.14};
    cout << "My Pi = " << pi;

}