/*
*�ܼ򵥵ļ����⣬���ǿ���Բ�ֳ�n�ݣ����Ӧ�ĽǶ���Բ�Ľ�����Ƕ�Ӧ��n���εļ�������
*����Ҫע����Ǹ�����Ҫ�������-0.00�����
*/
#include <bits/stdc++.h>
#define esp 1e-9
#define PI 4*atan(1.0)
using namespace std;
int main()
{
    int t;
    double x,y,r,n;
    double x1,y1;
    cin>>t;
    while(t--){
        cin>>x>>y>>r>>n;
        double part=PI*2.0/n;
        double now=part;
        printf("%.2f %.2f\n",x+r,y);
        for(int i=1;i<n;++i){
            x1=x+r*cos(-now),y1=y+r*sin(-now);
            if(fabs(x1)<esp)x1=0;   //���ƾ��ȣ���Ϊ���ܻ����-.0000000000000024222 ���������Ȼ��printf��ȡǰ2λ���ͻ����-0.00���ַǷ����
            if(fabs(y1)<esp)y1=0;
            printf("%.2f %.2f\n",x1,y1);
            now+=part;
        }
    }
    return 0;
}

