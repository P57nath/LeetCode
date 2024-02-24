#include<bits/stdc++.h>
using namespace std;
#define testcase       long long t; cin>>t;
#define w(t)           while(t--)
#define ffi(a,b)        for(int i=a;i<b;i++)
#define ffj(a,b)        for(int j=a;j<b;j++)
#define fb(b,a)        for(int i=b;i>=a;i--)
#define no             cout<<"NO"<<endl
#define yes            cout<<"YES"<<endl
#define ci(n)          cin>>n
#define fb(b,a)        for(int i=b;i>=a;i--)
#define sa(a,n)        sort(a,a+n)
#define vi(n)             vector<int> n
#define mi             map<int,int>
#define pp             pair<int,int>
#define pb             push_back
#define sv(v)          sort(v.begin(),v.end())
#define duplicate(arr,n)   adjacent_find(arr, arr + n) != arr + n;
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define co(n)          cout<<n;
typedef long long ll;

vector<int> plusOne(vector<int>& digits)
{
    int x=0,y=0,i,value=0;

    int n = digits.size();
    for(i=0;i<n-1;i++)
    {
        x = ( x + digits[i] ) * 10;
    }
    x = ( x + digits[n-1] ) + 1;

    vector<int> res1;
    while(x!=0)
    {
        value = x%10;
        res1.push_back(value);
        x/=10;
    }
    for(i=n-1;i<0;i--)
    {

    }
    return res1;


}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> digits{1,2,3};
    vector<int> res;

    res = plusOne(digits);
    for(int i=0;i<res.size();i++)
    {
        cout<<"[ "<<res[i]<<" ]";
    }

}


