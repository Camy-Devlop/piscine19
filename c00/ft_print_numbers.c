//
//  Created by adbaibi

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

