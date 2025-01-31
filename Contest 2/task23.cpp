#include <iostream>
using namespace std;

int main() {
    int r;
    cin >> r;

    long long count = 0;
    for (int x=-r;x<=r;++x)
        {
        int xsquared = x*x;
        int maxy=0;
        while (maxy*maxy <= r*r-xsquared)
        {
            maxy++;
        }
        maxy--;
        count += 2 * maxy + 1;
    }

    cout << count << endl;
    return 0;
}

