#include<iostream>
using namespace std;
int main()
{
    int N,A,B;

    cin >> N >> A >> B;
    int train = N*A;
    if(train<=B)
        cout << train;
    else
    cout << B ;
}




