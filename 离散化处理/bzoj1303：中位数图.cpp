#include <bits/stdc++.h>
using namespace std;
const int maxn = 100005;
int arr[maxn],l[maxn<<1],r[maxn<<1],sum[maxn];  //l��r���±�Ϊ�˷�ֹ���ָ�������n������Ҫ�������ȡ�
typedef long long ll;

inline ll read()
{
    ll x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
int main()
{
    ios::sync_with_stdio(false);
    int n, b, pos;
    ll ans = 0;
    n = read(), b = read();
    for(int i = 1; i <= n; ++i){
        arr[i] = read();
        if(arr[i] > b)arr[i] = 1;     //��ɢ����������b��ֵ0������b��ֵ1��С��b��ֵ-1
        else if(arr[i] == b){arr[i] = 0;pos = i;}
        else arr[i] = -1;
    }

    //��ΪΪ�˷�ֹ�����±����һ��n������l[n],r[n]�൱��l[0],r[0],��Ϊl��r�����posλ��������ȥ��ǰ׺�ͣ�����0�൱��ֻ��b��һ������
    l[n] = r[n] = 1;

    for(int i = pos - 1; i >= 1; --i){
        sum[i] = sum[i + 1] + arr[i];
        l[sum[i] + n]++;   //����n����ֹ�±���ָ���
    }

    for(int i = pos + 1; i <= n; ++i){
        sum[i] = sum[i - 1] + arr[i];
        r[sum[i] + n]++;  //����n����ֹ�±���ָ���
    }
    //���ݳ˷��˷�ԭ����Ӧ�����Ӽ���(��κ��Ҷ���ȼ���)
    for(int i = 0; i <= 2 * n - 1; ++i)
        ans += l[i] * r[2 * n - i];

    cout<< ans <<endl;

    return 0;
}
