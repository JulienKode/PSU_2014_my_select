/*
** main.c<src> for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_my_select/src
**
** Made by Julien Karst
** Login   <karst_j@epitech.net>
**
** Started on  Tue Jan  6 10:13:18 2015 Julien Karst
** Last update Fri Jan  9 21:34:14 2015 Julien Karst
*/

#include "my_select.h"

int	main(int ac, char **argv)
{
  t_all	a;

  my_select(ac, argv, &a);
}
