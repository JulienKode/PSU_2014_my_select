/*
** my_select.c for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_my_select
**
** Made by Julien Karst
** Login   <karst_j@epitech.net>
**
** Started on  Mon Jan  5 11:24:20 2015 Julien Karst
** Last update Sat Jan 10 23:01:58 2015 Julien Karst
*/

#include "my_select.h"

void			my_select(int ac, char **argv, t_all *a)
{
  struct termios	t;
  struct termios	tmp;

  a->i = -1;
  a->s = 1;
  link_struct(a, &t, &tmp);
  link_struct2(a, argv, ac);
  get_termios(&t);
  get_termios(&tmp);
  raw_mode(&t);
  get_password(&t);
  init_terminal(a);
  display(a, argv);
  get_keycode(a, argv);
  modify_terminal(&tmp);
}

void			get_keycode(t_all *a, char **argv)
{
  char			c;
  int			i;

  a->key = 0;
  while (a->key != ECHAP)
    {
      a->key = 0;
      i = read(1, &(a->key), 7);
      check_keycode(a);
      display(a, argv);
    }
}

void                    display(t_all *a, char **argv)
{
  int			c;

  c = 1;
  my_str(a->cl);
  while (argv[c])
    {
      if ((c == a->i) && (c == a->s))
        my_iu(a, argv[c]);
      else if (c == a->i)
        my_str_inv(a, argv[c]);
      else if (c == a->s)
	my_str_under(a, argv[c]);
      else
        my_str(argv[c]);
      my_str("\n");
      c++;
    }
}
