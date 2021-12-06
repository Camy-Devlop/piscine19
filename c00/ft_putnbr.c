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
    int tabNbInt[200];
    int  tmp;
    int cpt=0;
    int signe=1;
    if(nb!=0)
    {
        
        if (nb<0) {
            signe=-1;
            nb*=signe;
            
            n='-';
            write(1, &n, 1);
        }
        tmp =nb;
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
        char n;
        int exp=1;
        for (int i=cpt; i>0; i--) {
            exp=1;
            for (int j=0; j<i-1; j++) {
                exp*=10;
            }
            tmp=nb/exp;
            tabNbInt[i-1]=tmp;
            nb-=(tmp*exp);
            
            
            switch (tabNbInt[i-1]) {
            case 0:
                n='0';
                write(1, &n, 1);
                break;
            case 1:
                n='1';
                write(1, &n, 1);
                break;
            case 2:
                n='2';
                write(1, &n, 1);
                break;
            case 3:
                n='3';
                write(1, &n, 1);
                break;
            case 4:
                n='4';
                write(1, &n, 1);
                break;
            case 5:
                n='5';
                write(1, &n, 1);
                break;
            case 6:
                n='6';
                write(1, &n, 1);
                break;
            case 7:
                n='7';
                write(1, &n, 1);
                break;
            case 8:
                n='8';
                write(1, &n, 1);
                break;
            case 9:
                n='9';
                write(1, &n, 1);
                break;
            default:
                break;
           }
            
        }
        
        
        
        
    }else{
        write(1, &n, 1);
    }
    
}
/*
 *
 */
