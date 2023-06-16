all: install

install: uninstall 
	mkdir build_files 
	cd build_files && cmake ../../src/calc/CMakeLists.txt
	cd build_files && make
	mv build_files/calc.app .

a: uninstall clean

uninstall:
	rm -rf calc.app
	rm -rf build_files

clean:
	rm -rf build_files *.dvi *.tar *.o test 

dvi:

dist:

debug: a
	gcc -ggdb -c ../src/polish/*.c -lm
	gcc -ggdb -c ../src/tmp.c
	gcc -ggdb *.o -o ../src/a -lm

test: a
	gcc -ggdb -c ../src/polish/*.c -lm
	gcc -ggdb -c ../src/tests/calc_tests.c -lcheck
	gcc *.o -o test -lcheck -lm
	./test