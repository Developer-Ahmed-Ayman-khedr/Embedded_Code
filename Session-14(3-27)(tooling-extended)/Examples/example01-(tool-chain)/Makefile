
 MAIN_FILE = main.c
 LIB_FILE = mymath.c
 obj_FILES = main.o mymath.o
 CC = gcc

run: link
	a.exe
compile:
	@echo Compilation start....
	@echo Run sum application
	${CC} -c ${MAIN_FILE}
	${CC} -c ${LIB_FILE}
	${CC} -E ${MAIN_FILE} > main.i
	${CC} -E ${LIB_FILE} > mymath.i
link: compile
	${CC} ${obj_FILES}