/*
*˼·����ױ�Ϊw���������ߵľ���Ϊa������õ���1=c/sqrt(x*x-w*w)+c/sqrt(y*y-w*w) ���ʽ��
*��Ϊ�ױ߲��ᳬ��б�ߣ�������x��y����С�ı�Ϊ�Ͻ磬0Ϊ�½磬����Ϊ1e-8��Ȼ����ж���
*/

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
double x,y,c;

bool judge(double w)
{
    return 1-c/sqrt(x*x-w*w)-c/sqrt(y*y-w*w)>0;
}

double solve()
{
    double l=0,r=min(x,y),m=0;
    while(r-l>1e-8){
        m=(l+r)/2;
        if(judge(m))l=m;
        else r=m;
    }
    return m;
}
int main()
{

    while(cin>>x>>y>>c)
        printf("%.3f\n",solve());
    return 0;
}
