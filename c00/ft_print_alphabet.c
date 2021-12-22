//	ft_print_alphabet
//  libft02
//
//  Created by Adbaibi on 22/12/2021.
//
#include <unistd.h>
#include "ft_print_alphabet.h"
void ft_print_alphabet(void)
{
	char lettre='a';
	while(lettre<='z')
	{
		
		write(1,&lettre,1);
		lettre++;
	}
}
