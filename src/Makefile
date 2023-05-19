NAME 	= 	deps.a

OBJ_DIR	= ./obj/

SRC 	= 	get_next_line/get_next_line.c get_next_line/get_next_line_utils.c dep.c 

OBJS 	= 	$(addprefix $(OBJ_DIR), $(SRC:.c=.o))

DEPS	= $(addsuffix .d, $(basename $(OBJS)))
RM 		=	rm -f

MK = mkdir -p

CFLAGS 	=  -m32


INCLUDE 	= -I ./

$(OBJ_DIR)%.o: %.c Makefile
	@echo "Compilando $<"
	@$(MK) $(dir $@)
	@$(CC) $(CFLAGS) -MMD $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Montando $@"
	@ar rcs $(NAME) $(OBJS)

-include $(DEPS)

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
