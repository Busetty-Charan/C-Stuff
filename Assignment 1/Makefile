# -*- Makefile -*-

CC = clang
CXX = -Wall

all: p1 p2 p3 p4 optional_prob

clean:

	rm -f p1p1.exe p1p2.exe p1alt.exe p2.exe p3.exe p4.exe op.exe
	rm -f p1p1 p1p2 p1alt p2 p3 p4 op

p1: CSE\ ASS\ 1\ Prob\ 1\ -\ Part\ 1.c CSE\ ASS\ 1\ Prob\ 1\ -\ Part\ 2.c CSE\ ASS\ 1\ Prob\ 1\ -\ Alt.c

	$(CC) $(CXX) -o p1p1 "CSE ASS 1 Prob 1 - Part 1.c"
	$(CC) $(CXX) -o p1p2 "CSE ASS 1 Prob 1 - Part 2.c"
	$(CC) $(CXX) -o p1alt "CSE ASS 1 Prob 1 - Alt.c"

p2: CSE\ ASS\ 1\ Prob\ 2.c

	$(CC) $(CXX) -o $@ "$^"

p3: CSE\ ASS\ 1\ Prob\ 3.c

	$(CC) $(CXX) -o $@ "$^"

p4: CSE\ ASS\ 1\ Prob\ 4.c

	$(CC) $(CXX) -o $@ "$^"

optional_prob: CSE\ ASS\ 1\ Optional\ Prob.c

	$(CC) $(CXX) -o op "$^"
