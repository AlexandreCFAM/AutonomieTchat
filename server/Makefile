CC=g++
CFLAGS=
LDFLAGS=
EXEC=server

all: clean $(EXEC) run

server: main.o log.o network.o functions.o
	$(CC) -o main main.o log.o network.o functions.o $(LDFLAGS)

main.o: main.cpp
	$(CC) -o main.o -c main.cpp $(CFLAGS)
log.o: log.cpp
	$(CC) -o log.o -c log.cpp $(CFLAGS)
network.o: network.cpp
	$(CC) -o network.o -c network.cpp $(CFLAGS)
functions.o: functions.cpp
	$(CC) -o functions.o -c functions.cpp $(CFLAGS)
clean:
	rm -Rf *.o
run:
	mv *.o build/
	mv main build/
	./build/main