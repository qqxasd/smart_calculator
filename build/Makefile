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
	rm -rf build_files *.dvi *.tar

dvi:

dist:

test:
	gcc -ggdb 
