#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int addDivide(int a=1, int b=1);

int t;

int main(){
	//	fastio;
	cin>>t;
	for(int i=0; i<t; i++){
		int a,b;
		cin>>a>>b;
		cout<<"A%B: "<<(a%b)<<"\n";
		cout<<"B%A: "<<(b%a)<<"\n";
		cout<<addDivide(a,b)<<"\n";
	}
	return 0;
}

int addDivide(int a, int b){
	int temp = 0;
	while(a > 0){
		if(a > b){
			if((b > 1) && !(a%(b+1))){
				temp++;
				b++;
			}
		}else{
			a /= b;
			temp++;
		}
	}
	return temp;
}