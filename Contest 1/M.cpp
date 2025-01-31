#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cin >>  A >> B >> C;
    int s1 = A+B;
    int s2 = B+C;
    int s3 = A+C;

    if(s1<=s3 && s1<= s2)
        cout << s1;

    else if(s2<=s1 && s2 <= s3)
            cout << s2;

    else
            cout << s3;

}







