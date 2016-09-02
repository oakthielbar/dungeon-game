a.out: main.cpp datatypes.h actor.h pc.h modifiers.h modification.h equipment.h
	/usr/local/Cellar/gcc/5.3.0/bin/g++-5 main.cpp actor.o pc.o npc.o modifiers.o modification.o equipment.o -o a.out
objects:
	/usr/local/Cellar/gcc/5.3.0/bin/g++-5 -std=c++1z -c *.cpp
clean:
	\rm *.o
