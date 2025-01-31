#include<iostream>
using namespace std;
int main()
{
    int A,B;
    cin >>  A >> B;
    int sum = A+B;
    if(A%3==0 || B%3==0 || sum%3 == 0)
        cout << "Possible";
    else
    cout << "Impossible" ;
}






