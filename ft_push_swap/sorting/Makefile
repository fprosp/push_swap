# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 08:57:25 by fprosper          #+#    #+#              #
#    Updated: 2023/01/16 12:51:16 by fprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=		order_ops.c get_lis.c get_val.c mem_supply.c push_back.c find_mvs.c\
				get_tot_mvs.c single_exe.c double_exe.c sort_short.c

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= sorting.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rc $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re	