
#include<iostream>
using namespace std;
int main ()
{
    int n,i,temp,count = 0;
    cin >> n;
    int j = 1, arr[100];
    for(i=100; i<=999; i++)
    {   int sum =0;
        int num =i;
        while(num>0)
        {
            temp = num%10;
            sum = sum+temp;
            num = num/10;
        }


        if(sum==n)
        {
            arr[j]=i;
            j++;
            count++;
        }


    }
    cout << count<<endl;
    for(j=1; arr[j]!=0; j++)
    {
        cout << arr[j]<<endl;
    }

}

