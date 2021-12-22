
//
//  ft_swap.c
//  libft02
//
//  Created by Adbaibi on 22/12/2021.
//
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	if (*b!=0)
	{
		int tmp=*a/(*b);
		*b=*a%(*b);
		*a=tmp;
	}
}
