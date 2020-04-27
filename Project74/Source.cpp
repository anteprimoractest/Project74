#include<stdio.h>
#include<stdlib.h>

void zamijeni(int &a, int &b) {
	printf("Funkcija zamijeni() -> Vrijednosti varijabli prije zamjene\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	int pom = a;
	a = b;
	b = pom;

	printf("Funkcija zamijeni() -> Vrijednosti varijabli nakon zamjene\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}

void main() {
	int a = 5, b = 1;
	printf("Funkcija main() -> Vrijednosti varijabli prije zamjene\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	zamijeni(a, b);

	printf("Funkcija main() -> Vrijednosti varijabli nakon zamjene\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	system("pause");
}

