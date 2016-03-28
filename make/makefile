objects = main.o first.o second.o
    
main : $(objects)
	gcc -o main $(objects)
	
main.o: main.c main.h first.o second.o
	gcc -c main.c

first.o: first.c first.h
	gcc -c first.c
    
second.o: second.c second.h
	gcc -c second.c 

clean:
	-rm main main.o first.o second.o