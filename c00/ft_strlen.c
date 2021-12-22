//
//  ft_swap.c
//  libft02
//
//  Created by Adbaibi on 22/12/2021.
//
#include <stdio.h>

int ft_strlen(char *str)
{
	int cpt=0;
	while(*(str+cpt)!='\0')
	{
		cpt++;
	}
	return cpt;
}
int main()
{
	int b=ft_strlen("bonjour ");
	printf("%d",b);
}