compile: main.cpp 
	 g++ main.cpp -o student

run: student
	 ./student

clean: student
	 rm student
