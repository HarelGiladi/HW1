CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB_REC= NumClass.h basicClassification.o advancedClassificationRecursion.o
OBJECTS_LIB_LOOP= NumClass.h basicClassification.o advancedClassificationLoop.o
FLAGS= -g -Wall


all: libclassloops.so libcalssrec.so libcalssrec.a libcalssloops.a mains maindloop maindrec
#programs
mains:$(OBJECTS_MAIN)  libcalssrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libcalssrec.a -lm
maindloop:$(OBJECTS_MAIN) 
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so -lm
maindrec:$(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libcalssrec.so -lm

#libs
loopd: libcalssloops.so
libclassloops.so:$(OBJECTS_LIB_LOOP)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LIB_LOOP)
loops: libcalssloops.a
libcalssloops.a: $(OBJECTS_LIB_LOOP)
	$(AR) -rcs libcalssloops.a $(OBJECTS_LIB_LOOP)	
recursives: libcalssrec.a
libcalssrec.so: $(OBJECTS_LIB_REC)
	$(CC) -shared -o libcalssrec.so $(OBJECTS_LIB_REC) 
recursived: libcalssrec.so
libcalssrec.a: $(OBJECTS_LIB_REC)
	$(AR) -rcs libcalssrec.a $(OBJECTS_LIB_REC)

main.o: main.c NumClass.h  
	$(CC) $(FLAGS) -c main.c
basicClassification.o: NumClass.h basicClassification.c
	$(CC) $(FALGS) -c basicClassification.c
advancedClassificationLoop.o: NumClass.h advancedClassificationLoop.c
	$(CC) $(FLAGS) -c advancedClassificationLoop.c
advancedClassificationRecursion.o: NumClass.h advancedClassificationRecursion.c
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindrec maindloop