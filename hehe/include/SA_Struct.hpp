
#pragma once

#include <vector>
#include <sstream>
#include <map>
#include <string>
#include <iostream>
#include <algorithm>
#include <cstdlib> // Pour rand() et srand()
#include <ctime>   // Pour time()

#include "joueur.hpp"
#include "zone.hpp"

class joueur;
class zone;
class chemin_menace;

typedef struct s_data
{
	int nb_joueur;
	std::map<int, joueur*> joueurs;
	std::map<int, zone*> zones;
	int tour;
	chemin_menace *chemin_menace_interne;
} t_data;

void wr(std::string str);
std::string generateRandomString(int length);


