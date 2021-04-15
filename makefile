###########################################################
DIRSRC	= ./src/
###########################################################
COMP 	= g++
CFLAGS 	= -O3 -std=c++11
CC 	= $(COMP) $(CFLAGS) -c
CO	= $(COMP) $(CFLAGS) -o
###########################################################
HelloWorld.exe: HelloWorld.o
	$(CO) HelloWorld.exe HelloWorld.o
###########################################################
HelloWorld.o: $(DIRSRC)HelloWorld.cpp
	$(CC) $(DIRSRC)HelloWorld.cpp -I$(DIRSRC)
###########################################################
clean:
	rm -f *~
	rm -f *.o
	rm -f *.exe
	rm -f *.out
