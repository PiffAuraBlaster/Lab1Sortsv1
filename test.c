#include <stdio.h>
#include <assert.h>
#include <functions.h>

int main(void)
{	
	int a[1] = {1};
	int b[1] = {1};
	insert(1, a);
	
    assert(compare(a, b) == 1);
	
	int c[3] = {1, 3, 2};
	int d[3] = {1, 2, 3};
	insert(3, c);
	
	assert(compare(c, d) == 1);
	
	int e[4] = {1, 5 ,5, 4};
	int f[4] = {1, 4, 5, 5};
	insert(4, e);
	
	assert(compare(e, f) == 1);
	
	int g[5] = {-1, 0, 4, 3};
	int h[5] = {-1, 0, 3, 4};
	insert(5, g);
	
	assert(compare(g, h) == 1);
	
	puts("Insert tests successful!");
	
	
	
	
	
	
	int i[1] = {1};
	int j[1] = {1};
	selection(1, i);
	
    assert(compare(i, j) == 1);
	
	int k[3] = {1, 3, 2};
	int l[3] = {1, 2, 3};
	selection(3, k);
	
	assert(compare(k, l) == 1);
	
	int m[4] = {1, 5 ,5, 4};
	int n[4] = {1, 4, 5, 5};
	selection(4, m);
	
	assert(compare(m, n) == 1);
	
	int o[5] = {-1, 0, 4, 3};
	int p[5] = {-1, 0, 3, 4};
	selection(5, o);
	
	assert(compare(o, p) == 1);
	
	puts("Selection tests successful!");
	
	
	
	
	
	int q[1] = {1};
	int r[1] = {1};
	bubble(1, q);
	
    assert(compare(q, r) == 1);
	
	int s[3] = {1, 3, 2};
	int t[3] = {1, 2, 3};
	bubble(3, s);
	
	assert(compare(s, t) == 1);
	
	int u[4] = {1, 5 ,5, 4};
	int v[4] = {1, 4, 5, 5};
	bubble(4, u);
	
	assert(compare(u, v) == 1);
	
	int w[5] = {-1, 0, 4, 3};
	int x[5] = {-1, 0, 3, 4};
	bubble(5, w);
	
	assert(compare(w, x) == 1);
	
	puts("Bubble tests successful!");
	
	
	
	
	
	int y[1] = {1};
	int z[1] = {1};
	MergeSort(y, 1);
	
    assert(compare(y, z) == 1);
	
	int a1[3] = {1, 3, 2};
	int b1[3] = {1, 2, 3};
	MergeSort(a1, 3);
	
	assert(compare(a1, b1) == 1);
	
	int c1[4] = {1, 5 ,5, 4};
	int d1[4] = {1, 4, 5, 5};
	MergeSort(c1, 4);
	
	assert(compare(u, v) == 1);
	
	int f1[5] = {-1, 0, 4, 3};
	int g1[5] = {-1, 0, 3, 4};
	MergeSort(f1, 5);
	
	assert(compare(w, x) == 1);
	
	puts("MergeSort tests successful!");
}