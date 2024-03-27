
 MAIN_FILE = main.c
 obj_FILES = main.o mymath.o
 CC = gcc

run: link
	a.exe
compile:
	@echo Compilation start....
	@echo Run sum application
	${CC} -c ${MAIN_FILE}
	${CC} -c mymath.c
	${CC} -E main.c > main.i
	${CC} -E mymath.c > mymath.i
link: compile
	${CC} ${obj_FILES}