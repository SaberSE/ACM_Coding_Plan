/*
*��ķ���ģ�������(���ƹ���n�ѣ�����������ȡ��������Ʒ��ÿ������ȡ1�������ȡ����ʤ
*���������������(a,b,c),a^b^c=0
*���(a,b,c)Ϊ��������ƣ����ǿ��Խ�c��ȥa^b��Ȼ����������ƣ�a,b,c-a^b)
*�ƹ㵽4��(a,b,c,d)Ϊ������������ǿ��Խ��Ķѵ�����һ�ѣ�ǰ�����㹻���ܼ�ȥ������Ϊd��d-a^b^c,�ɹ����������
*/


#include <bits/stdc++.h>
using namespace std;
int arr[105];
int main()
{
    int n,ans,cnt;
    while(cin>>n,n){
        ans=cnt=0;
        for(int i=0;i<n;++i){
            cin>>arr[i];
            ans^=arr[i];
        }
        if(ans==0)puts("0");
        else{
            for(int i=0;i<n;++i){
                int k=ans^arr[i];    //ans^a[i]�൱������ֵ�����һ�������2�ε�0,0����κ�ֵ��Ϊ���������ĳһ���ܼ�ȥk,���ܹ���������ơ�
                if(arr[i]>=k)cnt++;
            }
            cout<<cnt<<endl;
        }

    }
    return 0;
}
