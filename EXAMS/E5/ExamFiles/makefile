PROGRAM = ReverseEngineer
FILES = main.cpp Filter.cpp FileReader.cpp helper.cpp

all: run
run: zip
zip: build
build: clean

run:
	./$(PROGRAM).o

zip:
	rm -f $(PROGRAM).zip
	zip $(PROGRAM).zip *.cpp *.h *.txt makefile

build:
	g++ $(FILES) -o $(PROGRAM).o

clean:
	rm -f ReverseEngineer.zip
	rm -f *.o
