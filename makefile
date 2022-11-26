all: arth huff

arth: FORCE

FORCE:
	gcc ./arth/Main.c ./arth/arth.c ./arth/bitstream.c -o ./arth/main.o

huff:
	gcc ./chuffman/huff_encode.c ./chuffman/huff_decode.c ./chuffman/main.c -o ./chuffman/main.o

crap:
	gcc ./crapwordgen.c -o crap.o -g
