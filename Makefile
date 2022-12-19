SRCS	=	./src/*.c

TESTS	=	./tests/*.c

CC	=	gcc

.PHONY:	test
test:
	$(CC) $(SRCS) $(TESTS) -o test
	./test
	rm test
