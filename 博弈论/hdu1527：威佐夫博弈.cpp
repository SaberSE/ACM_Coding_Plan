/*
*�������ģ������Ѹ�������Ʒ������������ĳһ�ѻ�ͬʱ��������ȡͬ�������Ʒ���涨ÿ������ȡһ�������Ų��ޣ����ȡ����ʤ
*�������� a=(����ȡ����k*��1+��5)/2��b=a+kʱ��kΪ����Ǹ�����������Ϊ�������
*����ֻ��Ҫ�жϣ�b-a)*(1+��5)/2�Ƿ����b���ɡ�
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b;
    double t=(1.0+sqrt(5))/2;
    while(cin>>a>>b){
        if(a<b)swap(a,b);
        if((int)((a-b)*t)==b)cout<<"0"<<endl;   //ע������
        else cout<<"1"<<endl;
    }
    return 0;
}

//д��2��
/*
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int a,b;
int main()
{
    while (scanf("%d%d",&a,&b)==2)
    {
        if (a>b) swap(a,b);
        int k=b-a;
        int hh=(double)(k)*(sqrt(5)+1.0)/2.0;
        hh+k==b ?puts("0"):puts("1");
    }
    return 0;
}
*/
