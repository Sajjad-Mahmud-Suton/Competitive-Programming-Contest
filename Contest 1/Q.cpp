#include<iostream>
using namespace std;
int main()
{
    int P,R,Q,S,c = 0;
    cin >> P >> Q >> R >> S;

    if(P>=10)
        c++;
    if(Q>=10)
        c++;
    if(R>=10)
        c++;
    if(S>=10)
        c++;
    cout << c;
}









