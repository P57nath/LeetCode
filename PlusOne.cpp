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
    string s = "0";
    for (auto x : digits)
    {
        char c = x + '0';
        s += c;
    }
    int i = digits.size();
    while (i > 0)
    {
        if (s[i] == '9')
        {
            char c = '0' + s[i] - '9';
            s[i] = c;
        }
        else
            break;

        i--;
    }

    int x = (int)s[i] - '0';
    char ch2 = '0' + x + 1;
    s[i] = ch2;
    vector<int> vec;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '0' && i == 0)
            continue;
        vec.push_back(s[i] - '0');
    }

    return vec;


}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> digits{4,3,2,1};
    vector<int> res;

    res = plusOne(digits);
    for(int i=0; i<res.size(); i++)
    {
        cout<<"[ "<<res[i]<<" ]";
    }

}


