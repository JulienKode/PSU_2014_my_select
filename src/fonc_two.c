/*
** fonc_two.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_my_select
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Fri Jan  9 21:41:06 2015 Julien Karst
** Last update Sat Jan 10 10:02:29 2015 Julien Karst
*/

#include "my_select.h"

void	link_struct(t_all *a, struct termios *t, struct termios *tmp)
{
  a->t = t;
  a->tmp = tmp;
}

void	link_struct2(t_all *a, char **argv, int ac)
{
  a->ac = ac - 1;
  a->argv = argv;
}

void	check_keycode(t_all *a)
{
  if (a->key == UP)
    increment(a, &(a->s), '-');
  if (a->key == DOWN)
    increment(a, &(a->s), '+');
  if (a->key == LEFT)
    a->s = a->s;
  if (a->key == RIGHT)
    a->s = a->s;
  if (a->key == SPACE)
    a->i = a->s;
}

void	increment(t_all *a, int *b, char op)
{
  if (op == '+')
    {
      if (*b < a->ac)
	*b += 1;
    }
  if (op == '-')
    {
      if (*b > 1)
	*b -= 1;
    }
}
