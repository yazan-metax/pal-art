DEF_COLOR = \033[0;39m
GREEN = \033[0;92m
YELLOW = \033[0;93m
MAGENTA = \033[0;95m
CYAN = \033[0;96m

NAME := tatriz
CC := gcc
CFLAGS := -g -O3 -Wall -Werror -Wextra
RM = rm -f
OBJ_DIR		:= build/
MINILIBX_DIR = minilibx
MINILIBX_CC := -lm -lmlx -L $(MINILIBX_DIR)
MINILIBX := minilibx/libmlx.a
OPENGL := -framework OpenGL -framework AppKit

SRC := tatriz.c utils.c
OBJ := $(SRC:.c=.o)


all : makelib
	@$(MAKE) $(NAME)

makelib : 
	@$(MAKE) -C $(MINILIBX_DIR)
	@echo "$(GREEN)Minilibx compiled!$(DEF_COLOR)"

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(MINILIBXCC) $(MINILIBX) $(OPENGL) -o $(NAME)
	@echo "$(MAGENTA)✨ FDF compiled!$(DEF_COLOR)"

clean :
	@make clean -C $(MINILIBX_DIR)
	@echo "$(CYAN)Minilibx object files cleaned.$(DEF_COLOR)"	
	$(RM) -rf $(OBJ)
	@echo "$(CYAN)Fdf object files cleaned!$(DEF_COLOR)"
fclean : clean
	$(RM) $(NAME)
	@echo "$(CYAN)Fdf executable files cleaned!$(DEF_COLOR)"
	$(RM) -f $(MINILIBX_DIR)libmlx.a
	@echo "$(CYAN)libmlx.a lib cleaned!$(DEF_COLOR)"