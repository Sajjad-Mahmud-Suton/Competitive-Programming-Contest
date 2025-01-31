#include<iostream>
using namespace std;
int main()
{
    int n,i,temp,digit,luc;
    cin >> n;

    for (i=1; i<=1000; i++)
    {
        temp = i;
        luc = 1;

        while(temp>0)
        {
            digit = temp%10;
            if(digit!=4 && digit!=7)
            {
                luc = 0;
                break;
            }
            temp = temp/10;
        }

        if(luc && n%i == 0)
        {
            cout << "YES"<< "\n";
            return 0;
        }
    }
    cout << "NO";
}



