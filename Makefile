CC = clang
CFLAGS= -Wall -Weverything -Wno-gnu-zero-variadic-macro-arguments

all: bin/logtest bin/dlogtest

bin/logtest: test.c wlog.h bin
	$(CC) $(CFLAGS) -o bin/logtest test.c
	
bin/dlogtest: test.c wlog.h bin
	$(CC) $(CFLAGS) -D DEBUG -o bin/dlogtest test.c

test: bin/logtest bin/dlogtest
	./bin/logtest;
	./bin/dlogtest;

bin:
	mkdir bin

.PHONY: clean

clean:
	rm -r bin
