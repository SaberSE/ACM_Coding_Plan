/*
*���������ݣ���x��n�η�
*������2��13�η�ʱ�����ǿ����ȼ����2*2=4��ֵ������2��13�η�����д��4*4*4*4*4*4*2(�˴���һ��2)����ʽ���ټ���4*4=16��ֵ����д��16*16*16*2��ֵ������ֻ����5�ξ͵õ��˽��
*/
#include <bits/stdc++.h>
using namespace std;

int power(int x,int n)
{
    if(n==1)return x;
    int c=power(x,n/2);
    if(!(n&1))
        return c*c;
    else
        return c*c*x;
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<endl;
}
