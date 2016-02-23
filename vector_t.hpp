#pragma once
#include <iostream>

using namespace std;

typedef int TDATO;

class vector_t
{
private:
	TDATO* base_; //Puntero al inicio del vector.
	int sz_; //Tamaño del vector.

public:
	vector_t(void);
	vector_t(int sz);
	virtual ~vector_t(void);

	void resize(int sz);
	TDATO& operator[](int pos); //Acceder a elemento no constante.
	TDATO operator[](int pos) const; //Acceder a elementos constante.
	int get_size(void);

private:
	void build(int sz); //Reservar memoria.
	void clean(void); //Liberar espacio.
};