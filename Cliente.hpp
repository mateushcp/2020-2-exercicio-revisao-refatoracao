#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private:

		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;

		
	public:
		Cliente(string nome,string endereco,string cidade,string estado,string cep);
		string get_nome();
		string get_endereco();
		string get_cidade();
		string get_estado();
		string get_cep();
		

		void print();
		
};

#endif