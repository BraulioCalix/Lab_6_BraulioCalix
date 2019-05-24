Main.out: Main.o Chasis.o Pintura.o Motor.o Carro.o
	g++ Main.o Chasis.o Pintura.o Motor.o Carro.o -o Main.out 
	./Main.out
Main.o: Main.cpp Carro.h Chasis.h Pintura.h Motor.h 
	g++ -c Main.cpp
Chasis.o: Chasis.h Chasis.cpp
	g++ -c Chasis.cpp
Pintura.o: Pintura.h Pintura.cpp
	g++ -c Pintura.cpp
Motor.o: Motor.h Motor.cpp
	g++ -c Motor.cpp
Carro.o: Carro.h Carro.cpp Motor.h Motor.cpp Pintura.h Pintura.cpp Chasis.h Chasis.cpp
	g++ -c Carro.cpp
