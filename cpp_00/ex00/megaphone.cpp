#include <iostream>
#include <ctype.h>

int			main(int argc, char **argv) {
	char	c;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	for (int i = 1; i < argc; i++) {
		for (int j = 0; argv[i][j] != '\0'; j++) {
			c = argv[i][j];
			std::cout << (char)(toupper(c));
		}
	}
	std::cout << "\n";
}