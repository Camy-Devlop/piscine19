//  ft_rev_int_tab.c
//  libft02
//
//  Created by Adbaibi on 22/12/2021.
//
#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
	int tmp=0;
	if(size>0)
	{
		for(int i=1;i<size/2+1;i++)
		{
			if(size%2==1)
			{
				tmp=tab[i-1];
				tab[i-1]=tab[size-i];
				tab[size-i]=tmp;
			}else 
			{
				tmp=tab[i-1];
				tab[i-1]=tab[size-i];
				tab[size-i]=tmp;
			}
			
		}
	}
}

