OBJS	= main.o encrypt.o decrypt.o
SOURCE	= main.cpp encrypt.cpp decrypt.cpp
HEADER	= encrypt.h decrypt.h
OUT	= 
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp 

encrypt.o: encrypt.cpp
	$(CC) $(FLAGS) encrypt.cpp 

decrypt.o: decrypt.cpp
	$(CC) $(FLAGS) decrypt.cpp 


clean:
	rm -f $(OBJS) $(OUT)
