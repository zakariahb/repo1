#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t i = 0;
    if (*s == '\0')

    return NULL;
    char * p1 = malloc (len * sizeof(char));
	    if (p1 != NULL)
	    {
		    while(i <= len )
		    {
			    p1[i] = s[start + i];
			    i++;
		    }


		    p1[i] = '\0';
	    }
    return p1;

}
char *ft_strtrim(char const *s1, char const *set)
{
    if (s1 == NULL || set == NULL)
    return NULL;
    size_t len = strlen(s1);

    size_t start = 0;

    size_t end = strlen - 1;

    char *pointer = malloc((ft_substr()) * sizeof(char));
    while (pointer != NULL)
    {
        if (start <= set)
        {
            start++;
        }
        else    (end >= set)
        {
            end--;
        }
        ft_substr(start - end);

    }
     
    return pointer;
}
int main ()
{
    printf("output=====>%s\n",ft_strtrim("  zakaria .","   \t\n"));

    return 0;
}
