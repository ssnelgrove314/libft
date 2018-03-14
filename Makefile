NAME := libft.a

AR		:= ar

CC 		:= gcc

CFLAGS	:= -Wall -Wextra -Werror -I.

SOURCE_DIR := .

FILES	+= ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove \
		ft_memchr ft_memcmp ft_strlen ft_strdup ft_strcpy \
		ft_strncpy ft_strcat ft_strncat ft_strlcat ft_strchr \
		ft_strrchr ft_strstr ft_strnstr ft_strcmp ft_strncmp \
		ft_atoi ft_isalpha ft_isdigit ft_isalnum ft_isascii \
		ft_isprint ft_toupper ft_tolower ft_memalloc ft_memdel \
		ft_strnew ft_strdel ft_strclr \
		ft_striter ft_striteri ft_strmap ft_strmapi ft_strequ \
		ft_strnequ ft_strsub ft_strjoin ft_strtrim ft_strsplit \
		ft_itoa ft_putchar ft_putstr ft_putendl ft_putnbr \
		ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
		ft_lstnew ft_lstdelone ft_lstdel ft_lstadd ft_lstiter \
		ft_lstmap ft_isspace ft_numlen ft_numlen ft_isspace \
		ft_gcd ft_iscntrl ft_isxdigit ft_sqrt

FILES_BIN := $(addsuffix .o,$(FILES))

BIN_DIR := .
OBJ := $(addprefix $(BIN_DIR)/,$(FILES_BIN))

INC := .

$(BIN_DIR)/%.o: $(SOURCE_DIR)/%.c
	@$(CC) $(CFLAGS) -I $(INC) -c $^ -o $@
	@/bin/echo "$^: CHECK"

.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\nObject Files: CHECK!"
	@ar rc $@ $(OBJ)
	@ranlib $@
	@echo "\nLibrary $(NAME): CHECK!\n"

$(OBJ): | $(BIN_DIR)

# $(BIN_DIR):
#	@mkdir -p $(BIN_DIR)

clean:
	@rm -rf $(OBJ)
	@echo "Cybermen say: DELETE DELETE DELETE DELETE DELETE\n"

fclean: clean
	@rm -rf $(NAME)
	@echo "Resistance is futile: $(NAME) has been assimilated\n"

re: fclean all

