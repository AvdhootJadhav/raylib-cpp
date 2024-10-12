run:
	@export LD_LIBRARY_PATH=./raylib-5.0_linux_amd64/lib && clang++ -std=c++17 -Wall -Wshadow -I./raylib-5.0_linux_amd64/include main.cpp -L./raylib-5.0_linux_amd64/lib/ -lraylib -o main && ./main
