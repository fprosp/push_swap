# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/27 20:18:22 by fprosper          #+#    #+#              #
#    Updated: 2023/01/16 12:50:52 by fprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= get_next_line.a

SRCS			= get_next_line.c get_next_line_utils.c

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

OBJS			= $(SRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rc $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re