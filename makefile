all: sort.c functions.c test.c
	gcc -o sort sort.c functions.c -I .
	
run: ./sort

clean: 
	rm -f sort
	rm -f t
	   
test: test.c functions.c
	gcc -o t test.c functions.c -I .
	./t
	rm -f t