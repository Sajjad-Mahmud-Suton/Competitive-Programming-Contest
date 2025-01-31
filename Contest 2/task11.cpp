#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin >> n ;
    for(i=1; i<=n; i++)
    {
        long long num;
        cin >> num;

        long long shelve = num /5;
        if(num %5 != 0)
        {
            shelve++;
        }

        cout << shelve<<endl;

    }


    return 0;
}




