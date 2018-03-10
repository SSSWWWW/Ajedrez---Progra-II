#include "tablero.h"
#include "ConjuntoClientes.h"
#include<string>
#include<iostream>


tablero::tablero(int f, int c) {


	tab = new Matriz<Puntos*>(f, c);


	
	Puntos *p_ = new Puntos();
	p_->setPuntos("  " , "");
	tab->setValor(5 , 0 , p_);
	tab->setValor(5 , 1 , p_);
	tab->setValor(5 , 2 , p_);
	tab->setValor(5 , 3 , p_);
	tab->setValor(5 , 4 , p_);
	tab->setValor(5 , 5 , p_);
	tab->setValor(5 , 6 , p_);
	tab->setValor(5 , 7 , p_);

	tab->setValor(4 , 0 , p_);
	tab->setValor(4 , 1 , p_);
	tab->setValor(4 , 2 , p_);
	tab->setValor(4 , 3 , p_);
	tab->setValor(4 , 4 , p_);
	tab->setValor(4 , 5 , p_);
	tab->setValor(4 , 6 , p_);
	tab->setValor(4 , 7 , p_);

	tab->setValor(3 , 0 , p_);
	tab->setValor(3 , 1 , p_);
	tab->setValor(3 , 2 , p_);
	tab->setValor(3 , 3 , p_);
	tab->setValor(3 , 4 , p_);
	tab->setValor(3 , 5 , p_);
	tab->setValor(3 , 6 , p_);
	tab->setValor(3 , 7 , p_);

	tab->setValor(2 , 0 , p_);
	tab->setValor(2 , 1 , p_);
	tab->setValor(2 , 2 , p_);
	tab->setValor(2 , 3 , p_);
	tab->setValor(2 , 4 , p_);
	tab->setValor(2 , 5 , p_);
	tab->setValor(2 , 6 , p_);
	tab->setValor(2 , 7 , p_);


	rey *ren = new rey();
	ren->setColumna("Rn");
	ren->setFila("");
	Puntos *p_e8 = new Puntos();
	p_e8->setPuntos(ren->getColumna() , ren->getFila());
	tab->setValor(7 , 4 , p_e8);

	rey *reb = new rey();
	reb->setColumna("Rb");
	reb->setFila("");
	Puntos *p_e1 = new Puntos();
	p_e1->setPuntos(reb->getColumna() , reb->getFila());
	tab->setValor(0 , 4 , p_e1);



	reina *rn = new reina();
	rn->setColumna("Dn");
	rn->setFila("");
	Puntos *p_d8 = new Puntos();
	p_d8->setPuntos(rn->getColumna() , rn->getFila());
	tab->setValor(7 , 3 , p_d8);

	reina *rb = new reina();
	rb->setColumna("Db");
	rb->setFila("");
	Puntos *p_d1 = new Puntos();
	p_d1->setPuntos(rb->getColumna() , rb->getFila());
	tab->setValor(0 , 3 , p_d1);




	alfil *an1 = new alfil();
	an1->setColumna("An");
	an1->setFila("");
	Puntos *p_c8 = new Puntos();
	p_c8->setPuntos(an1->getColumna() , an1->getFila());
	tab->setValor(7 , 2 , p_c8);

	alfil *an2 = new alfil();
	an2->setColumna("An");
	an2->setFila("");
	Puntos *p_f8 = new Puntos();
	p_f8->setPuntos(an2->getColumna() , an2->getFila());
	tab->setValor(7 , 5 , p_f8);

	alfil *ab1 = new alfil();
	ab1->setColumna("Ab");
	ab1->setFila("");
	Puntos *p_c1 = new Puntos();
	p_c1->setPuntos(ab1->getColumna() , ab1->getFila());
	tab->setValor(0 , 2 , p_c1);

	alfil *ab2 = new alfil();
	ab2->setColumna("Ab");
	ab2->setFila("");
	Puntos *p_f1 = new Puntos();
	p_f1->setPuntos(ab2->getColumna() , ab2->getFila());
	tab->setValor(0 , 5 , p_f1);






	caballo *cn1 = new caballo();
	cn1->setColumna("Cn");
	cn1->setFila("");
	Puntos *p_b8 = new Puntos();
	p_b8->setPuntos(cn1->getColumna() , cn1->getFila());
	tab->setValor(7 , 1 , p_b8);

	caballo *cn2 = new caballo();
	cn2->setColumna("Cn");
	cn2->setFila("");
	Puntos *p_g8 = new Puntos();
	p_g8->setPuntos(cn2->getColumna() , cn2->getFila());
	tab->setValor(7 , 6 , p_g8);

	caballo *cb1 = new caballo();
	cb1->setColumna("Cb");
	cb1->setFila("");
	Puntos *p_b1 = new Puntos();
	p_b1->setPuntos(cb1->getColumna() , cb1->getFila());
	tab->setValor(0 , 1 , p_b1);

	caballo *cb2 = new caballo();
	cb2->setColumna("Cb");
	cb2->setFila("");
	Puntos *p_g1 = new Puntos();
	p_g1->setPuntos(cb2->getColumna() , cb2->getFila());
	tab->setValor(0 , 6 , p_g1);










	torre *tn1 = new torre();
	tn1->setColumna("Tn");
	tn1->setFila("");
	Puntos *p_a8 = new Puntos();
	p_a8->setPuntos(tn1->getColumna() , tn1->getFila());
	tab->setValor(7 , 0 , p_a8);

	torre *tn2 = new torre();
	tn2->setColumna("Tn");
	tn2->setFila("");
	Puntos *p_h8 = new Puntos();
	p_h8->setPuntos(tn2->getColumna() , tn2->getFila());
	tab->setValor(7 , 7 , p_h8);

	torre *tb1 = new torre();
	tb1->setColumna("Tb");
	tb1->setFila("");
	Puntos *p_a1 = new Puntos();
	p_a1->setPuntos(tb1->getColumna() , tb1->getFila());
	tab->setValor(0 , 0 , p_a1);

	torre *tb2 = new torre();
	tb2->setColumna("Tb");
	tb2->setFila("");
	Puntos *p_h1 = new Puntos();
	p_h1->setPuntos(tb2->getColumna() , tb2->getFila());
	tab->setValor(0 , 7 , p_h1);



	 
	

	peon *pb1 = new peon();
	pb1->setColumna("pb");
	pb1->setFila("");
	Puntos *p_a2 = new Puntos();
	p_a2->setPuntos(pb1->getColumna() , pb1->getFila());
	tab->setValor(1, 0, p_a2);
	
	peon *pb2 = new peon();
	pb2->setColumna("pb");
	pb2->setFila("");
	Puntos *p_b2 = new Puntos();
	p_b2->setPuntos(pb2->getColumna(), pb2->getFila());
	tab->setValor(1, 1, p_b2);



	peon *pb3 = new peon();
	pb3->setColumna("pb");
	pb3->setFila("");
	Puntos *p_c2 = new Puntos();
	p_c2->setPuntos(pb3->getColumna(), pb3->getFila());
	tab->setValor(1, 2, p_c2);

	peon *pb4 = new peon();
	pb4->setColumna("pb");
	pb4->setFila("");
	Puntos *p_d2 = new Puntos();
	p_d2->setPuntos(pb4->getColumna(), pb4->getFila());
	tab->setValor(1, 3, p_d2);

	peon *pb5 = new peon();
	pb5->setColumna("pb");
	pb5->setFila("");
	Puntos *p_e2 = new Puntos();
	p_e2->setPuntos(pb5->getColumna(), pb5->getFila());
	tab->setValor(1, 4, p_e2);

	peon *pb6 = new peon();
	pb6->setColumna("pb");
	pb6->setFila("");
	Puntos *p_f2 = new Puntos();
	p_f2->setPuntos(pb6->getColumna(), pb6->getFila());
	tab->setValor(1, 5, p_f2);

	peon *pb7 = new peon();
	pb7->setColumna("pb");
	pb7->setFila("");
	Puntos *p_g2 = new Puntos();
	p_g2->setPuntos(pb7->getColumna(), pb7->getFila());
	tab->setValor(1, 6, p_g2);

	peon *pb8 = new peon();
	pb8->setColumna("pb");
	pb8->setFila("");
	Puntos *p_h2 = new Puntos();
	p_h2->setPuntos(pb8->getColumna(), pb8->getFila());
	tab->setValor(1, 7, p_h2);


	

	peon *pn1 = new peon();
	pn1->setColumna("pn");
	pn1->setFila("");
	Puntos *p_a7 = new Puntos();
	p_a7->setPuntos(pn1->getColumna(), pn1->getFila());
	tab->setValor(6, 0, p_a7);

	peon *pn2 = new peon();
	pn2->setColumna("pn");
	pn2->setFila("");
	Puntos *p_b7 = new Puntos();
	p_b7->setPuntos(pn2->getColumna(), pn2->getFila());
	tab->setValor(6, 1, p_b7);

	peon *pn3 = new peon();
	pn3->setColumna("pn");
	pn3->setFila("");
	Puntos *p_c7 = new Puntos();
	p_c7->setPuntos(pn3->getColumna(), pn3->getFila());
	tab->setValor(6, 2, p_c7);

	peon *pn4 = new peon();
	pn4->setColumna("pn");
	pn4->setFila("");
	Puntos *p_d7 = new Puntos();
	p_d7->setPuntos(pn4->getColumna(), pn4->getFila());
	tab->setValor(6, 3, p_d7);

	peon *pn5 = new peon();
	pn5->setColumna("pn");
	pn5->setFila("");
	Puntos *p_e7 = new Puntos();
	p_d7->setPuntos(pn5->getColumna(), pn5->getFila());
	tab->setValor(6, 4, p_d7);

	peon *pn6 = new peon();
	pn6->setColumna("pn");
	pn6->setFila("");
	Puntos *p_f7 = new Puntos();
	p_f7->setPuntos(pn6->getColumna(), pn6->getFila());
	tab->setValor(6, 5, p_f7);

	peon *pn7 = new peon();
	pn7->setColumna("pn");
	pn7->setFila("");
	Puntos *p_g7 = new Puntos();
	p_g7->setPuntos(pn7->getColumna(), pn7->getFila());
	tab->setValor(6, 6, p_g7);

	peon *pn8 = new peon();
	pn8->setColumna("pn");
	pn8->setFila("");
	Puntos *p_h7 = new Puntos();
	p_h7->setPuntos(pn8->getColumna(), pn8->getFila());
	tab->setValor(6, 7, p_h7);


	cout<<" a   b   c   d   e   f   g   h";
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;

	
	cout << tab->getValor(7 , 0)->toString();
	printf(" %c",179);
	cout << tab->getValor(7 , 1)->toString();
	printf(" %c",179);
	cout << tab->getValor(7 , 2)->toString();
	printf(" %c",179);
	cout << tab->getValor(7 , 3)->toString();
	printf(" %c",179);
	cout << tab->getValor(7 , 4)->toString();
	printf(" %c",179);
	cout << tab->getValor(7, 5)->toString();
	printf(" %c",179);
	cout << tab->getValor(7, 6)->toString();
	printf(" %c",179);
	cout << tab->getValor(7, 7)->toString();
	printf(" %c",179);
	printf(" %c ",'8');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;



	cout << tab->getValor(6, 0)->toString();
	printf(" %c", 179);
	cout << tab->getValor(6, 1)->toString();
	printf(" %c", 179);
	cout << tab->getValor(6, 2)->toString();
	printf(" %c", 179);
	cout << tab->getValor(6, 3)->toString();
	printf(" %c", 179);
	cout << tab->getValor(6, 4)->toString();
	printf(" %c", 179);
	cout << tab->getValor(6, 5)->toString();
	printf(" %c", 179);
	cout << tab->getValor(6, 6)->toString();
	printf(" %c", 179);
	cout << tab->getValor(6, 7)->toString();
	printf(" %c",179);
	printf(" %c ",'7');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;




	cout << tab->getValor(5, 0)->toString();
	printf(" %c",179);
	cout << tab->getValor(5, 1)->toString();
	printf(" %c",179);
	cout << tab->getValor(5, 2)->toString();
	printf(" %c",179);
	cout << tab->getValor(5, 3)->toString();
	printf(" %c",179);
	cout << tab->getValor(5, 4)->toString();
	printf(" %c",179);
	cout << tab->getValor(5, 5)->toString();
	printf(" %c",179);
	cout << tab->getValor(5, 6)->toString();
	printf(" %c",179);
	cout << tab->getValor(5, 7)->toString();
	printf(" %c",179);
	printf(" %c ",'6');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;





	cout << tab->getValor(4, 0)->toString();
	printf(" %c",179);
	cout << tab->getValor(4, 1)->toString();
	printf(" %c",179);
	cout << tab->getValor(4, 2)->toString();
	printf(" %c",179);
	cout << tab->getValor(4, 3)->toString();
	printf(" %c",179);
	cout << tab->getValor(4, 4)->toString();
	printf(" %c",179);
	cout << tab->getValor(4, 5)->toString();
	printf(" %c",179);
	cout << tab->getValor(4, 6)->toString();
	printf(" %c",179);
	cout << tab->getValor(4, 7)->toString();
	printf(" %c",179);
	printf(" %c ",'5');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;






	cout << tab->getValor(3, 0)->toString();
	printf(" %c",179);
	cout << tab->getValor(3, 1)->toString();
	printf(" %c",179);
	cout << tab->getValor(3, 2)->toString();
	printf(" %c",179);
	cout << tab->getValor(3, 3)->toString();
	printf(" %c",179);
	cout << tab->getValor(3, 4)->toString();
	printf(" %c",179);
	cout << tab->getValor(3, 5)->toString();
	printf(" %c",179);
	cout << tab->getValor(3, 6)->toString();
	printf(" %c",179);
	cout << tab->getValor(3, 7)->toString();
	printf(" %c",179);
	printf(" %c ",'4');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;






	cout << tab->getValor(2, 0)->toString();
	printf(" %c",179);
	cout << tab->getValor(2, 1)->toString();
	printf(" %c",179);
	cout << tab->getValor(2, 2)->toString();
	printf(" %c",179);
	cout << tab->getValor(2, 3)->toString();
	printf(" %c",179);
	cout << tab->getValor(2, 4)->toString();
	printf(" %c",179);
	cout << tab->getValor(2, 5)->toString();
	printf(" %c",179);
	cout << tab->getValor(2, 6)->toString();
	printf(" %c",179);
	cout << tab->getValor(2, 7)->toString();
	printf(" %c",179);
	printf(" %c ",'3');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;




	



	cout << tab->getValor(1, 0)->toString();
	printf(" %c", 179);
	cout << tab->getValor(1, 1)->toString();
	printf(" %c", 179);
	cout << tab->getValor(1, 2)->toString();
	printf(" %c", 179);
	cout << tab->getValor(1, 3)->toString();
	printf(" %c", 179);
	cout << tab->getValor(1, 4)->toString();
	printf(" %c", 179);
	cout << tab->getValor(1, 5)->toString();
	printf(" %c", 179);
	cout << tab->getValor(1, 6)->toString();
	printf(" %c", 179);
	cout << tab->getValor(1, 7)->toString();


	printf(" %c",179);
	printf(" %c ",'2');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;


	cout << tab->getValor(0, 0)->toString();
	printf(" %c",179);
	cout << tab->getValor(0, 1)->toString();
	printf(" %c",179);
	cout << tab->getValor(0, 2)->toString();
	printf(" %c",179);
	cout << tab->getValor(0, 3)->toString();
	printf(" %c",179);
	cout << tab->getValor(0 , 4)->toString();
	printf(" %c",179);
	cout << tab->getValor(0, 5)->toString();
	printf(" %c",179);
	cout << tab->getValor(0, 6)->toString();
	printf(" %c",179);
	cout << tab->getValor(0, 7)->toString();
	printf(" %c",179);
	printf(" %c ",'1');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;


	char a ,  d ;
	int  q , w , e , r;
	int con = 0;

	do{


	cout << "digite posicion de columna y fila " << endl;
	cin >> a;
	cin >> w;


	cout << "digite posicion de columna y fila a mover " << endl;
	cin >> d;
	cin >> r;

	 if(a == 'a')
		 q = 0;
	 if(a == 'b')
		 q = 1;
	 if(a == 'c')
		 q = 2;
	 if(a == 'd')
		 q = 3;
	 if(a == 'e')
		 q = 4;
	 if(a == 'f')
		 q = 5;
	 if(a == 'g')
		 q = 6;
	 if(a == 'h')
		 q = 7;

	 if(d == 'a')
		 e = 0;
	 if(d == 'b')
		 e = 1;
	 if(d == 'c')
		 e = 2;
	 if(d == 'd')
		 e = 3;
	 if(d == 'e')
		 e = 4;
	 if(d == 'f')
		 e = 5;
	 if(d == 'g')
		 e = 6;
	 if(d == 'h')
		 e = 7;



	 w = w - 1;
	 r = r - 1;

	 string aux = tab->getValor(w, q)->toString();
	 string aux1 = tab->getValor(r, e)->toString();



	 if ((aux == "Cn") || (aux == "Cb") && puedeMoverseCaballo(q , w)
		 ) {

		 tab->setValor(r, e, tab->getValor(w, q));
		 tab->setValor(w, q, p_);


	 }
	 


	 if ((aux == "An") || (aux == "Ab") && !puedeMoverseTorre(q, w, e, r)
		 ) {

		 tab->setValor(r, e, tab->getValor(w, q));
		 tab->setValor(w, q, p_);


	 }



	 if ((aux == "Tn"  ) || (aux == "Tb" ) && puedeMoverseTorre(q , w , e , r)
		 ) {

		 tab->setValor(r, e, tab->getValor(w, q));
		 tab->setValor(w, q, p_);


	 }


	





	 if ((aux == "pn"  && aux1 != "  ") || (aux == "pb"  && aux1 != "  ") 
		 ) {

		 tab->setValor(r, e, tab->getValor(w, q));
		 tab->setValor(w, q, p_);
	 }


	 if((aux ==  "pn"  && aux1 ==  "  ") || (aux == "pb"  && aux1 == "  ") && (q == w + 1 || q == w - 1)
			 ) {
	 
	tab->setValor(r , q , tab->getValor(w , q));
    tab->setValor(w , q , p_);
	 }



	
	

	cout<<" a   b   c   d   e   f   g   h";
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;

	
	cout << tab->getValor(7 , 0)->toString();
	printf(" %c",179);
	cout << tab->getValor(7 , 1)->toString();
	printf(" %c",179);
	cout << tab->getValor(7 , 2)->toString();
	printf(" %c",179);
	cout << tab->getValor(7 , 3)->toString();
	printf(" %c",179);
	cout << tab->getValor(7 , 4)->toString();
	printf(" %c",179);
	cout << tab->getValor(7, 5)->toString();
	printf(" %c",179);
	cout << tab->getValor(7, 6)->toString();
	printf(" %c",179);
	cout << tab->getValor(7, 7)->toString();
	printf(" %c",179);
	printf(" %c ",'8');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;



	cout << tab->getValor(6, 0)->toString();
	printf(" %c", 179);
	cout << tab->getValor(6, 1)->toString();
	printf(" %c", 179);
	cout << tab->getValor(6, 2)->toString();
	printf(" %c", 179);
	cout << tab->getValor(6, 3)->toString();
	printf(" %c", 179);
	cout << tab->getValor(6, 4)->toString();
	printf(" %c", 179);
	cout << tab->getValor(6, 5)->toString();
	printf(" %c", 179);
	cout << tab->getValor(6, 6)->toString();
	printf(" %c", 179);
	cout << tab->getValor(6, 7)->toString();
	printf(" %c",179);
	printf(" %c ",'7');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;




	cout << tab->getValor(5, 0)->toString();
	printf(" %c",179);
	cout << tab->getValor(5, 1)->toString();
	printf(" %c",179);
	cout << tab->getValor(5, 2)->toString();
	printf(" %c",179);
	cout << tab->getValor(5, 3)->toString();
	printf(" %c",179);
	cout << tab->getValor(5, 4)->toString();
	printf(" %c",179);
	cout << tab->getValor(5, 5)->toString();
	printf(" %c",179);
	cout << tab->getValor(5, 6)->toString();
	printf(" %c",179);
	cout << tab->getValor(5, 7)->toString();
	printf(" %c",179);
	printf(" %c ",'6');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;





	cout << tab->getValor(4, 0)->toString();
	printf(" %c",179);
	cout << tab->getValor(4, 1)->toString();
	printf(" %c",179);
	cout << tab->getValor(4, 2)->toString();
	printf(" %c",179);
	cout << tab->getValor(4, 3)->toString();
	printf(" %c",179);
	cout << tab->getValor(4, 4)->toString();
	printf(" %c",179);
	cout << tab->getValor(4, 5)->toString();
	printf(" %c",179);
	cout << tab->getValor(4, 6)->toString();
	printf(" %c",179);
	cout << tab->getValor(4, 7)->toString();
	printf(" %c",179);
	printf(" %c ",'5');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;






	cout << tab->getValor(3, 0)->toString();
	printf(" %c",179);
	cout << tab->getValor(3, 1)->toString();
	printf(" %c",179);
	cout << tab->getValor(3, 2)->toString();
	printf(" %c",179);
	cout << tab->getValor(3, 3)->toString();
	printf(" %c",179);
	cout << tab->getValor(3, 4)->toString();
	printf(" %c",179);
	cout << tab->getValor(3, 5)->toString();
	printf(" %c",179);
	cout << tab->getValor(3, 6)->toString();
	printf(" %c",179);
	cout << tab->getValor(3, 7)->toString();
	printf(" %c",179);
	printf(" %c ",'4');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;






	cout << tab->getValor(2, 0)->toString();
	printf(" %c",179);
	cout << tab->getValor(2, 1)->toString();
	printf(" %c",179);
	cout << tab->getValor(2, 2)->toString();
	printf(" %c",179);
	cout << tab->getValor(2, 3)->toString();
	printf(" %c",179);
	cout << tab->getValor(2, 4)->toString();
	printf(" %c",179);
	cout << tab->getValor(2, 5)->toString();
	printf(" %c",179);
	cout << tab->getValor(2, 6)->toString();
	printf(" %c",179);
	cout << tab->getValor(2, 7)->toString();
	printf(" %c",179);
	printf(" %c ",'3');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;




	



	cout << tab->getValor(1, 0)->toString();
	printf(" %c", 179);
	cout << tab->getValor(1, 1)->toString();
	printf(" %c", 179);
	cout << tab->getValor(1, 2)->toString();
	printf(" %c", 179);
	cout << tab->getValor(1, 3)->toString();
	printf(" %c", 179);
	cout << tab->getValor(1, 4)->toString();
	printf(" %c", 179);
	cout << tab->getValor(1, 5)->toString();
	printf(" %c", 179);
	cout << tab->getValor(1, 6)->toString();
	printf(" %c", 179);
	cout << tab->getValor(1, 7)->toString();


	printf(" %c",179);
	printf(" %c ",'2');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;


	cout << tab->getValor(0, 0)->toString();
	printf(" %c",179);
	cout << tab->getValor(0, 1)->toString();
	printf(" %c",179);
	cout << tab->getValor(0, 2)->toString();
	printf(" %c",179);
	cout << tab->getValor(0, 3)->toString();
	printf(" %c",179);
	cout << tab->getValor(0 , 4)->toString();
	printf(" %c",179);
	cout << tab->getValor(0, 5)->toString();
	printf(" %c",179);
	cout << tab->getValor(0, 6)->toString();
	printf(" %c",179);
	cout << tab->getValor(0, 7)->toString();
	printf(" %c",179);
	printf(" %c ",'1');
	cout<<endl;
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197); 
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);

	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	printf("%c",196);
	printf("%c",196);
	printf("%c",196);
	printf("%c",197);
	cout<<endl;

	con = 0 ;
		for(int i = 0 ; i < tab->cantidadFilas() ; i++){
			for(int j = 0 ; j < tab->cantidadColumnas() ; j++){

				
			
				if((tab->getValor(i , j)->toString() ==  "Rb") || 
					(tab->getValor(i , j)->toString() ==  "Rn") )
				{
				
				con = con + 1;
				
				}

			}
		
		
		}


		cout << "con : " << con << endl;

	}while(con != 1);
	 
}


