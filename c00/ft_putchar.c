//  ft_putchar
//  libft02
//
//  Created by Adbaibi on 22/12/2021.
//

#include <unistd.h>

void ft_putchar(char c)
{	 
     write(1,&c,1);
}
