/*
** fonc_one.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_my_select/src
**
** Made by Julien Karst
** Login   <karst_j@epitech.net>
**
** Started on  Thu Jan  8 17:17:53 2015 Julien Karst
** Last update Sat Jan 10 23:01:10 2015 Julien Karst
*/

#include "my_select.h"

void	init_terminal(t_all *a)
{
  if (tgetent(NULL, "xterm") == -1)
    my_exit("Error -> tgetent failed");
  a->us = tgetstr("us", NULL);
  a->ue = tgetstr("ue", NULL);
  a->mr = tgetstr("mr", NULL);
  a->me = tgetstr("me", NULL);
  a->cl = tgetstr("cl", NULL);
}

void	my_str_inv(t_all *a, char *str)
{
  my_str(a->mr);
  my_str(str);
  my_str(a->me);
}

void	my_iu(t_all *a, char *str)
{
  my_str(a->mr);
  my_str(a->us);
  my_str(str);
  my_str(a->me);
  my_str(a->ue);
}
