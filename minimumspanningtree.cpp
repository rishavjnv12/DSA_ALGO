/*  
TELL YOUR CODE TO START BELIEVING IN GOD!!
THEY HATE US BECAUSE THEY AIN'T US
    ARIJIT SUR 
    @duke_knight
    @surcode
    IIT ISM 
 WORK SO HARD THAT YOUR IDOL BECOMES YOUR COMPETITOR 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define pi pair<int,int>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i=0;i<a.size();i++) cin>>a[i];}
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void mst(vector<pi> adj[], int v){
    vector<int> dist(v+1,INF); 
    set<pi> s;
    dist[1] = 0;
    s.insert({0,1});
    while(!s.empty()){
        pi x = *s.begin();
        s.erase(s.begin());
        int u = x.second;
        for(int i=0;i<adj[u].size();i++){
            pi y = adj[u][i];
            int weight = y.second;
            int v = y.first;
            if(dist[v] > dist[u] + weight){
                if(dist[v]!=INF)
                    s.erase(s.find({dist[v],v}));
                dist[v] = dist[u] + weight;
                s.insert({dist[v],v});
            }
        }
    }
    int sum =0;
    for(int i=1;i<=v;i++) sum+= dist[i];
    printf("%d\n",sum);
}
void solve(){
    int v,e,a,b,w;
    cin>>v>>e;
    vector<pi> adj[v+1];
    for(int i=0;i<e;i++){
        cin>>a>>b>>w;
        adj[a].pb({b,w});
    }
    mst(adj,v);
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}