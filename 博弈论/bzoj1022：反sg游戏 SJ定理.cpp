/*
* anti-sg��Ϸ�Ķ��壺���߼���Ϊ�յĲ�����ʤ�����������SG��Ϸһ�¡�
* ʹ��SJ�����������
* ��������һ��Anti-SG��Ϸ�����������������Ϸ��SGֵΪ0ʱ��Ϸ���������ֱ�ʤ��������
* 1����Ϸ��SGֵΪ0����������ϷSGֵ��������1��
* 2����Ϸ��SGֵ��Ϊ0������һ������ϷSGֵ����1��
*/
//�������ǹ۲��֪��SG(x)��ֵ����x
//�����һ�ѵ�ʯͷ������4����ômex{3,2,1,0}=4�����Բ���Ҫ�������⴦��SGֵ��

#include <bits/stdc++.h>
#pragma comment(linker, "/STACK:102400000,102400000")
#define rep(i,a,n) for(int i=a;i<n;++i)
#define _for(i,a,n)for(int i=a;i<=n;++i)
#define pb push_back
#define mp make_pair=1e9+7;
#define all(x) (x).begin(),(x).end()
#define input() int t;cin>>t;while(t--)
#define close() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mt(arr,n) memset(arr,n,sizeof(arr))
#define inf ~0u>>1
#define INF 0x3f3f3f3f
#define esp 1e-6
const int MOD =1e9+7;
const int maxn =100000;
using namespace std;
typedef long long ll;
typedef pair<int,int>P;

int main()
{
    int n,x;
    close();
    input(){
        bool flag = false;
        int ans = 0;
        cin>>n;
        _for(i,1,n){
            cin>>x;
            ans ^=x;
            if(x!=1)flag = true;
        }
        if((!ans&&!flag) || (ans&&flag))cout<<"John"<<endl;
        else cout<<"Brother"<<endl;
    }

    return 0;
}
