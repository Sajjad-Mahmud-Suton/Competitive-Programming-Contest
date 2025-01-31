#include<iostream>
using namespace std;
int main()
{
    int A,B,C,D,i;
    cin >>  A >> B >> C >> D;
    for (i=1; i<=5; i++)
    {
        if(i!=A && i!=B && i!=C && i!=D)
        cout << i;
    }

}
