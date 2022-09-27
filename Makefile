all: ordenacao.o busca.o main.o
	gcc ordenacao.o busca.o main.o -o main.bin -std=c99 -Wall

ordenacao.o:
	gcc -c ordenacao.c -o ordenacao.o

busca.o:
	gcc -c busca.c -o busca.o
	 
main.o:
	gcc -c main.c -o main.o
	 
clean:
	rm *.o main.bin

run:
	./main.bin