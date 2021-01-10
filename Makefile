Client	: Items.o Spells.o LivingBeing.o Hero.o Monster.o Client.cpp
	g++  Items.o Spells.o LivingBeing.o Hero.o Monster.o -o Client Client.cpp
	./Client

Hero.o : Hero.cpp
	g++ -c Hero.cpp

Monster.o : Monster.cpp
	g++ -c Monster.cpp

LivingBeing.o : LivingBeing.cpp
	g++ -c LivingBeing.cpp

Spells.o	:	Spells.cpp
	g++ -c Spells.cpp

Items.o	:	Items.cpp
	g++ -c Items.cpp

clean	:
	rm Client Items.o Spells.o LivingBeing.o Monster.o Hero.o