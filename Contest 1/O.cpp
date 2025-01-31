#include<iostream>
using namespace std;
int main()
{
    string S,T;
    cin >> S >> T;
    if(S == "Y")
    {
        if(T=="a" || T == "A")
            cout << "A";
        else if (T == "b" || T == "B")
            cout << "B";
        else if(T== "c" || T== "C")
            cout << "C";
    }

    else if(S == "N")
    {
        cout << T;
    }
}









