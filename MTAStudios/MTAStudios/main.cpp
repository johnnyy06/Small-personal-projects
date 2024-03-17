#include "MTAStudios.h"
#include "Scenarist.h"
#include "Regizor.h"
#include "Director.h"


int main() {

	std::vector <int> firNarativ = { 5, 8, 6, 7, 4, 1, 2, 3 };

	std::vector <std::string> elementeNaturale = {"copaci", "iarba", "flori"};
	std::vector <std::string> momentulZilei = { "dimineata", "amiaza", "seara" };
	std::vector <std::string> stareaVremii = { "soare", "ploaie", "ninsoare" };

	Actor actor_1("Bob", "principal", 5.2);
	Actor actor_2("Bob", "figurant", 2.2);
	Actor actor_3("Bob", "figurant", 3.8);
	Actor actor_4("Bob", "principal", 7.1);
	Actor actor_5("Bob", "figurant", 9.4);

	std::vector <Actor> listaActori{ actor_1, actor_2, actor_3, actor_4, actor_5 };

	Scenarist scenarist("poveste.txt", "Andrei", 12335);
	scenarist.doJob();

	Producator producator("Mircea", 765436);

	Regizor regizor(scenarist.getScenariu(), listaActori, "Marian", 32325);
	regizor.adaugaCadruSpecific(elementeNaturale, stareaVremii, momentulZilei);
	regizor.doJob();
	regizor.solicitaEfecteSpeciale(producator);
	

	Director director(regizor.getScenariu(), firNarativ, "Claudiu", 65127);
	director.doJob();


	std::cout << "\n----------------------------------------------------------\n";
	return 0;
}