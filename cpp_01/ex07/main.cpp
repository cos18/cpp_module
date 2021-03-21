#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int ft_strlen(char *str) {
	return (*str ? (1 + ft_strlen(str + 1)) : 0);
}

int ft_sed(char **argv) {
	std::ifstream input_stream(argv[1]);
	std::string output_name(argv[1]);
	std::ofstream output_stream;
	std::string line;

	if (!input_stream.is_open()){
		std::cout << "[ERR] Cannot read filename \"" << argv[1] << "\"\n";
		return 1;
	}
	output_name += ".replace";
	output_stream.open(output_name);
	if (!output_stream.is_open()){
		std::cout << "[ERR] Cannot write filename \"" << output_name << "\"\n";
		return 1;
	}
	while (std::getline(input_stream, line)) {
		for (int i = 0; i < (int)(line.length()); i++) {
			int same_len = 0;
			int j = i;
			while (argv[2][same_len] && j < (int)(line.length()) && line[j] == argv[2][same_len]) {
				same_len++;
				j++;
			}
			if (same_len == ft_strlen(argv[2])) {
				output_stream << argv[3];
				i = j - 1;
			} else
				output_stream << line[i];
		}
		if (!input_stream.eof())
			output_stream << "\n";
	}
	input_stream.close();
	output_stream.close();
	return 0;
}

int	main(int argc, char **argv) {
	if (argc != 4 || ft_strlen(argv[2]) == 0 || ft_strlen(argv[3]) == 0) {
		std::cout << "[ERR] Wrong arguments!\n";
		return 1;
	}
	if (ft_sed(argv))
		return 1;
}
