#include <stdio.h>
#include <stdlib.h>
#include "../header/unwrap.h"
#include "../header/fonctions_graphe.h"
#include "../header/Dijkstra.h"


#include <string.h>
// #include <pthread.h>
#include <assert.h>


#include "../header/macro.h"

#include "../header/search.h"

int main(void)
{

    graphe_struct_Louis graphe_Louis= faire_graphe_Louis(cache_fiche, auteur_cache, Article_cache);

    graphe_struct_Orfeu graphe_Orfeu= faire_graphe_ptr_auteur(graphe_Louis);

    char* nom_auteur= "Abdelouahed Hamdi";

}
