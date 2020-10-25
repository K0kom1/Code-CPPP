/*Tim day con lien tiep dai nhat co TBC lon hon x


*/
#include <bits/stdc++.h>
#define ft first
#define sd second
#define mn 1000005
#define mod
#define MP make_pair
#define PB push_back
#define heap priority_queue
#define Bjerg ""
#define getbit(x,i) (x>>i)&1;
using namespace std;
long n,x,a[mn],d[mn],f[mn];
void update(long x,long val)
{
    while(x<=mn)
    {
        cout << (x&-x) << " ";
        d[x]=min(d[x],val);
        x+=(x&-x);
        cout << x << endl;

    }
}
long get(long x)
{
    long res=n+1;
    while(x)
    {
        res=min(res,d[x]);
        x-=(x&-x);
    }
    return res;
}
long kqq=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> x;
    n++;
    for(long i=2;i<=n; i++) {
        cin >> a[i];
        a[i]-=x;
    }
    a[1]=0;
    for(long i=2; i <= n; i++){
        f[i] = f[i-1] + a[i];
        a[i] = f[i];
        //cout << a[i]<<" ";
    }
    for(long i=1; i <= n; i++)
        d[i] = n+2;

    sort(f+1,f+1+n);
    for(long i=1;i<=n;++i){
        a[i]=lower_bound(f+1,f+1+n,a[i])-f;
    }

    update(a[1],1);
    for(long i=2; i <= n; ++i) {
        long id = get(a[i]);
        kqq = max(kqq, i-id);
        update(a[i],i);
    }
    // cout << kqq;
    return 0;
}
