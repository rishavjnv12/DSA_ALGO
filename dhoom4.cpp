
// Problem : Dhoom 4
// Contest : HackerEarth - Algorithms - Graphs - Breadth First Search
// URL : https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/dhoom-4/
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(100000)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define mul(a,b) ((a%mod * b%mod)%mod)
vector<bool> visited(SIZE,0);
typedef long long ll;
int solve(){
	int x,y,n;
	cin>>x>>y>>n; vector<int> a(n); input(a); sort(a);
	priority_queue<pi,vector<pi>,greater<pi>> pq;
	pq.push({0,x});
	while(!pq.empty()){
		pi u = pq.top(); pq.pop();
		//cout<<u.second<<" ";
		//if(u.second>y) return -1;
		if(u.second == y) return u.first;
		if(visited[u.second]) continue;
		visited[u.second] = 1;
		for(int i=0;i<n;i++) {
			int h = mul(a[i],u.second);
		if(!visited[h])pq.push({u.first+1,h});
		}
	}
	return -1;
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
    	cout<<solve()<<endl;
    }
    return 0;
}