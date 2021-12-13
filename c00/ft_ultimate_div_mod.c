//
//  ft_ultimate_div_mod.c
//  libft02
//
//  Created by Adbaibi on 13/12/2021.
//

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp=(*a)/(*b);
    *b=(*a)%(*b);
    *a=temp;
            
}
