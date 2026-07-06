CC=gcc

all:
	$(CC) main.c student.c file.c utils.c -o sms

clean:
	rm -f sms
