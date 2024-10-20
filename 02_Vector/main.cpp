#include<iostream>

using namespace std;

int main()
{
    vector <int> myV(10,2);

    for(int i = 0; i < myV.size() ; i++)
    {
        cout << "my vector contains " << i << " : " << myV[i] << endl;
    }

    vector <int> myV2{10,3,2,5,4};
    myV2.at(0) = 0;
    myV2.push_back(7);
    for(int i = 0; i < myV2.size() ; i++)
    {
        cout << "my vector2 contains " << i << " : " << myV2.at(i) << endl;
    }

}