#include <iostream>
#include <array>
#include <vector>
#include <cmath>

// using namespace std;

int Premier(long int nombre)
{
	long int i;
	for(i=2;i<=(long long int)sqrt(nombre);i++)
	{
		if(nombre%i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int Addition_Digit(long int n)
{
	long int somme = 0;
	while( n > 0)
	{
		somme += n%10;
		n = n/10;
	}
	return somme;
}




// vector<int> Fusion(vector<int> tableau1, vector<int> tableau2)
// {
	// for(int i : tableau2)
	// {
		// tableau1.push_back(i);
	// }
	// return tableau1;
// }

// auto tri_3(auto begin,auto end)
// {
	
	// if(++begin == end)
	// {
		// vector <int> tableau1{};
		// tableau1.push_back(*begin);
		// return tableau1;
	// }
	
	// cout << "Bonjourno"<< endl;
	// auto pivot = *begin;
	// auto bf_pivot = begin;
	
	
	// for(auto parcours = ++begin; parcours != end; parcours++)
	// {
		// if( *parcours < pivot) 
		// {		
			// auto x = *parcours;
			// *parcours = *bf_pivot;
			// *bf_pivot = x;

			// bf_pivot++;
		// }
	// }
	
	// return Fusion(tri_3(begin,--bf_pivot),tri_3(bf_pivot,end));
// }







// vector<long long int> liste_premier(long long int nombre)
// {
	// long long int i;
	// vector<long long int> tableau_diviseurs{};
	// for(i=2;i<=(long long int)sqrt(nombre);i++)
	// {
		// if(diviseur_premier(i) && (nombre%i == 0))
		// {
			// tableau_diviseurs.push_back(i);
		// }
	// }
	// return tableau_diviseurs;
// }





// void tri_rapide(vector<int> &tableau)
// {
	// int pivot_indice;
	// int indice_parcours;
	// size_t taille = tableau.size();
	// for(pivot_indice = 0; (size_t)pivot_indice < taille; pivot_indice++)
	// {
		// for(indice_parcours = 0;(size_t) indice_parcours < taille
			// ;indice_parcours++)
		// {
			// if(tableau[pivot_indice] < tableau[indice_parcours])
			// {
				// int x = tableau[pivot_indice];
				// tableau[pivot_indice] = tableau[indice_parcours];
				// tableau[indice_parcours] = x;
			// }
		// }
	// }
// }

// vector<int> tri_3(vector<int> &tableau_debut,vector<int> &tableau_fin)
// {
	// vector<int> vide{};
	// if(tableau_debut == tableau_fin)
	// {
		// return tableau_debut;
	// }
	// else
	// {
		// int j;
		// size_t taille = tableau_debut.size();
		// for(int j = 0;j < (int)taille;j++)
		// {
			// if (tableau[0]<tableau[j])
			// {
				// int x = tableau[j];
				// tableau[j] = tableau[0];
				// tableau[0] = x;
				// return tri_3(tableau.begin(),tableau.end());
			// }
		// }
		// return vide.insert(vide.end(),tableau_debut,return tri_3(++tableau.begin(),tableau.end());
	// }
// }

int Fonction_exo(int n)
{
	if (n==0)
	{
		return n;
	}
	return (2*Fonction_exo(n-1)+((int)pow(n,2)));
}

int main()
{
    // vector<int> tableau{18,15,4,21,12,42,58,13,45,67,21,1};
	// tableau = tri_3(tableau.begin(),tableau.end());
	// cout << *(tableau.begin()) <<*(tableau.end());
	// tri_rapide(tableau);
	// vector <long long int> tableau = liste_premier(61316919);
	// cout<< "Premier : ";
	
	// for(int i : tableau)
	// {
		// cout << i <<' ';
	// }
	// tableau = liste_premier(5659186176);
	// cout << "Deuxieme : ";
	// for(int i : tableau)
	// {
		// cout << i <<' ';
	// }
	// cout << *(++tableau.begin()) <<' ' << *tableau.begin() << endl;
	
	int borne1,borne2,i;
	std::cin >> borne1 >> borne2;
	
	for(i=borne1;i<=borne2;i++)
	{
		if(Premier(i) && Premier(Addition_Digit(i)) )
		{
			std::cout << i << " ";
		}
	}

    return 0;
	
}