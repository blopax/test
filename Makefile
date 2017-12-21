# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile_libftprintf.a                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pclement <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/20 16:13:50 by pclement          #+#    #+#              #
#    Updated: 2017/12/21 18:51:19 by pclement         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf
FLAGS = -Wall -Wextra -Werror -c
SRC = libft/ftstrcat.c libft/ftstrchr.c libft/ftstrcpy.c libft/ftstrncpy.c libft/ftstrdup.c libft/ftstrlen.c\
	  libft/ftstrncat.c libft/ftstrlcat.c libft/ftstrrchr.c libft/ftstrstr.c libft/ftstrnstr.c \
	  libft/ftstrcmp.c libft/ftstrncmp.c libft/ftatoi.c libft/ftisalpha.c libft/ftisdigit.c libft/ftisalnum.c\
	  libft/ftisascii.c libft/ftisprint.c libft/fttoupper.c libft/fttolower.c libft/ftmemset.c\
	  libft/ftbzero.c libft/ftmemcpy.c libft/ftmemccpy.c libft/ftmemmove.c libft/ftmemchr.c libft/ftmemcmp.c\
	  libft/ftmemalloc.c libft/ftmemdel.c libft/ftstrnew.c libft/ftstrdel.c libft/ftstrclr.c\
	  libft/ftstriter.c libft/ftstriteri.c libft/ftstrmap.c libft/ftstrmapi.c libft/ftstrequ.c\
	  libft/ftstrnequ.c libft/ftstrsub.c libft/ftstrjoin.c libft/ftstrtrim.c libft/ftstrsplit.c\
	  libft/ftitoa.c libft/ftputchar.c libft/ftputstr.c libft/ftputendl.c libft/ftputnbr.c\
	  libft/ftputnbr_intmax.c\
	  libft/ftputchar_fd.c libft/ftputstr_fd.c libft/ftputendl_fd.c libft/ftputnbr_fd.c libft/ftlstnew.c\
	  libft/ftlstadd.c libft/ftlstdelone.c libft/ftlstdel.c libft/ftlstiter.c libft/ftlstmap.c \
	  libft/ftcount_if.c\
	  ft_accuracy_treatment.c ft_str_pos_ins.c ft_conv_if.c\
	  ft_conv_if_utilities.c ft_format_split_utilities.c\
	  ft_debug_show.c\
	  ft_format_split.c ft_lst_utilities.c\
	  ft_printf.c ft_varg.c ft_printf_itoa_base.c ft_conv_treatment.c\
	  ft_get_clean_flag_mofo.c ft_display.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC) $(OBJ)
	ar rc $(NAME).a $(OBJ)
	ranlib $(NAME).a

$(%.o):
	gcc $(FLAGS) %.c
	gcc $(FLAGS) libft/%.c

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
