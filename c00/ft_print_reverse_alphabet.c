//
//  Created by adbaibi

#include <unistd.h>
#include "ft_print_reverse_alphabet.h"
void ft_print_reverse_alphabet(void)
{
	char lettre='z';
	while(lettre>='a')
	{
		
		write(1,&lettre,1);
		lettre--;
	}
}
