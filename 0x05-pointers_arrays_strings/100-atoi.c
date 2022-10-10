#include "main.h"
/**
 * _atoi - change the string in a int S
 * @s : a pointer in char
 *Return : a
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int n = 0;

	while ( *(s + i) != '\0')
	{
	  if( *(s + i) == '-'  && ( *(s + i + 1) >= '0' && *(s + i + 1)  <= '9')  )
	  {
		        if (n == 0)
		        {
			  sign = -1;
			  n = *(s + i);
			}
		        else
		        {
			  n = (n * 10) + *(s + i);
			}
		}
	  else if ( *(s + i) >= '0' && *(s + i)<= '9')
	  {
		  if (n == 0)
		  {
		    n = *(s + i);
		  }
		  else
		  {
		     sign = 1;
		     n = (n * 10) + *s;
		  }
	 }
	  else
	      break;
	}
	i++;
      return (sign * n);
}
