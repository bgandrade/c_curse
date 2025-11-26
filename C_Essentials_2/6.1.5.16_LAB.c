#include <stdio.h>

struct person {
	char firstName[20];
	char lastName[20];
};

int main(void) {

	struct person a = {"Mary", "Smith"};
	struct person b = {"James", "Johnson"};
	struct person c = {"Patricia", "Williams"};
	struct person d = {"John", "Brown"};

	// Print the names
	printf("%s %s\n", a.firstName, a.lastName);
	printf("%s %s\n", b.firstName, b.lastName);
	printf("%s %s\n", c.firstName, c.lastName);
	printf("%s %s\n", d.firstName, d.lastName);

	return 0;
}