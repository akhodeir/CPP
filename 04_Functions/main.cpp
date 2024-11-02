#include<iostream>

using namespace std;

void myprint (int i=3);
void callRef (int &);

int main()
{
    myprint();
    myprint(4);
    
    int i = 4;
    callRef (i);
    cout << "my i = " << i << endl;

    int A[]{1,2,3,4,15};

    for(auto i:A)
        cout << i;


    cout << "\n last i = " << i;
}

void myprint (int i)
{
    cout << i << endl;
}

void callRef (int &i)
{
    i = 5;
}