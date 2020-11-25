#include<iostream>
#define ll long long
using namespace std;

void f(ll n) {
    ll N;
    if(n==1)
        return;
    if(n%2) {
        N=n*3+1;
        cout<<N<<" ";
        f(N);
    }
    else {
        N=n/2;
        cout<<N<<" ";
        f(N);
    }
}

int main()
{
    ll n;
    cin>>n;
    cout<<n<<" ";
    f(n);
    return 0;
}
