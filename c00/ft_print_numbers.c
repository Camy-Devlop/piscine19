//	ft_print_numbers.c
//  libft02
//
//  Created by Adbaibi on 22/12/2021.
//
#include <unistd.h>
#include "ft_print_numbers.h"
void ft_print_numbers()
{
	char lettre='0';
	while(lettre<='9')
	{
		
		write(1,&lettre,1);
		lettre++;
	}
}

