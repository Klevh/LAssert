#!/bin/makefile

EXEC=a.out
CLEAN=*.o *~
PWD=$(shell pwd)
LIB_PATH=$(PWD)/../..
LIB=$(LIB_PATH)/libLAssert_alloc.so
LDFLAGS=-g -ldl -Wl,-rpath,$(LIB_PATH) -L$(LIB_PATH) -lLAssert_alloc
CFLAGS=-DLASSERT_CUSTOM_ALLOC -Wall -Wextra -pedantic

CC?=gcc



all: clean $(EXEC)

$(EXEC):main.o sub.o
	$(CC) $^ -o $@ $(LDFLAGS)

%.o:%.c
	$(CC) -o $@ -c $< $(CFLAGS)


clean:
	rm -f $(CLEAN)
clear: clean
cleaner:
	rm $(EXEC) $(CLEAN)
