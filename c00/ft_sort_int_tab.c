//
//  ft_sort_int_tab
//  libft02
//
//  Created by Adbaibi on 22/12/2021.
//
void ft_sort_int_tab(int *tab, int size)
{
	int tmp=0;
	int jj=2;
	if (size<=2){jj=1;}
	
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<size-jj;j++)
		{
			
			if(tab[j]>=tab[j+1])
			{
			
				tmp=tab[j];
				tab[j]=tab[j+1];
				tab[j+1]=tmp;

			}
			if((2<size)&&(tab[j]>=tab[j+2]))
			{
				tmp=tab[j];
				tab[j]=tab[j+2];
				tab[j+2]=tmp;
			}
			if((2<size)&&(tab[j+1]>=tab[j+2]))
			{
				tmp=tab[j+1];
				tab[j+1]=tab[j+2];
				tab[j+2]=tmp;
				
			}
		}
	}
}

