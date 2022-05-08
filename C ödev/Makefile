hepsi: derle calistir

derle:
	gcc -I ./include/ -o ./lib/Kisi.o -c ./src/Kisi.c
	gcc -I ./include/ -o ./lib/Oyun.o -c ./src/Oyun.c
	gcc -I ./include/ -o ./lib/Dosya.o -c ./src/Dosya.c
	gcc -I ./include/ -o ./lib/split.o -c ./src/split.c
	gcc -I ./include/ -o ./bin/Test ./lib/Kisi.o ./lib/Oyun.o ./lib/Dosya.o ./lib/split.o ./src/Test.c
calistir:
	./bin/Test