/*
** step_one.c for  in /home/karst_j/TP/my_select
**
** Made by Julien Karst
** Login   <karst_j@epitech.net>
**
** Started on  Mon Jan  5 11:51:31 2015 Julien Karst
** Last update Sat Jan 10 23:00:31 2015 Julien Karst
*/

#include "my_select.h"

void	get_termios(struct termios *t)
{
  if (tcgetattr(0, t) == -1)
    my_exit("Error -> tcgetattr failed");
}

void	raw_mode(struct termios *t)
{
  t->c_lflag &= ~ICANON;
  t->c_cc[VMIN] = 1;
  t->c_cc[VTIME] = 0;
  modify_terminal(t);
}

void	modify_terminal(struct termios *t)
{
  if (tcsetattr(0, 0, t) == -1)
    my_exit("Error -> tcsetattr failed");
}

void	get_password(struct termios *t)
{
  t->c_lflag &= ~ECHO;
  modify_terminal(t);
}
