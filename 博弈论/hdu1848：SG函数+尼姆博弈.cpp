/*
*SGֵ��һ�����SGֵ����һ�����������ĺ�̵��SG���Ҵ��ڵ��������С����
*�����˼���ڲ������������£���ǰ��һ���ذܵ�ĲҲ����˵��� ���ǹ涨�ģ����ߵģ�����һ��������
*��̵㣺Ҳ���ǰ�����ĿҪ����߷�������ʯ�ӿ�ȡ���������������ܹ�һ��������Ǹ���
*������ͣ�http://www.cnblogs.com/ECJTUACM-873284962/p/6921829.html
*/

//f[N]:�ɸı䵱ǰ״̬�ķ�ʽ��NΪ��ʽ�����࣬f[N]Ҫ��getSG֮ǰ��Ԥ����
//SG[]:0~n��SG����ֵ
//vis[]:Ϊx���״̬�ļ���

#include <bits/stdc++.h>
#define MAXN 1005
#define N 20
using namespace std;
int f[N],SG[MAXN],vis[MAXN];

void getSG(int n)
{
    memset(SG,0,sizeof(SG));
    for(int i=1;i<=n;++i){   //SG[0]=0��Ĭ�ϱذ�̬����1��ʼ
        memset(vis,0,sizeof vis); //ÿһ�ζ�Ҫ����һ״̬�ĺ�̼�������
        for(int j=1;j<=N;++j){
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
    f[0]=f[1]=1;
    for(int i=2;i<=16;++i)f[i]=f[i-1]+f[i-2];
    getSG(1000);
    while(cin>>n>>m>>k,n){
        //ע�⣬λ�������ȼ��ȵ��ںŵ�
        if((SG[n]^SG[m]^SG[k])==0)cout<<"Nacci"<<endl;    //��ķ���ģ�ÿ����(��Ϸ����SGֵ�����ͳ�ΪNim�ͣ�nim��Ϊ0�������ֱذ�̬
        else cout<<"Fibo"<<endl;
    }
    return 0;
}



