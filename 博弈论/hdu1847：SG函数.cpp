#include <bits/stdc++.h>
#define MAXN 1005
#define N 20
using namespace std;
int f[N],SG[MAXN],vis[MAXN];
  //SG������ֵΪ0���������ֱذ�̬�������ʤ
void getSG(int n)
{
    memset(SG,0,sizeof(SG));
    for(int i=1;i<=n;++i){   //SG[0]=0��Ĭ�ϱذ�̬����1��ʼ
        memset(vis,0,sizeof vis); //ÿһ�ζ�Ҫ����һ״̬�ĺ�̼�������
        for(int j=0;j<=N;++j){
            if(f[j]>i)break;
            vis[SG[i-f[j]]]=1;   //�����״̬��SG����ֵ���б��
        }
        for(int j=0;;++j){  //��ѯ��ǰ���״̬SGֵ����С�ķ���ֵ
            if(!vis[j]){
                SG[i]=j;
                break;
            }
        }
    }
}

int main()
{
    int n,m,k;
    f[0]=1;
    for(int i=1;i<=15;++i)f[i]=f[i-1]*2;
    getSG(1000);
    while(cin>>n){
        if(SG[n])cout<<"Kiki"<<endl;
        else cout<<"Cici"<<endl;
    }
    return 0;
}



