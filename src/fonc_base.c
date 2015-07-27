/*
** fonc_base.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_my_select/src
**
** Made by Julien Karst
** Login   <karst_j@epitech.net>
**
** Started on  Thu Jan  8 17:13:26 2015 Julien Karst
** Last update Fri Jan  9 22:13:24 2015 Julien Karst
*/

#include "my_select.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void	my_str(char *str)
{
  write(1, str, my_strlen(str));
}

void	my_str_under(t_all *a, char *str)
{
  my_str(a->us);
  my_str(str);
  my_str(a->ue);
}

void	my_exit(char *str)
{
  my_str(str);
  my_str("\n");
  exit(1);
}
