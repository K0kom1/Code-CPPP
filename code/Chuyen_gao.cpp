///Santouryu Ogi: Ichidai Sanzen, Daisen Sekai
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll,ll>
#define fi first
#define se second
#define foru(i,a,b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define FASTIOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define task "RICE"
using namespace std;
const ll maxn=1e7+6;
ll n,M[50],kq=1e18,f[maxn],chiphi,tongtt,dem,can;
bool getbit(ll vitri, ll x)
{
    return ((x | (1<<vitri)) ==x) ;
}
ll tinh(ll dem, ll sum, ll gt)
{
    ll tb=(sum+gt)/(dem+1ll);
    ll res=0;
    if(gt<=tb) res=tb-gt;
    else
    {
        if(tb*(dem+1ll)==(sum+gt)) res=gt-tb;
        else res=gt-(tb+1);
    }
    return res;
}
void xuli()
{
    f[0]=0;
    for(int i=1;i<(1<<n);i++) f[i]=1e18;
    for(int i=0;i<(1<<n);i++)
    {
        tongtt=dem=0;
        for(int p=1;p<=n;p++)
        {
            if(getbit(p-1,i)==1)
            {
                tongtt+=M[p];
                dem++;
            }
        }
        for(int p=1;p<=n;p++)
        {
            if(getbit(p-1,i)==0)
            {
                chiphi=tinh(dem,tongtt,M[p]);
                ll y=i+(1<<(p-1));
                f[y]=min(f[y],f[i]+chiphi);
            }
        }
    }
    kq=f[(1<<n)-1];
    printf("%lld",kq);
}
int main()
{
    FASTIOS;
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);
    scanf("%lld",&n);
    for(int i=1;i<=n;i++) scanf("%lld",&M[i]);
    xuli();
    return 0;