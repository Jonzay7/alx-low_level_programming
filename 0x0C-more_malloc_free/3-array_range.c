#include <stdlib.h>
#include "main.h"
 
/** 
* *array_range - creates an array of integers and stores numbers min to max, 
* both inclusive in the array 
* @min: smallest number to be stored 
* @max: largest number to be stored 
* Return: pointer to the newly created array on success, 
* else NULL if min > max or if malloc fails 
*/

int *array_range(int min, int max)
{	
          int *boy;	
          int girl, num, index;

          if (min > max)
		  return (0);	
          girl = (max - min) + 1;
	  boy = malloc(sizeof(int) * girl);	
          if (boy == 0)		
		  return (0);	
          for (num = min, index = 0; num <= max; index++, num++)		
          *(boy + index) = num;
	  return (boy);
}