CC=g++
CFLAGS=

main: main.o max.o any-ticker.o typeset.o set_parameters.o file_manage.o
	$(CC) -o life main.o max.o any-ticker.o typeset.o set_parameters.o file_manage.o
run:
	$(CC) -o any-ticker any-ticker.c $(CFLAGS) && ./any-ticker
bk:
	git commit ; git push origin master
e:
	${EDITOR} any-ticker.c
show:
	open any-ticker.life -a Golly
clean:
	rm -f any-ticker; rm -f *.o; rm -f *.life; rm -f life

