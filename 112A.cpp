#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

string str1, str2;
int result = 0;

int main () {
	fastio;

	cin>>str1>>str2;

	for(int i=0; i<str1.size(); i++) {
		if (str1[i] > 64 && str1[i] < 91) {
			str1[i] += 32;
		}

		if (str2[i] > 64 && str2[i] < 91) {
			str2[i] += 32;
		}
		
		if (str1[i] > str2[i]) {
			result = 1;
			break;
		}
		if (str2[i] > str1[i]) {
			result = -1;
			break;
		}
	}
	cout<<result<<"\n";

	return 0;
}
