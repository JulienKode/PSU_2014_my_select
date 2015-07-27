##
## Makefile for  in /home/karst_j/rendu/B1/Systeme Unix/PSU_2014_my_select
## 
## Made by Julien Karst
## Login   <karst_j@epitech.net>
## 
## Started on  Mon Dec 22 13:17:54 2014 Julien Karst
## Last update Sat Jan 10 23:02:18 2015 Julien Karst
##

NAME	= my_select

CC	= gcc

CFLAGS	= -I./include

SCR	= src/main.c \
	  src/fonc_base.c \
	  src/fonc.c \
	  src/fonc_one.c \
	  src/fonc_two.c \
	  src/my_select.c \

OBJ	= $(SCR:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) -lncurses

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
