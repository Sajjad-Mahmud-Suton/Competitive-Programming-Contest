#include <iostream>
using namespace std;

int main()
{
    int N,count=0;
    cin >> N;
    int tk = N*800;
    int num=1;
    while(num <= N)
    {
        if(num%15 == 0)
        {
            count++;
        }
        num++;
    }
    int discount = tk-(200*count);
    cout << discount;


    return 0;
}


