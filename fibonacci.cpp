#include "stdafx.h"

void get_fibonacci(int num)
{
	//1,1,2,3,5,8,...,Fn
	// Fn = Fn-2 + Fn-1
	int fn = 0, fnm1 = 1, fnm2 = 1; //fnm2 can be 0 or 1, your wish!
	int i = 0;

	if (num == 0 || num < 0) { printf("Enter number should be  > 0 !\n"); }
	
	if (num == 1)
		printf(" %d, ", fnm2);
	else
	{
		if(num==2)
		{
			printf(" %d, ", fnm2);
			printf(" %d, ", fnm1);
		}
		else
		{
			if (num > 2)
			{
			printf(" %d, ", fnm2);
			printf(" %d, ", fnm1);
			while (i < num - 2 && num > 0)
			{
				fn = fnm2 + fnm1;
				printf("%d, ", fn);

				fnm2 = fnm1;
				fnm1 = fn;
				i += 1;
			}
			printf("....");
			}
		}
		
	}
	
}