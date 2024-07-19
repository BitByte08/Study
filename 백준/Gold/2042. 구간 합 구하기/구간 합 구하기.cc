#include <iostream>
#include <cmath>
using namespace std;
long long *tree;
long long arr[1000001];

long long makenode(int node, int start, int end){
    if(start==end) return tree[node] = arr[start];
    int mid = (start+end)/2;
    return tree[node] = makenode(2*node,start,mid)+makenode(2*node+1,mid+1,end);
}

long long sum(int node, int start, int end, int left, int right){
    if(left>end || right<start) return 0;
    if(left<=start && end<=right) return tree[node];
    int mid = (start+end)/2;
    return sum(node*2,start,mid,left,right) + sum(node*2+1,mid+1,end,left,right);
}

void updatenode(int node, int start, int end, int idx, long long diff){
    if(idx<start || idx>end) return;
    tree[node]+=diff;
    if(start==end) return;
    int mid = (start+end)/2;
    updatenode(node*2,start,mid,idx,diff);
    updatenode(node*2+1,mid+1,end,idx,diff);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int num,m,k,a,b;
    long long c;
    cin>>num>>m>>k;
    int height = ceil(log2(num));
    tree = new long long[1<<(height+1)];
    for(int i=0;i<num;i++)
        cin>>arr[i];
    makenode(1,0,num-1);

    for(int i=0;i<m+k;i++){
        cin>>a>>b>>c;
        if(a==1){   //b->c로 변환
            long long diff = c-arr[b-1];
            arr[b-1]=c;
            updatenode(1,0,num-1,b-1,diff);
        }
        else if(a==2)
            cout << sum(1,0,num-1,b-1,c-1)<<'\n';
    }
    return 0;
}