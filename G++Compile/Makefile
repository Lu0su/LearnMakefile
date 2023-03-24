a:
	g++ -E main.cpp -o main.ii
	g++ -S main.ii > main.s
	g++ -c main.s > main.o
	g++ main.o -o main.out

clean:
	rm -f main.ii main.s main.o main.out