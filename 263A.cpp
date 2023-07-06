#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int result, mat[5][5], row, column;

int main () {
	fastio;

	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			cin>>mat[i][j];

			if (mat[i][j] == 1) {
				row = i;
				column = j;
			}
		}
	}

	result += (row > 2 ? row-2 : 2-row);
	result += (column > 2 ? column-2 : 2-column);
	cout << result << "\n";

	return 0;
}
