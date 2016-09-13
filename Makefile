a.out: main.cpp datatypes.h actor.h pc.h modifier.h modification.h equipment.h
	/usr/local/Cellar/gcc/5.3.0/bin/g++-5 -std=c++11 main.cpp actor.o pc.o npc.o modification.o equipment.o -o a.out
objects:
	/usr/local/Cellar/gcc/5.3.0/bin/g++-5 -std=c++11 -c *.cpp
clean:
	\rm *.o
	\rm a.out
