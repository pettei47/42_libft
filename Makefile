# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: teppei <teppei@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/30 17:42:38 by tkitagaw          #+#    #+#              #
#    Updated: 2021/08/16 07:02:01 by teppei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
CFLGS	=	-Wall -Wextra -Werror -std=c99
LIBS	=	ar -rc
NAME	=	libft.a
SRCS	=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_strdigit.c \
			ft_ptrdigit.c \
			ft_isprint.c\
			ft_itoa.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c\
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c\
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strchrchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strcmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strfchr.c \
			ft_strchr_cnt.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_free_ptr.c \
			ft_putstr_color_fd.c \
			ft_putstrs_fd.c \
			ft_ptrdup.c \
			ft_swap_str.c \
			ft_bubble_sort_ascii.c \

BONUS	=	ft_lstsize.c \
			ft_lstnew.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstadd_front.c \
			ft_lstadd_back.c \
			ft_lstlast.c \
			ft_lstiter.c \
			ft_lstmap.c
OBJS	=	$(SRCS:.c=.o)
BOBJS	=	$(BONUS:.c=.o)

.c.o :
	$(CC) $(CFLGS) -c $< -o $@ -I libft.h

all : $(NAME)

$(NAME) : $(OBJS)
	$(LIBS) $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)
	rm -f $(BOBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

bonus : $(BOBJS) all
	$(LIBS) $(NAME) $(BOBJS)

.PHONY: all clean fclean re bonus
