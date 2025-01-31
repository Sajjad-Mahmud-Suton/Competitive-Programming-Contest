#include<iostream>
using namespace std;
int main()
{
    int n,i,temp,pos=0,neg=0;
    cin >> n;

    for (i=1; i<=n; i++)
    {
        cin >> temp;
        if(temp<0)
            neg++;
        else if( temp > 0)
            pos++;
    }
    cout << "Positive: "<<pos<<endl;
    cout << "Negative: "<<neg<<endl;
}




