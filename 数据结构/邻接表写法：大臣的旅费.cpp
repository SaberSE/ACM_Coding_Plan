/*�󳼵��÷�
*˼·���������ã�����һ������ֱ�����·�������ǿ���ͨ������dfs��bfs���������·��
*����д���������ڽӱ�������Ȼ�鷳�����ǿ��Խ�Լ���ռ䣬Ч��Ҳ����,�����ݽϴ��ʱ���ʺ�ʹ�á�
*/

#include <bits/stdc++.h>
using namespace std;
#define N 23333

//u������ʼ�㣬v�����յ㣬w����Ȩֵ

struct Edge{
    int v,w;
    Edge(int vv,int ww):v(vv),w(ww){} //���캯��
};

int n;
int max_dis,ed;
vector<vector<Edge>>G;  //�Ȳ�����ռ䣬����������resize��������n��������Խ�Լ�ռ�

void dfs(int u,int father,int dis)  //����û��������������ǣ����������ж��Ƿ��Ǹ���㣬���ж��Ƿ��߹��������
{
    if(dis>max_dis)max_dis=dis,ed=u;
    for(int i=0;i<G[u].size();++i){
        int v=G[u][i].v,w=G[u][i].w;
        if(v==father)continue;
        dfs(v,u,dis+w);
    }
}


int main()
{
    int u,v,w;
    scanf("%d",&n);
    G.clear();
    G.resize(n+2); //����n������ռ�
    for(int i=1;i<n;++i){
        scanf("%d%d%d",&u,&v,&w);
        G[u].push_back(Edge(v,w));
        G[v].push_back(Edge(u,w));
    }
    max_dis=0;
    dfs(1,-1,0);
    dfs(ed,-1,0);
    printf("%d\n",max_dis*10+(max_dis+1)*max_dis/2);

    return 0;
}
