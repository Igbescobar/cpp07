CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Target executable
TARGET = test_iter

# Source files
SRCS = main.cpp
HEADERS = Iter.hpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default rule
all: $(TARGET)

# Compile executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile source files to object files
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean object files and executable
clean:
	rm -f $(OBJS) $(TARGET)

# Rebuild everything
fclean: clean

re: fclean all

.PHONY: all clean fclean re
