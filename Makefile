#/**
#* @file Makefile
#* @author Sam Emison + Cole Belew
#* @date 2024-11-06
#* @brief Makfile for Library Assignment
#* 
#* Cleans everything up and creates an executable
#*/
# Modified from last assignment

CC = g++ # The compiler
TARGET = test # Makes "test" the executable
CFLAGS = -c -Wall -Wextra -g # Compile with all errors and warnings

#Object Files
OBJS = main.o Library.o

all: $(TARGET)


# Links object files to create an executable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

#Compiles main.o from source
main.o: main.cpp Library.h
	$(CC) $(CFLAGS) main.cpp -o main.o

#Compiles Library.o from source
Library.o: Library.cpp Library.h
	$(CC) $(CFLAGS) Library.cpp -o Library.o

clean: #Cleans everything up
	rm -f *.o *~ $(TARGET)
