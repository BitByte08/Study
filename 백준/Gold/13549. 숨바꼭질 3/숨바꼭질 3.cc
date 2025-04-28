#include <iostream>
#include <queue>
#include <vector>
using namespace std;

priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int>>>pq;
vector<int> visit(100001,0);

int main(void){
	int n,k; cin >> n >> k;
	pq.push(make_pair(0,n));
	while(!pq.empty()){
		int t = pq.top().first;
		int x = pq.top().second;
		pq.pop();
		visit[x] = 1;
		if(x==k){
            cout << t;
			break;
		}
		if(x-1>=0 && !visit[x-1])
			pq.push(make_pair(t+1,x-1));
		if(x+1<=100000 && !visit[x+1])
			pq.push(make_pair(t+1,x+1));
		if(x*2<=100000 && !visit[x*2])
			pq.push(make_pair(t,x*2));
	}
	return 0;
}