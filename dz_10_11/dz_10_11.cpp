#include "human.h"


int main() {

	Student a("Bob", "secondBob", "midBob", 123, 1);
	Boss Bob("Bob", "secondBob", "midBob", 123, 12345);
	a.print();
	Bob.print();


	Parrot dd(1, "red");
	Cat Bersik(20, "yellow");
	dd.voice();
	Bersik.voice();
	return 0;
}