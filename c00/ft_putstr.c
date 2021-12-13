//
//  ft_putstr.c
//  libft02
//
//  Created by Adbaibi on 13/12/2021.
//

#include <unistd.h>
void ft_putstr(char *str)
{
    int cpt=0;
    while(*(str+cpt)!='\0') {
        write(1,(str+cpt),1);
        cpt++;
    }
}
