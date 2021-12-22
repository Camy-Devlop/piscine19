//
//  ft_is_negative.c
//  libft02
//
//  Created by adbaibi on 12/12/2021.
//

#include <unistd.h>
#include "ft_is_negative.h"
void ft_is_negative(int n)
{
		char *tab=NULL;
		tab="NP";
		if(n<0)
		{
			write(1,&(tab[0]),1);
		}else
		{
			write(1,&(tab[1]),1);
		}
}
