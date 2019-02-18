#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;

int n, m;
struct State
{
    int pos; //���е���pos��
    int cur, sum, state; //����dfs�����Ĳ���
};

int main()
{
    cin >> n >> m;
    stack<State> st;
    st.push({0, 0, 0, 0});
    while(!st.empty()) {
        auto t = st.top();
        st.pop();
        if(t.pos == 0) {
            if(t.sum + n - t.cur < m) continue;
            if(t.sum == m) {
                for(int i = 0; i < n; ++i)
                    if(t.state >> i & 1) cout << i + 1<< " ";
                cout << endl;
                continue;
            }
            t.pos = 1;
            st.push(t);  //����ݹ�ǰ����״̬
            st.push({0, t.cur + 1, t.sum + 1, t.state | 1 << t.cur}); //ѹ��ջ
        }
        else if(t.pos == 1) {
            t.pos = 2;
            st.push(t); //����ݹ�ǰ����״̬
            st.push({0, t.cur + 1, t.sum, t.state});
        }
        else continue;
    }
    return 0;
}