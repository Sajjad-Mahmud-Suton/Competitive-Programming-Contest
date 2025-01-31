#include <iostream>
using namespace std;

int main()
{
    int n,k,temp,i;
    cin >> n >> k;
    int num = n;
    for(i=1; i<=k; i++)
    {
        temp = num%10;
        if(temp != 0)
        {
            n--;
            num = n;
        }

        else
      {
            n=n/10;
             num=n;
        }


    }
    cout << n;

    return 0;
}



