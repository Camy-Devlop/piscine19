
//
//  Created by adbaibi
#include <unistd.h>
#include <stdio.h>
#include "ft_print_comb.h"

void ft_print_comb(void)
{
	/*
	formule pour connaitre le nombre de combinaison non repeter
	   n!/k!(n-k)!
	*/
	int n=10;
	int k=3;
	int n1=1;
	int k1=1;
    char c='0';
    char c2='0';
    char c3='0';
    char *e=", ";
    int  cpt=0;
    int  test=1;
    char b,b2,b3;
	for(int i=n;i>n-k;--i)
	{
		n1*=i;	
	}
	for(int i=1;i<=k;i++)
	{
		k1*=i;	
	}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

    while(c3!=':' )
    {
        //---------------------------------------------------------------------------
        //  compteur de 0 à 999
        //---------------------------------------------------------------------------
        if(c3==':')
        {
            c=':';
            c2=':';
        }
        
        if(c==':')
        {
            c2++;
            c='0';
            if(c2==':')
            {
                c3++;
                c2='0';
            }
        }
        //---------------------------------------------------------------------------
        //  fin du compteur
        //---------------------------------------------------------------------------
        
//-----------------------------------------------------------------------------------
        
        //---------------------------------------------------------------------------
        //  les combinaision non repeter
        //---------------------------------------------------------------------------
        
        
        if(c!=c2 && c2!=c3 && c3!=c && c3!=':')
        {
            if (c<c2)
            {if(c<c3)
                {if(c2<c3)
                    {b=c;b2=c2;b3=c3;
                    }else{b=c;b2=c3;b3=c2;
                    }
                }else{b=c3;b2=c;b3=c2;
                }
            }else
                if (c<c3)
                {
                    b=c2;
                    b2=c;
                    b3=c3;
                }else
                {
                    if(c2<c3)
                    {
                        b=c2;
                        b2=c3;
                        b3=c;
                    }else{
                        b=c3;
                        b2=c2;
                        b3=c;
                    }
                }
            test= (b==c3 && b2==c2 && b3==c);
            if(test==1)
            {
                if(cpt>0 )
                {   write(1,&e[0],2);
                }
                write(1,&c3,1);
                write(1,&c2,1);
                write(1,&c,1);
            }
            cpt++;
            
        }
        c++;
    
    }
   
}
