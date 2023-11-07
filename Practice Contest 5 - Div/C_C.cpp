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



int main(){
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];

        int b[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        
        int  maximun_om=INT_MIN;
        int  maximum_add= INT_MIN;

        int stack_om=0;
        int stack_add=0;

        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                stack_om=0;
            }
            else
            {
                stack_om++;
            }

            if(b[i]==0)
            {
                stack_add=0;
            }
            else
            {
                stack_add++;
            }
            maximun_om=max(maximun_om,stack_om);
            maximum_add=max(maximum_add,stack_add);
        }
        if(maximun_om>maximum_add)
        {
            cout<<"Om"<<endl;
        }
        else if(maximum_add>maximun_om)
        {
            cout<<"Addy"<<endl;
        }
        else
        {
            cout<<"Draw"<<endl;
        }

    }
    
    return 0;
}