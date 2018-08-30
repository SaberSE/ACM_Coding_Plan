/*�󳼵��÷�
*˼·���������ã�����һ������ֱ�����·�������ǿ���ͨ������dfs��bfs���������·��
*����д���������ڽӾ��󣬵�n����ʱ���޷��������ˣ����ʱ��������Ҫʹ����ӱ�洢
*/

#include <bits/stdc++.h>
using namespace std;

int maze[1005][1005];
int max_index;
int maxv;
bool vis[1005];
int n;

void dfs(int st,int dis)
{
    bool flag=false;  //��ʾ����·������
    for(int i=1;i<=n;++i){
        if(!vis[i]&&maze[st][i]!=0){  //��0�������ɴ�
            flag=true;
            vis[i]=true;
            dfs(i,dis+maze[st][i]);
            vis[i]=false;
        }
    }
    if(!flag){
        if(dis>maxv){
            maxv=dis;
            max_index=st;
        }
    }
}
int main()
{
    int a,b,c;
    scanf("%d",&n);
    for(int i=1;i<n;++i){
        cin>>a>>b>>c;
        maze[a][b]=maze[b][a]=c;
    }
    memset(vis,0,sizeof vis);
    dfs(1,0);
    maxv=0;
    memset(vis,0,sizeof(vis));
    vis[max_index]=true;
    dfs(max_index,0);
    printf("%d\n",maxv*10+(maxv+1)*maxv/2);

    return 0;
}
