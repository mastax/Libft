# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 17:19:04 by elel-bah          #+#    #+#              #
#    Updated: 2023/11/10 17:25:26 by elel-bah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	$(wildcard *.c)
OBJS			= 	$(patsubst %.c, %.o, $(SRCS))

CC				= gcc
RM				= rm -f
CFLAGS			= -c -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

%.o:			%.c
				$(CC) $(CFLAGS) $(SRCS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re