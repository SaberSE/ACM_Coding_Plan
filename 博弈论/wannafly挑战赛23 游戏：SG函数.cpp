#include <bits/stdc++.h>
#define MAXN 100010
using namespace std;
int SG[MAXN];
bool vis[MAXN];
vector<int>arr[MAXN];
int s[MAXN];
int n;
void getSG(int n)
{
    for(int i=1;i<=n;++i){   //��ΪSG[0]=0�Ǳذ�̬
        memset(vis,false,sizeof vis);  //������״̬����
        for(int j=0;j<arr[i].size();++j) vis[SG[i-arr[i][j]]]=true;
        for(int j=0;;++j){
            if(!vis[j]){
                SG[i]=j;
                break;
            }
        }
    }
}

int main()
{
    cin>>n;
    for(int i=1;i<MAXN;++i)
        for(int j=i;j<MAXN;j+=i)arr[j].push_back(i);  //Ԥ�������1-MAXN�ڸ�������Լ����Ȼ�����vector��
    getSG(100000);
    int ans=0,cnt=0;
    for(int i=1;i<=n;++i){
        cin>>s[i];
        ans^=SG[s[i]];
    }
    for(int i=1;i<=n;++i){
        for(int j=0;j<arr[s[i]].size();++j){
            //ע���������ȼ�
            if(SG[s[i]-arr[s[i]][j]]==(ans^SG[s[i]]))//��Ϊȡ��ʯ����d�������ʯ����m��Լ����arr[s[i]]���vector�д洢����s[i]��Լ��
                cnt++;        //��Ϊ���ֵ�Ŀ����Ϊ��ʹ����Ϊ0������ֻ��Ҫ�жϣ�ȡ��d��ʯͷ�������ѵ������Ƿ��ʣ�µ�SG[m-d]��ͬ����Ϊ��ͬ�������Ľ����0
        }
    }
    cout<<cnt<<endl;
}
