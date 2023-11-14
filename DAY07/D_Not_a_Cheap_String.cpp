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

bool cond(pair<char,int>a,pair<char,int>b){
    return (a.first>b.first);
}

int main(){
    
    
    int t;                  cin>>t;
    while(t--){
        string s;           cin>>s;
        int n=s.size();
        int p;              cin>>p;
 
        vector<pair<char,int>> v;
        int cost=0;
       for(int i=0; i<n; i++)
       {
            v.push_back({s[i],i});
            cost+=(s[i]-96);
        }
 
        vi Indxs(n+1,0);
 
        sort(all(v),cond);
 
        for(auto i:v){
            if(cost<=p)break;
            cost-=(i.first-96);
            Indxs[i.second]=-1;
        }
     for(int i=0; i<n; i++)
      {
            if(Indxs[i]!=-1){
                cout<<s[i];
            }
        }cout<<endl;
    }
    
    return 0;
}