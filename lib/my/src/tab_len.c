#include	<stdlib.h>
#include	"my.h"

int		tab_len(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != NULL)
    i++;
  return (i);
}
