#include <stdio.h>

/**
 * main : create_array.
 * 
 * Return = 0 great.
 */
 
char *create_array(unsigned int size, char c)
{
    char *str;
    unsigned int i;
    i=0;
    
    str = malloc(sizeof(char) * size);
    if(size = 0)
    return(NULL);
    
    while(i < size)
    {
        str[i] = c;
        i++;
    }
    if(str == NULL)
    return(NULL);
    else
    return(str);
}
