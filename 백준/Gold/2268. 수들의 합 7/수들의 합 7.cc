#include <iostream>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;
void update(vector<ll> &tree, int node, int start, int end, int index, ll diff) {
    if (index < start || index > end) return;

    if (start == end) {
        tree[node] = diff;
        return;
    }
    int mid = (start + end) / 2;
    update(tree,node*2, start, mid, index, diff);
    update(tree,node*2+1, mid+1, end, index, diff);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
    
}
ll sum(vector<ll> &tree, int node, int start, int end, int left, int right) {
    if(left > end || right < start) return 0;
    if(left <= start && end <= right) return tree[node];
    int mid = (start + end) / 2;
    return sum(tree, node * 2, start, mid, left, right) + sum(tree, node * 2 + 1, mid + 1, end, left, right);
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int h = (int)ceil(log2(n));
    int tree_size = (n*4);
    vector<ll> tree(tree_size, 0);
    vector<ll> arr(tree_size, 0);
    int t; cin >> t;
    while(t--){
        int op, a, b; cin >> op >> a >> b;
        if(op == 0){
            if(a > b) swap(a, b);
            cout << sum(tree, 1, 0, n - 1, a-1, b-1) << '\n';
        }else if(op == 1){
            arr[a-1] = b;
            update(tree, 1, 0, n - 1, a-1, b);
        }
    }
    return 0;
}