# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jledesma <jledesma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/23 13:20:35 by jledesma          #+#    #+#              #
#    Updated: 2022/08/19 13:00:36 by jledesma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_PLUS	= libft.a

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_substr.c ft_strjoin.c  ft_strmapi.c ft_strtrim.c ft_itoa.c ft_split.c \
ft_striteri.c


BONUS = ft_lstnew_bonus.c	ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \
	get_next_line_bonus.c  get_next_line_utils_bonus.c   \
	ft_printf_base.c ft_printf_char.c ft_printf_hex.c ft_printf_int.c \
	ft_printf_nb.c ft_printf_str.c ft_printf.c
	
OBJS	=	${SRCS:.c=.o}

OBJS_BONUS	=	${BONUS:.c=.o}

CC	= gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

NORMI = norminette .

COLOR_DONE = \033[47m\033[1;32m

all : $(LIBFT_PLUS)

$(LIBFT_PLUS):
	@${NORMI} 
	@clear
	@echo "\n\n\n$(COLOR_DONE)>>> Norminette   Checked <<<"
	@echo "$(COLOR_DONE)>>> Libft           Done <<<"
	@echo "$(COLOR_DONE)>>> Get_Next_Line   Done <<<"
	@echo "$(COLOR_DONE)>>> Printf Done     Done <<<"
	@${CC} -c ${CFLAGS} ${SRCS} ${BONUS}

	
# Rule to remove all files and directory
clean: 
		@${RM} ${OBJS} ${OBJS_BONUS}
		@echo "\n\n\n$(COLOR_DONE)>>> Clean       Done <<<"
# Rule to remove
fclean:		clean
			@${RM} ${LIBFT_PLUS}
		@echo "$(COLOR_DONE)>>> Force     Clean  <<<"
# Bonus
bonus: ${OBJS} ${OBJS_BONUS}
	ar rs ${LIBFT_PLUS} ${OBJS} ${OBJS_BONUS}
	
# Rule to re-make all
re:	fclean all	
	@echo "$(COLOR_DONE)>>> Force        Re Make <<<"

# Rule for reserve this LIBFT_PLUSs and not exist files with this LIBFT_PLUSs
.PHONY: all, clean, fclean, re