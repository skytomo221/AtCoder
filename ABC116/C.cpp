#include <stdio.h>
#include <queue>
using namespace std;

int n, h[100], m_w, m, times;

struct where{
	int l;
	int r;
};

int min(int l, int r) {
	m=1000;
	for(int i=l;i<r;i++) {
		if (m > h[i]) {
			m = h[i];
			m_w = i;
		}
	}
	return m;
}

int main() {
	queue<where> q;
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&h[i]);
	
	int nl=-1, nr=-1;
	min(0,n);
	for(int i=0;i<n;i++) {
		if (m < h[i]) {
			if (nl != -1) {
				nl = i;
			}
			else if (nr != -1) {
				nr = i;
			}
			else {
				q.push(new struct where(nl, nr));
				nl = -1;
				nr = -1;
			}
		}
		
	}
	
	printf("%d\n", m_w);
	printf("%d",times);
	return 0;
}
