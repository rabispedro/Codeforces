#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

char str[101];

void sortStr(char* str, int size);

int main () {
	fastio;
	cin>>str;

	sortStr(str, 101);

	cout<<str<<"\n";
	return 0;
}

void sortStr(char* str, int size) {
	int i;

	for (i=0; i<size; i++) {
		if (str[i] == '\0') break;

		str[i] = 'a';
	}

	str[i] = '\0';
}
