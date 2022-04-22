SRCS	=	functions.c	ft_putnbr_fd.c
OBJS	=	$(SRCS:.c=.o)

%.o : %.c
		gcc -c $< -o $@

all: program_1 program_2 program_3 program_4

program_1:	$(OBJS) main-1.o
		gcc $(OBJS) main-1.c -o program_1

program_2:	$(OBJS) main-2.o
		gcc $(OBJS) main-2.c -o program_2

program_3:	$(OBJS) main-3.o
		gcc $(OBJS) main-3.c -o program_3

program_4:	$(OBJS) main-4.o
		gcc $(OBJS) main-4.c -o program_4

clean:
		rm -f program_1 program_2 program_3 program_4 *.o 
