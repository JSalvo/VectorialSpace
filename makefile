prova : main.o vector.o
	g++ -o build/prova build/main.o build/vector.o

main.o : main.cpp Vector/vector.h
	g++ -c main.cpp -o build/main.o

vector.o : Vector/vector.cpp Vector/vector.h
	g++ -c Vector/vector.cpp -o build/vector.o

clean :
	rm build/prova build/main.o build/vector.o
