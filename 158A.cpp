#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main(){
	int n,k,cont=0;
	cin>>n>>k;
	
	int vet[n];
	
	for(int i=0; i<n; i++){
		cin>>vet[i];
	}
	
	for(int i=0; i<n; i++){
		if((vet[i] > 0) && (vet[i] >= vet[(k-1)])){
			cont++;
		}else{
			break;
		}
	}
	
	cout<<cont<<"\n";
	return 0;
}