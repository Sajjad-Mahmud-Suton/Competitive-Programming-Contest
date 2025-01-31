#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
     vector<long long>arr(n);
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    long long m=*max_element(arr.begin(),arr.end());
    long long min=*min_element(arr.begin(),arr.end());
    cout<<m<< " "<<min<<endl;
    return 0;
}
