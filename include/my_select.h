/*
** my_select.h<include> for  in /home/karst_j/Epitech/2014-2015/SysUnix/PSU_2014_my_select/include
**
** Made by Julien Karst
** Login   <karst_j@epitech.net>
**
** Started on  Tue Jan  6 10:12:08 2015 Julien Karst
** Last update Fri Jan  9 22:23:31 2015 Julien Karst
*/

#ifndef MY_SELECT_H_
# define MY_SELECT_H_

#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <curses.h>
#include <term.h>

#define UP		4283163
#define DOWN		4348699
#define LEFT		4479771
#define RIGHT		4414235
#define ECHAP		27
#define SPACE		32
#define SUPPR		2117294875
#define BACKSPACE	127
#define ENTER		10

typedef struct		s_all
{
  struct termios	*t;
  struct termios	*tmp;
  char			**argv;
  char			*us;
  char			*ue;
  char			*cl;
  char			*mr;
  char			*me;
  long			key;
  int			ac;
  int			i;
  int			s;
  int			c;
}			t_all;

int			main(int ac, char **argv);
void			my_putchar(char c);
int			my_strlen(char *str);
void			my_str(char *str);
void			my_str_under(t_all *a, char *str);
void			get_termios(struct termios *t);
void			raw_mode(struct termios *t);
void			modify_terminal(struct termios *t);
void			get_password(struct termios *t);
void			my_exit(char *str);
void			my_select(int ac, char **argv, t_all *a);
void			link_struct(t_all *a, struct termios *t, struct termios *tmp);
void			get_keycode(t_all *a, char **argv);
void			link_struct2(t_all *a, char **argv, int ac);
void			display(t_all *a, char **argv);
void			init_terminal(t_all *a);
void			my_str_inv(t_all *a, char *str);
void			init_var(int *i, int *s, int *c);
void			my_iu(t_all *a, char *str);
void			check_keycode(t_all *a);
void			increment(t_all *a, int *b, char op);

#endif /* MY_SELECT_H_ */
