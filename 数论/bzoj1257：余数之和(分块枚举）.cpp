#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//������ͣ�https://blog.csdn.net/loi_dqs/article/details/50522975
int main()
{
    ll n, k;
    scanf("%lld %lld", &n, &k);
    ll ans = (ll)n * k;
    if(n > k) n = k;   //��Ϊ���Ǹĳ������乱�׳˷�(��n>kʱ,n/i = 0,������������ֿ���ʡ��)

    ll l, r, w;
    for(ll i = 1; i <= n; i = r + 1){
        w = k / i;
        l = i,r = k / w;
        if(r > n) r = n;  //���������󳤶Ȳ��ܳ���n�����������n��������󳤶�Ϊn
        ans -= (r - l + 1) * w * (l + r) / 2;
    }
    printf("%lld\n",ans);

    return 0;

}
