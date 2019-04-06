#include <iostream>
#include <string>

using namespace std;

class Persona{
	private:
		int id;
		string nombre;
		string apellido;
		
	public:
		
		void setID(int id){
		this->id=id;
		}
		int getID()
		{
		return this->id;
		}
		
		void setnombre(string nom){
		this->nombre=nom;
		}
		string getnombre()
		{
			return this->nombre;
		}
		
		
		void setapellido(string ape);
		
		string getapellido();
		
		void ImprimirPersona()
		{
			cout<<this->id<<endl;
			cout<<this->nombre<<endl;
			cout<<this->apellido<<endl;
		}
		
		virtual void ImprimirPDF()=0;
	
};



class Estudiante: public Persona{
	private:
		string DUE;
		
	public:
		void setDUE(string due){
		this->DUE=due;	
		}
		string getDUE()
		{
		return this->DUE;
		}
		
		 virtual void ImprimirPDF()
		{
			cout<<"--------------"<<endl;
		}
};

class Profesor: public Persona{
	private:
		 string categoria;
		
	public:
		void setcategoria(string cat){
		this->categoria=cat;
		}
		string getcategoria()
		{
			return this->categoria;
		}
			virtual void imprimirPDF()
		{
			cout<<"*******************"<<endl;
		}
};
int main() {
	
	Estudiante *e;
	e=new Estudiante();
	e->setID(1);
	cout<<"id:"<<e->getID()<<endl;
	e->setDUE("jk97");
	cout<<"due:"<<e->getDUE()<<endl;
	e->setnombre("sofi");
	cout<<"nombre:"<<e->getnombre()<<endl;
	e->setapellido("gomez");
	cout<<"apellido:"<<e->getapellido()<<endl;
	cout<<"datos de persona"<<endl;
	e->ImprimirPersona();
	e->ImprimirPDF();
	
	
	Profesor *p;
	p=new Profesor();
	p->setID(2);
	cout<<"id:"<<p->getID()<<endl;
	p->setapellido("primera");
	cout<<"categoria:"<<p->getcategoria()<<endl;
	p->setnombre("celina");
	cout<<"nombre:"<<p->getnombre()<<endl;
	p->setapellido("saravia");
	cout<<"apellido:"<<p->getapellido()<<endl;
	cout<<"datos de persona"<<endl;
	p->ImprimirPersona();
	p->ImprimirPDF();
	

}
