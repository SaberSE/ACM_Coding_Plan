#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 30;
int n,arr[maxn];

//Բ���ڽӾ��εĶԽ�����Բ��ֱ��
int main()
{
    cin>> n;
    arr[0] = 0;
    for(int i = 1; i <= n; ++i){
        cin>>arr[i];
        arr[i] += arr[i-1];
    }
    if(arr[n]&1){   //arr[n]������Բ���ܳ�����Ϊ����Ļ����������������������һ�����С�����򲻿����о��γ���
        puts("0");
        return 0;
    }
    int ans = 0;
    for(int i= 1; i <= n; ++i){    //����ö�٣��������֮��Ļ��������ܳ���һ�룬��ô�ͼ���뾶����1
        for(int j = i + 1; j <= n; ++j){
            if(arr[j] - arr[i] == (arr[n] >> 1))ans++;
        }
    }
    cout<< (ans * (ans - 1) >> 1);

    return 0;
}
