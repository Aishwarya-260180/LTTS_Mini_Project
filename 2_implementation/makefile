# Name of the project
PROJECT_NAME = Conversion
set path=%path:git\bin=;%
set path=%path:mingw64\bin=;%
set path=%path:usr\bin=;%
# Output directory
BUILD = build

# All source code files
SRC= main.c\
    src/binaryToDecimal.c\
	src/binaryToOctal.c\
	src/decimalToBinary.c\
	src/decimalToOctal.c\
	src/octaltobinary.c\
	src/octalToDecimal.c\


TEST_SRC = src/binaryToDecimal.c\
	src/binaryToOctal.c\
	src/decimalToBinary.c\
	src/decimalToOctal.c\
	src/octaltobinary.c\
	src/octalToDecimal.c\
	test/temp.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= inc/header1.h\

INC1	= -Iinc\
-Iunity\

#TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# Project Output name
PROJECT_OUTPUT= $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

#INCLUDE_LIBS = -lcunit

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
doc:
	make -C ./documentation

test:$(BUILD)
	gcc $(TEST_SRC) $(INC1) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

analyze: test memcheck staticcheck coverage sanitize_check

staticcheck:
	cppcheck --enable=all -iunity .

memcheck:
	valgrind ./$(TEST_OUTPUT)

sanitize_check:
	gcc -fsanitize=address -fno-omit-frame-pointer $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

coverage:$(TEST_SRC)
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)
	gcov -a binaryToDecimal.c\
	binaryToOctal.c\
	decimalToBinary.c\
	decimalToOctal.c\
	octaltobinary.c\
	octalToDecimal.c\

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT) *.gcda *.gcno *.gcov





# Create new build folder if not present
$(BUILD):
	mkdir build