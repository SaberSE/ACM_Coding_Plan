#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int arr[100005];
int main()
{
    int n,m;
    while(cin>>n>>m){
        int lo=0,hi=0;
        for(int i=0;i<n;++i){
            cin>>arr[i];
            lo=max(arr[i],lo); //��n���л���������һ��Ļ�����Ϊ�½�low���൱�ڰ�n���Ϊn�飩
            hi+=arr[i];  //�������������ܻ�����Ϊ�Ͻ�high���൱�ڰ�n�춼����1�飩
        }
        while(lo<hi){  //������low==high֮ǰ�����������Ѿ�=m������mid���������ţ����Ҫ��������
            int sum=0;
            int cnt=1; ////��ǰmidֵ�ܰ�n��ֳɵ�����(��ʼ��ȫ��������Ϊ1��)
            int mid=(hi-lo)/2+lo;
            for(int i=0;i<n;++i){
                if(sum+arr[i]>mid){
                    sum=arr[i];
                    cnt++;
                }
                else{
                    sum+=arr[i];
                }
            }
            if(cnt>m)lo=mid+1;  //midֵƫС���½����
            else if(cnt<m)hi=mid; //midֵƫ���Ͻ�ǰ��
            else hi=mid;       //���cnt=m������mid�������Ž⣬���Լ�������
        }
        cout<<hi<<endl;//ѭ������ʱlo��hi��ֵ��һ���ģ��������һ������
    }
    return 0;
}
