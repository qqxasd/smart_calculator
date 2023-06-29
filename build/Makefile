LFLAGS = -lm -lpthread -lcheck
CFLAGS = -std=c11
COV = --coverage

all: install

install: uninstall 
	mkdir build_files 
	cd build_files && cmake ../../src/calc/CMakeLists.txt
	cd build_files && make
	mv build_files/calc.app .

uninstall:
	rm -rf calc.app
	rm -rf build_files

clean:
	rm -rf *.dvi *.tar *.o test *.gcda *.gcno report *.info

dist: clean uninstall install
	mkdir dist.tar
	cp -r build_files/* dist.tr
	gzip -r dist.tar

debug: uninstall clean
	gcc -ggdb -c ../src/calc/polish/*.c -lm
	gcc -ggdb -c ../src/tmp.c
	gcc -ggdb *.o -o ../src/a -lm

test: uninstall clean
	gcc $(COV) $(CFLAGS) -c -coverage ../src/calc/polish/*.c $(LFLAGS)
	gcc $(CFLAGS) -c -coverage ../src/tests/calc_tests.c $(LFLAGS)
	gcc $(COV) $(CFLAGS) *.o -o test -lcheck -lm $(LFLAGS)
	./test

gcov_report: clean uninstall test
	./test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html

help:
	echo Targets that makefile provides are: 

	# install: make the app and install it into build directory.

	# uninstall: deletes the app and build_files

	# clean: deletes tar and .gcda .gcno files that used for gcov_report

	# dist: makes the dist dir with archived obj files

	# debug: builds C functions into tmp.c file that must be created manually with the func you want to debug

	# test: tests the C functions using check.h v 0.15.2

	# gcov_report: tests the C functions and make report/index.html with the info about code coverage 