#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int max_value = -1;
string arr[50];
int main(void){
	int n; string a; cin >> a >> n;
	int index = 0;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	for(int i=0;i<n;i++){
		string temp = "";
		int l=0,o=0,v=0,e=0;
		temp = a+arr[i];
		for (int i = 0; i < temp.size(); i++){
			if (temp[i] == 'L') l++;
			else if (temp[i] == 'O') o++;
			else if (temp[i] == 'V') v++;
			else if (temp[i] == 'E') e++;
		}
        int temp_value = ((l+o)*(l+v)*(l+e)*(o+v)*(o+e)*(v+e))%100;
		if (max_value<temp_value){
			max_value=temp_value;
			index = i;
		}
	}
	cout << arr[index]<<endl;
}