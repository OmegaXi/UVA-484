#include <cstdlib>
#include <cstdio>
#include <cmath>

int number[10000];
int counts[10000];

int main()
{
	int n,count = 0,find;
	while ( ~scanf("%d",&n) ) {
		find = 0;
		for ( int i = 0 ; i < count ; ++ i )
			if ( number[i] == n ) {
				counts[i] ++;
				find = 1;
				break;
			}
		if ( !find ) {
			number[count ++] = n;
			counts[count -1] = 1;
		}
	}
	for ( int i = 0 ; i < count ; ++ i )
		printf("%d %d\n",number[i],counts[i]);

	return 0;
}
