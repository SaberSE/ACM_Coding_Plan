/*
*��Ŀ���������˺�һ��ֻ�ܴ�һ�˵��Զ���ʻ�������ʣ���ô��������ʹ���˾���ͬʱ��A��������B��
*���ǵĲ����ٶ�һ������һ������3��������A��B�صľ��룬�����ٶȺͳ��١�
*��������ʱ��,һ����λ���ĸ�����
*˼·�����ַ����������С������C����У�Ȼ��С����ͷȥ���ң����������ͬʱ����������ѵ�ʱ����̡�
*ע�⣺����������ֱ���ж���ȣ���Ҫ���þ���
*/
#include <bits/stdc++.h>
#define exp 1e-4
using namespace std;

void solve(int dis,int v1,int v2)
{

    double t1,t2,t3,t4;
    double lo=0,hi=dis;
    do{
        double mid=(hi+lo)/2.0;
        t1=mid/v2; //�׳˳���c���ʱ
        t2=t1+(dis-mid)/v1; //�׺ķѵ���ʱ��
        t3=(mid-t1*v1)/(v1+v2); //С���ص������Һķѵ�ʱ�䣬�����ң�С��������������ٶ�Ӧ���ǣ�a+b)
        t4=t1+t3+(dis-(t1+t3)*v1)/v2; //�Һķѵ���ʱ��
        if(t2<t4)hi=mid;
        else lo=mid;

    }while(fabs(t2-t4)>exp);
    printf("%.2f\n",t2);
}
int main()
{
    int dis,v1,v2;
    while(cin>>dis>>v1>>v2){
        solve(dis,v1,v2);
    }
    return 0;
}
