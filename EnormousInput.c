/*The input begins with two positive integers n k (n, k<=107). The next n lines of input contain one positive integer ti, not greater than 109, each.

Output
Write a single integer to output, denoting how many integers ti are divisible by k. */

#include <stdio.h>
 
int main()
	{
    	long int k,n,ctr=0;
    	long long int t;
	scanf("%ld%ld",&n,&k);
    	while(n--!=0)
        {	scanf("%lld",&t);
        	if(t%k==0)
		ctr++;
        }
    	printf("%ld",ctr);
	return 0;
	}
