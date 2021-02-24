#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		string aux;
		cin>>aux;
		if(aux.size() > 10){
			cout<<aux[0]<<(aux.size()-2)<<aux[aux.size()-1]<<"\n";
		}else{
			cout<<aux<<"\n";
		}
		aux.clear();
	}
	return 0;
}