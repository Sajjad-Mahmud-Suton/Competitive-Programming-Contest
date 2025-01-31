#include<iostream>
using namespace std;
int main()
{
    int max=0,temp;
    long long n;
    cin >> n;

    while(n!=0)
    {
        temp = n%10;
        if(temp>=max)
            max = temp;
        n=n/10;

    }
    cout << max <<endl;
}
