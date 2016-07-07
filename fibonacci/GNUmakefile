#Ejemplo de automatizacion de compilacion de un programa c++ usando makefile

CC = g++

TARGET = fibo

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) -o $(TARGET) $(TARGET).cpp

clear:
	$(RM) $(TARGET)
