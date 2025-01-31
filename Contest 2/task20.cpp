#include<iostream>
using namespace std;
int main()
{
    int N,temp,num;
    cin >> N;

    for(int i=1; i<=N; i++)
    {
        int sum = 0;
        cin >> num;
        while(num != 0)
        {
            temp = num % 10;
            sum = sum + temp;
            num = num/10;
        }
        cout << sum <<endl;
    }
}
