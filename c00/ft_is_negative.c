
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
