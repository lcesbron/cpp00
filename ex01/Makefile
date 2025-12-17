NAME	=		phonebook

#		UTILS

CXX			=		c++
CXXFLAGS	=		-Wall -Wextra -Werror -std=c++98
CPPFLAGS	=		$(addprefix -I, $(INCLUDE_DIR)) -MD -MP -MF

RM			=		rm -rf

#		FILES

BUILD_DIR	=		.build/
SRC_DIR		=		src/
INCLUDE_DIR	=		include/
OBJ_DIR		=		$(addprefix $(BUILD_DIR), obj/)

#		SRC

BASENAME	=		PhoneBook Contact main

SRC			=		$(addprefix $(SRC_DIR), $(addsuffix .cpp, $(BASENAME)))
OBJ			=		$(addprefix $(OBJ_DIR), $(addsuffix .o, $(BASENAME)))

#		RULES

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CPPFLAGS) $(@D)$(@F).d $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(BUILD_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
