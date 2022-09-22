#include "main.h"
/**
*
*
*
*
*/
		void times_table(void)
		{
		int a=0,b=0,c=0;

		for(int i=0; i<= 9; i++)
		{
		   printf("%d",a);
		   printf(",");
		   printf(" ");
		  for(int j=0; j < 9;j++)
		  {
		  	
			  b=i * c;
			  if(b >= 10)
			  {
			  printf("%d",b);
			  printf(",");
			  printf(" ");
			  }
			  else if(j == 8)
			  {
			  	break;
			  }
			  else {
			  printf(" ");
			  printf("%d",b);
			  printf(",");
			  }
			  c=c+1;
			 	  
		  }
		  c=1;
		
		  printf("\n");
		  
		}
		
}










		//192.168.0.0/22
	 // Masque:11111111.11111111.11111100.00000000/22
				//  .00000011.11111111/22	






























