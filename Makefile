run:
	@g++ -std=c++17 -Wall -Wshadow -I ./raylib-5.0_linux_amd64/include main.cpp -o main ./raylib-5.0_linux_amd64/lib/libraylib.so
	@./main
