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
#define vi(n)          vector<int> n
#define mi             map<int,int>
#define pp             pair<int,int>
#define pb             push_back
#define sv(v)          sort(v.begin(),v.end())
#define duplicate(arr,n)   adjacent_find(arr, arr + n) != arr + n;
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define co(n)          cout<<n;
typedef long long ll;

vector<int> runningSum(vector<int>& nums)
{
    int n= nums.size();

    ffi(1,n)
    {
        nums[i] = nums[i] + nums[i-1];
    }
    return nums;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> digits{1,2,3,4};
    vector<int> res;

    res = runningSum(digits);
    for(int i=0; i<res.size(); i++)
    {
        cout<<"[ "<<res[i]<<" ]";
    }

}


