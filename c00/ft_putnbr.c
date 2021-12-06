//
//  ft_putnbr.c
//  libft
//
//  Created by adbaibi on 06/12/2021.
//
#include <unistd.h>
#include <stdio.h>
#include "ft_putnbr.h"

void ft_putnbr(int nb)
{
   
    char n   ='0';
    int  tmp =nb;
    int cpt=0;
    if(nb>0)
    {
        
        //---------------------------------------------------------------------------
        // nombre de caractaire dans entier
        //---------------------------------------------------------------------------
        while (tmp>0) {
            tmp=tmp/10;
            cpt++;
        }
        //---------------------------------------------------------------------------
        // fin nombre de caractaire
        //---------------------------------------------------------------------------
        tmp=nb;
        for (int i=0; i<cpt; i++) {
            tmp=nb/10;
            tmp*=10;
            
        }
    }else{
        write(1, &n, 1);
    }
    
    printf("%d\n",cpt);
}
