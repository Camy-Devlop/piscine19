//
//  ft_ultimate_div_mod.c
//  libft02
//
//  Created by Spart on 13/12/2021.
//

#include "ft_ultimate_div_mod.h"
void ft_ultimate_div_mod(int *a, int *b)
{
    int temp=(*a)/(*b);
    *b=(*a)%(*b);
    *a=temp;
            
}
