//
//  ft_div_mod.c
//  libft02
//
//  Created by Spart on 13/12/2021.
//

#include "ft_div_mod.h"
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
