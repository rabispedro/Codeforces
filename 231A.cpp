#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	fastio;
	int n,sum=0;
	cin>>n;
	
	for(int i=0; i<n; i++){
		int vet[3];
		cin>>vet[0]>>vet[1]>>vet[2];
		if((vet[0]+vet[1]+vet[2]) >= 2){
			sum++;
		}
	}
	
	cout<<sum<<"\n";
	
	return 0;
}