bool tablero::puedeMoverseCaballo(int fil, int col) {

	if ((tab->getValor(col + 2, fil + 1)->toString() != "  ") || 
		
		
		(tab->getValor(col + 2, fil - 1)->toString() != "  ")  ||


	  ( tab->getValor(col + 1 , fil + 2)->toString() != "  ") ||


	  
	  (tab->getValor(col - 2, fil + 1)->toString() != "  "))



		
		

		return true;

	else return false;
	






}

bool tablero::puedeMoverseTorre(int fil , int col , int fil1 , int col1) {


	
	for (int i = col; i < col1; i++) {
		for (int j = fil; j < fil1; j++) {
		
			tab->getValor(i, j)->toString() != "  ";

			return false;

			return true;
		
		
		}
	
	
	}

}



tablero::tablero(ifstream& in, ConjuntoClientes clientes) {
	int total = SerializadorBinario::deserialize<int>(in);
	for (int i = 0; i < total; i++) {
		int x = SerializadorBinario::deserialize<int>(in);
		int y = SerializadorBinario::deserialize<int>(in);
		string cedula = SerializadorBinario::deserialize<string>(in);
	
	}
}

tablero::~tablero() {
	delete tab;
}

void tablero::agregar(int x, int y, Puntos* p) {
	tab->setValor(x, y, p);
}

int tablero::asientosOcupados() const {
	int total = 0;
	for (int i = 0; i < tab->cantidadFilas(); i++) {
		for (int j = 0; j < tab->cantidadColumnas(); j++) {
			if (tab->getValor(i, j) != NULL) {
				total++;
			}
		}
	}
	return total;
}

void tablero::limpiar() {
	for (int i = 0; i < tab->cantidadFilas(); i++) {
		for (int j = 0; j < tab->cantidadColumnas(); j++) {
			tab->setValor(i, j, NULL);
		}
	}
}

bool tablero::asientoOcupados(int x, int y) const {
	return tab->getValor(x, y) != NULL;
}

void tablero::serializar(ofstream& out) const {
	SerializadorBinario::serialize<int>(out, asientosOcupados());
	for (int i = 0; i < tab->cantidadFilas(); i++) {
		for (int j = 0; j < tab->cantidadColumnas(); j++) {
			Puntos* actual = tab->getValor(i, j);
			if (actual) {
				SerializadorBinario::serialize<int>(out, i);
				SerializadorBinario::serialize<int>(out, j);
				 
			}
		}
	}
}