#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	int n,sum=0;
	cin>>n;
	for(int i=0; i<n; i++){
		string str;
		cin>>str;
		if(str == "++X" || str == "X++"){
			sum++;
		}else if(str == "--X" || str == "X--"){
			sum--;
		}
		str.clear();
	}
	cout<<sum<<"\n";
	return 0;
}