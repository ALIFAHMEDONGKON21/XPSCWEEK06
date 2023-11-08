#include<bits/stdc++.h>
using namespace std;
#define     ll                              long long int
#define     ull                             unsigned long long int
#define     ui                              unsigned int
//STL :
#define     vi                              vector<int>
#define     vb                              vector<bool>
#define     vs                              vector<string>
#define     vl                              vector<ll>
#define     si                              set<int>
#define     sl                              set<ll>
#define     ip                              pair<int,int>
#define     lp                              pair<ll,ll>
#define     ips                             pair<string,int>
#define     lps                             pair<string,ll>
#define     ipc                             pair<char,int>
#define     lpc                             pair<char,ll>
#define     vip                             vector<ip>
#define     PQ                              priority_queue
#define     vlp                             vector<lp>
#define     hashmap                         unordered_map
#define     all(x)                          x.begin(),x.end()
#define     forI                             (i,s,n) for(int i=s; i<n; i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)
#define     cin_the_array(x,o,n)            for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_the_array(x,o,n)           for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<endl;



//......Let's Start ........................//
void solved()
{
    ll n,cout1=0,count2=0;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;

    for(int i=0; i<n; i++)
    {
        if(s1[i]=='R')
    {
        if(s2[i]=='p')
        {
            count2++;
        }
        else if(s2[i]=='S')
        {
            cout1++;
        }
    }
    else if (s1[i]=='P')
    {
        /* code */
        if(s2[i]=='R')
        {
            cout1++;
        }
        else if(s2[i]=='S')
        {
            count2++;
        }
    }
    else
    {
        if(s2[i]=='R')
        {
            count2++;
        }
        else if(s2[i]=='P')
        {
            cout1++;
        }
    }
 }
 if(cout1>count2)
 {
    cout<<"0"<<endl;
 }
 else if(cout1 == count2)
 {
    cout<<"1"<<endl;
 }
 else
 {
    cout<<((count2-cout1)/2)+1;
 }
    
}


int main(){
    
    int t;
    cin>>t;

    while(t--)
    {
        solved();
    }
    
    return 0;
}