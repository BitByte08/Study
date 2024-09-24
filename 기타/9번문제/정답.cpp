#include <cstdio>
int main() {
	int n,cnt=0; scanf("%d",&n);
	int arr[n]; for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	int max=arr[n-1];
	for(int i=n-1;i>=0;i--)
		if(arr[i]>max){
			max = arr[i];
			cnt++;
		}
	printf("%d",cnt);
	return 0;
}
