#include <bits/stdc++.h>
#define  N 40
using namespace std;
int arr[N][N];

void Copy(int sr,int sl,int dr,int dl,int k)
{
    for(int i=0;i<k;++i){
        for(int j=0;j<k;++j)
            arr[dr+i][dl+j]=arr[sr+i][sl+j];
    }
}

void solve(int r,int l,int k)
{
    if(k==1)return ;

    solve(r,l,k/2);//������Ͻ�
    solve(r,l+k/2,k/2); //������Ͻ�
    Copy(r,l,r+k/2,l+k/2,k/2); //�����Ͻǿ��������½�
    Copy(r,l+k/2,r+k/2,l,k/2); //�����Ͻǿ��������½�
}

int main()
{
    int m;
    while(cin>>m){
        m=pow(2,m);
        for(int i=1;i<=m;++i)arr[1][i]=arr[i][1]=i;
        solve(1,1,m);
        for(int i=1;i<=m;++i){
            for(int j=1;j<=m;++j)
                cout<<setw(4)<<arr[i][j];
            cout<<endl;
        }
    }
    return 0;
}
