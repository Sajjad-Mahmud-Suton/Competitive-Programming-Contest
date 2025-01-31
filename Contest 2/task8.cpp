#include <iostream>
using namespace std;

int main()
{
    int P,Q,R;
    cin >>P>>Q>>R;
    int route1 = P + Q;
    int route2 = Q + R;
    int route3 = R + P;
    int minm = route1;
    if (route2<minm) minm = route2;
    if (route3<minm) minm = route3;
    cout << minm << endl;

    return 0;
}

