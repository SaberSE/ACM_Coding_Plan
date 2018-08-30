/*�󳼵��÷�
*˼·���������ã�����һ������ֱ�����·�������ǿ���ͨ������dfs��bfs���������·��
*����д���������ڽӱ���������һ�ֶ��ڴ��ռ��ҪС������������1wʱ����ʹ�����ֽ�����
*/

#include <bits/stdc++.h>
using namespace std;
#define N 23333

//u������ʼ�㣬v�����յ㣬w����Ȩֵ
vector<pair<int,int>>G[N+5];
long long max_dis,ed;

void dfs(int st,int father,int dis)
{
    if(dis>max_dis)max_dis=dis,ed=st;
    for(int i=0;i<G[st].size();++i){
        if(G[st][i].first==father)continue;
        int v=G[st][i].first,w=G[st][i].second;
        dfs(v,st,dis+w);
    }
}

int main()
{
    int n,u,v,w;
    cin>>n;
    for(int i=1;i<n;++i){
        cin>>u>>v>>w;
        G[u].push_back(make_pair(v,w));
        G[v].push_back(make_pair(u,w));
    }
    dfs(1,0,0);
    dfs(ed,0,0);
    cout<<(max_dis+1)*max_dis/2+10*max_dis<<endl;

    return 0;
}
