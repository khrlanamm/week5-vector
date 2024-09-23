# Target to compile the object file
reverseArray: reverseArray.o
	g++ reverseArray.o -o reverseArray.exe

# Target to compile the C++ program
reverseArray.o: reverseArray.cpp
	g++ -c reverseArray.cpp -o reverseArray.o

# Target to run the program (interactively)
run: reverseArray
	./reverseArray.exe

# Target to compile the object Test file
reverseArrayTest: reverseArrayTest.o
	g++ reverseArrayTest.o -o reverseArrayTest.exe

# Target to compile the C++ Test program
reverseArrayTest.o: reverseArrayTest.cpp
	g++ -c reverseArrayTest.cpp -o reverseArrayTest.o

# Target to run the Test program
test: reverseArrayTest
	./reverseArrayTest.exe

# Target to clean up compiled files
clean:
	rm -f reverseArray.o reverseArrayTest.o reverseArray.exe reverseArrayTest.exe
