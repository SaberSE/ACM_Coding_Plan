/*
*쳲��������ģ���һ�Ѹ���Ϊn��ʯ�ӣ���Ϸ˫������ȡʯ�ӣ����㣺
*1.���ֲ����ڵ�һ�ΰ�����ʯ��ȡ��;
*2.֮��ÿ�ο���ȡ��ʯ��������1�����ָ�ȥ��ʯ������2��֮�䣨����1����2����
*����ʤ���ҽ���n����Fibonacci�������仰˵���ذ�̬����Fibonacci���С�
*
*��϶��������һ�������������Ա�ʾΪ���ɸ���������쳲�������֮��
*/

#include <bits/stdc++.h>
using namespace std;
long long arr[100];
int main()
{
    int n;
    arr[0]=0,arr[1]=1;
    for(int i=2;i<=50;++i)arr[i]=arr[i-1]+arr[i-2];
    while(cin>>n&&n){
        if(binary_search(arr,arr+50,n))cout<<"Second win"<<endl;
        else cout<<"First win"<<endl;
    }
    return 0;
}
