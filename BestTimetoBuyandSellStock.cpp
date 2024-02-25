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

int maxProfit(vector<int>& prices)
{
    int min_price= INT_MAX,profit = 0,max_price=INT_MIN;
    ffi(0,prices.size())
    {
        min_price = min(min_price,prices[i]);
        max_price = prices[i]-min_price;
        profit = max(profit,max_price);
    }
    return {profit};

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> prices{3,2,6,5,0,3};

    cout<<maxProfit(prices);

}


