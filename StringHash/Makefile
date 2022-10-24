OBJ= main.o
OUT= test
CXX= g++
FLAGS= -Wall -std=c++11

all : $(OUT)

$(OUT):$(OBJ)
	$(CXX) $(FLAGS) -o $@ $^

%.o:%.cpp
	$(CXX) $(FLAGS) -c -o $@ $^


.PHONY:clean
clean:
	rm $(OUT)
	rm $(OBJ)