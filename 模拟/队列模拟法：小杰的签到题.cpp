#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    int p1,p2,p3;
    cin>>t;
    while(t--){
        cin>>n;
        priority_queue<int,vector<int>,greater<int>>que;
        for(int i=0;i<n;++i){
            cin>>k;
            que.push(k);
        }
        cin>>k;
        if(que.size()<=3);
        else{
            p1=p2=p3=0;
            int m=que.top();
            while(!que.empty()){
                if(p1<=0&&que.top()<=m){
                    p1=k;
                    que.pop();
                }
                if(p2<=0&&!que.top()<=m){
                    p2=k;
                    que.pop();
                }
                if(p3<=0&&que.top()<=m){
                    p3=k;
                    que.pop();
                }
                p1--,p2--,p3--,m++;
            }
        }
        m+=k-1; //��Ϊ�����һ��Ԫ�س��Ӻ��൱��mֻ����1��������ѭ���ͽ����ˣ��������Ҫ����k-1
        printf("%d\n",m);
    }
    return 0;
}
