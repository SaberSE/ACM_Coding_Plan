/*
*��ʲ���ģ���n=(m+1)*r+s�����n��m+1�ı�������ô�϶��Ǻ���Ӯ��������ǣ�������Ӯ
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n%(m+1)==0)cout<<"second"<<endl;
        else cout<<"first"<<endl;
    }
}
