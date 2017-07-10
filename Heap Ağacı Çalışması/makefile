hepsi: derle calistir
derle:
	g++ -I ./include/ -o ./lib/Sayi.o -c ./src/Sayi.cpp
	g++ -I ./include/ -o ./lib/HeapAgac.o -c ./src/HeapAgac.cpp
	g++ -I ./include/ -o ./lib/Islem.o -c ./src/Islem.cpp
	
	g++ -I ./include/ -o ./bin/Source ./lib/Sayi.o ./lib/HeapAgac.o ./lib/Islem.o ./src/Source.cpp
	
calistir:
	./bin/Source
