/*https://nanti.jisuanke.com/t/29366
*icpc16���ൺ����ˮ�⣬�۲��֪��������n��λ�����ڵ���7���������һ��ֵ����ʵ�Ǹ���Ҷ������������PI*PI/6,������֪��Ҳûɶ�����Դ����
*/
#include <bits/stdc++.h>
using namespace std;

const int N =1e6+5;
double arr[N];
int main()
{
    for(int i=1;i<1000000;++i)arr[i]=arr[i-1]+(double)1.0/i/i;
    string str;
    int t;
    while(cin>>str){
        if(str.size()>=7)cout<<"1.64493"<<endl;
        else{
            sscanf(str.c_str(),"%d",&t);
            cout<<fixed<<setprecision(5)<<arr[t]<<endl;
        }
    }
    return 0;
}

