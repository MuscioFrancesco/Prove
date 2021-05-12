#include <iostream>
using namespace std;

class Mammifero{
	protected:

		string nomeSpecie;
		int numeroArti;
		int eta;
    	string nome;

	public:

		Mammifero(string _nomeSpecie, int _numeroArti, int _eta){
			nomeSpecie = _nomeSpecie;
			numeroArti = _numeroArti;
			eta = _eta;
		}

		void print(){
			cout << "Mammifero di specie " << nomeSpecie << " con " << numeroArti << " arti e di eta  " << eta << endl;
			cout << "Il mammifero si chiama " << nome << endl;
		}

		void setNome(string _nome){  //se la variabile nome era in public non serviva fare la funzione, ma bensì fare nel main " m1.nome = "Marco" "; 
			nome = _nome;
		}
};

class Gatto: public Mammifero{
	public:
		Gatto(int _eta) : Mammifero("gatto", 4, _eta){
		}

		void miagola(){
			cout << "Miao" << endl;
		}

		void print(){
			cout << "Il gatto si chiama " << nome << endl; 
		}
};

int main(){
	Mammifero m1("homo sapiens", 4, 30);
	m1.setNome("Marco");
	m1.print();
	Gatto g(5);
	g.setNome("Gesu'");
	g.print();
	g.miagola();
}