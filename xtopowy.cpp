#include "stdafx.h"

int x_pow_y(int x, int y)
{
	int i = 1, pow = 1;
	if (y<0)
	{
		printf("Warning: Negative number in power! \n Exit with error code: "); return -1;
	}
	if (y == 0)
		return 1;
	else
	{
		if (y == 1)
			return x;
		else
		{
			while (y > 0)
			{
				pow = pow * x;
				y -= 1;
			}
			return pow;
		}
	}

}
