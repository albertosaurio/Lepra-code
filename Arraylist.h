

template <class T>
class Arraylist {
	public:
		class Nodo {
			public:
				Nodo(const T& e, Nodo *p) : dato(e), link(p) {}
				~Nodo() { }

				T dato;
				Nodo *link;
		};

		Arraylist();
		~Arraylist();

		void agregar(T e);
		T sacar();

		bool isEmpty();

	private:
		Nodo *mPrimero;
		Nodo *mUltimo;
};



template <class T>
Arraylist<T>::Arraylist() {
    mUltimo = NULL;
	mPrimero	=	NULL;

}

template <class T>
Arraylist<T>::~Arraylist() {
}

template <class T>
void Arraylist<T>::agregar(T e) {
	Nodo *p = new Nodo(e, NULL);

	if(isEmpty()) {
		mPrimero = p;
		mUltimo	=	mPrimero;
		return;
	}
	mUltimo->link	=	p;
	mUltimo	=	p;
}

template <class T>
T Arraylist<T>::sacar() {
	if(isEmpty()) return T();
	Nodo *p = mPrimero;
	T e	=	mPrimero->dato;
	mPrimero = mPrimero->link;
	delete p;
	return e;
}

template <class T>
bool Arraylist<T>::isEmpty() {
	return !(mPrimero);
}
/*
template <class T>
T sumar(Arraylist<T>& S) {
	T aux;
	T e;
	if(S.isEmpty())
		return 0;
	else {
		e = S.sacar();
		aux = e + sumar(S);
		S.agregar(e);
		return aux;
	}
}

*/
