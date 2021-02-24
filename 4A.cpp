#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	int w;
	cin>>w;
	
	if(w > 2 && !(w%2)){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	
	return 0;
}