NAME	=	algo

SRCS	=	main.cpp

CPP		=	c++
CPPFLAG	=	-std=c++17
RM		=	rm -f
CP		=	cp tmp/main.cpp .
MKDIR	=	mkdir $(D)
MV		=	mv main.cpp $(D)

all		:
			@$(CPP) $(CPPFLAG) $(SRCS) -o $(NAME)

fclean	:
			@$(RM) $(NAME)

test	:
			@$(MAKE) all
			@./$(NAME)
			@$(MAKE) fclean

re		:
			@$(MAKE) fclean
			@$(MAKE) all

new		:
			@$(CP)
			@$(MKDIR)

go		:
			@$(MV)

.PHONY: all fclean re test new go
