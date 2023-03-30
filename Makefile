# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 19:56:11 by fprosper          #+#    #+#              #
#    Updated: 2023/03/20 14:42:55 by fprosper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap
NAME2			= 	checker
MAIN			= 	./ft_push_swap/main.c
MAIN_CHECKER 	=	./ft_push_swap/checker/checker.c
LIBFT			=	./libft/libft.a
FT_PRINTF		=	./ft_printf/printf.a
CHECK			=	./ft_push_swap/check/check.a
OPERATIONS		=	./ft_push_swap/operations/operations.a
SORTING 		=	./ft_push_swap/sorting/sorting.a
GNL				=	./get_next_line/get_next_line.a
OBJS			= 	$(SRCS:.c=.o)
CC				= 	gcc
RM				= 	rm -f
CFLAGS			= 	-Wall -Wextra -Werror -I.

$(NAME):	$(OBJS)
			make -C ./libft
			make -C ./ft_printf
			make -C ./ft_push_swap/check
			make -C ./ft_push_swap/operations
			make -C ./ft_push_swap/sorting
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT) $(FT_PRINTF) $(CHECK) \
			$(OPERATIONS) $(SORTING) $(MAIN)

all:		$(NAME)
			make clean

clean:
			make clean -C libft
			make clean -C ft_printf
			make clean -C ./ft_push_swap/check
			make clean -C ./ft_push_swap/operations
			make clean -C ./ft_push_swap/sorting
			make clean -C ./get_next_line
			$(RM) $(OBJS)

fclean: 	clean
			make fclean -C ./libft
			make fclean -C ./ft_printf
			make fclean -C ./ft_push_swap/check
			make fclean -C ./ft_push_swap/operations
			make fclean -C ./ft_push_swap/sorting
			make fclean -C ./get_next_line
			$(RM) $(NAME) $(NAME2) $(OBJS)

bonus:		
			make -C ./get_next_line
			$(CC) $(CFLAGS) -o $(NAME2) $(MAIN_CHECKER) $(OBJS) $(CHECK) \
			$(LIBFT) $(OPERATIONS) $(SORTING) $(FT_PRINTF) $(GNL)

re:			fclean $(NAME) bonus

.PHONY:		all clean fclean re bonus
