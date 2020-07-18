#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define Vi vector<int>
#define Vll vector<long long>
#define Pii pair<int,int>
#define Pll pair<long long, long long>
#define VVi vector<vector<int>>
#define fori(i,a,b) for(int i=a;i<b; i++)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
typedef long long int ll;
typedef double dl;
using namespace std;
// soln to codeforces https://codeforces.com/problemset/problem/713/A
ll binToInt(string& s){
    ll ans = 0;
    for(int i=(int)s.size()-1,k=0;i>=0;i--,k++){
        ans+=((s[i]-'0')*pow(2,k));
    }
    return ans;
}

ll convert(string& num){
    string ans;
    for(auto i:num){
        if((i-'0')%2 == 0){
            ans.pb('0');
        }else{
            ans.pb('1');
        }
    }

    return binToInt(ans);
}

void soln(){
    ll t;cin>>t;
    unordered_map<ll,ll>ump;
    fori(i,0,t){
        char c;
        string num ;
        cin>>c>>num;
        if(c=='+'){
            ump[convert(num)]++;
        }else if(c=='-'){
            ump[convert(num)]--;
        }else{
            cout<<ump[binToInt(num)]<<"\n";
        }
    }
	return;
}

int main() {
	// your code goes here
	fastio;
	int t=1 ; //cin>>t;
	while(t--){
		soln();
	}
	return 0;
}
