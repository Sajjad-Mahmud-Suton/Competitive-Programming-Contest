#include<iostream>
using namespace std;
int main ()
{
    int s;
    cin >> s;
    int h,m,sec;
    h = s/3600;
    s = s%3600;
    m = s/60;
    sec = s%60;
    cout << h << ":" << m << ":" <<sec<<endl;
}
