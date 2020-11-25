//By Lin
#include<cstdio>
#include<cstring>

using namespace std; 

int main()
{
	int n , a[105]; 
	scanf("%d" , &n ); 
	for (int i = 0; i<n; i++) scanf("%d" , &a[i] ); 
	int g , h; 
	g = 0; h = n-1; 
	for (int i = 1; i<n; i++)
		if ( a[i] <= a[g] ) g = i; 
	for (int i = n-2; i>=0; i--)
		if ( a[i] >= a[h] ) h = i; 
	int ans = n-1-g + h; 
	if ( g<h ) ans --; 
	if ( n == 1 ) printf("0\n"); 
	else printf("%d\n" , ans ); 
	return 0; 
}
