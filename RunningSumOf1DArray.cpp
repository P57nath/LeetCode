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

int pivotIndex(vector<int>& nums)
{
    int n =nums.size();

    int sum = 0,leftsum = 0, rightSum = 0;


    for (int &i : nums)
    {
        sum += i;
    }

    for (int i = 0; i < n; ++i)
    {
        rightSum = sum - leftsum - nums[i];

        if(leftsum == rightSum)
        {
            return i ;
        }

        leftsum+=nums[i];
    }

    return -1;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;cin>>n;

    vector<int> digits;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        digits.push_back(x);
    }

    cout<<pivotIndex(digits);
}


