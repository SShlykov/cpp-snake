build:
	@g++ -std=c++11 main.cpp snake.cpp input.cpp snake_map.cpp -o game -lpthread

run:
	./game