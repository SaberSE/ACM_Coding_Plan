#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int ans=0;
        for(int i=1;i<=n;++i){
            cin>>arr[i];
            ans^=arr[i];
        }
        if(arr[k]>(arr[k]^ans))cout<<"Yes"<<endl; //����k�ѵ�ʯ�������������ѵ�����ʱ��һ���ܲ�ֵ�k�ѣ�ʹ���ǵ�����Ϊ0��(����ȡ���ڣ���Ϊ������Ҫȡһ��)
        else cout<<"No"<<endl;      //�������ѡ����һ�ѵĸ������ڵ���������͵�ʱ����ô���ǾͿ���ȡ����Ӧ�������ø�����������ȣ�����Ͳ��С�
    }
    return 0;
}
