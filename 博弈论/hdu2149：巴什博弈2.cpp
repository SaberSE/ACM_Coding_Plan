/*
*��ʲ���ģ���n=(m+1)*r+s�����n��m+1�ı�������ô�϶��Ǻ���Ӯ��������ǣ�������Ӯ
*������΢��Ҫ����һ��˼άת������m���з������ۣ�������⡣
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m){
        if(m>=n){
            for(int i=n;i<=m;++i){
                if(i==n)cout<<i;
                else cout<<" "<<i;
            }
            cout<<endl;
        }
        else{
            if(n%(m+1)==0)cout<<"none"<<endl;
            else cout<<n%(m+1)<<endl;   //�Ѷ����sȡ�ߣ��Ͱ�״̬ת���˱�ʤ̬
        }
    }
    return 0;
}
