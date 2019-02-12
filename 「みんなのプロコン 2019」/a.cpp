#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	cout << (((n+1)/k>=2)?"YES":"NO") << "\n";
	return 0;
}
