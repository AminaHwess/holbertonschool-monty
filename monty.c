#include "monty.h"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		error(1);
	}
	open_file(argv[1]);
	exit(EXIT_SUCCESS);
}
