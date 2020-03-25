   #include<bits/stdc++.h> 
    using namespace std;
    #define speedgeek ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
    #define pb push_back
    #define mp make_pair
    #define ff first
    #define ss second
    #define min3(a, b, c) min(a,min(b, c))
    #define min4(a, b, c, d) min(a, min(b, min(c, d)))
    #define max3(a, b, c) max(a,max(b, c))
    #define max4(a, b, c, d) max(a, max(b, max(c, d)))
    #define all(x) x.begin(),x.end()
    #define fill(a,b) memset(a,b,sizeof(a))//never use lli_MAX and lli_MIN with memeset function
    #define lli long long int
    #define N 998244353
    int const maxN = 201;

    lli power(lli x,lli p,lli mod){
    if(p==1){
        return x;
    }
    lli d=power(x,p/2,mod);
    d*=d;
    d%=mod;
    if(p%2){
        d*=x;
        d%=mod;
    }
    return d;
}

int main()
 {
    speedgeek;
    lli n;cin>>n;
    if(n%2==1) cout<<"black"<<endl;
    else {cout<<"white"<<endl;cout<<1<<" "<<2<<endl;}
    return 0;
 }