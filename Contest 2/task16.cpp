
#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,i,count = 0;
    int n;
    cin >> n;

    for(i=1 ; i<=n; i++)
    {
       cin >> a >> b >>c;
       if((a+b)>=10)
       {
           cout << "YES"<<endl;
       }
       else if((b+c)>=10)
       {
           cout << "YES"<<endl;
       }
       else if((a+c)>=10)
       {
           cout << "YES"<<endl;
       }
       else
        cout << "NO"<<endl;

    }

}
