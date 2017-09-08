#include <iostream>
#include <vector>
#include <string>
//#include<pokemon.h>
using namespace std;

class pokemon {          // Definimos los atributos que componen la clase pókemon. 
    string nombre;       // String= Cadena de carácteres.
    int tipoPrincipal;  // int= Variable de tipo entero.
    int tipoSecundario;
    string color;
    int numeroOjos;
    int numeroPatas;
    bool aletas;        // bool= Verdadero (1) o Falso (0)
    bool cola;
    bool alas;
    string fisiologia;
    
    public: /* Empieza la parte del código a la que tiene acceso el usuario, la que puede modificar. 
	Relaciona la declaración de los atributos con la función getter que usurá el usuario*/
    string getNombre(){return nombre;};
    int getTipoPrincipal(){return tipoPrincipal;};
    int getTipoSecundario(){return tipoSecundario;};
    string getColor(){return color;};
    int getOjos(){return numeroOjos;};
    int getPatas(){return numeroPatas;};
    bool getAletas(){return aletas;};
    bool getCola(){return cola;};
    bool getAlas(){return alas;};
    string getFisiologia(){return fisiologia;};
    
    pokemon(); //Declaración de constructores. El primero (obligatorio) crea un objeto vacío. 
    pokemon(const string &n, int tp, int ts, string c, int no, int np, bool ale, bool co, bool ala, bool f){ // El segundo (opcional, pero en nuestro caso recomendable) establece el orden en el que se van a declarar los atibutos de cada pókemon
        nombre=n;
        tipoPrincipal=tp;
        tipoSecundario=ts;
        color=c;
        numeroOjos=no;
        numeroPatas=np;
        aletas=ale;
        cola=co;
        alas=ala;
        fisiologia=f;

    }
};

int main(int argc, char* argv []) { // Empieza el programa principal. 
	
vector<pokemon> vectorPok; // La función vector, indica la creación de un vector llamado "VectorPok" con el tipo de datos de la clase pokemon. 

pokemon bulbasaur("BULBASAUR",5,7,"AZUL",2,4,0,0,0,"AN"); //Definimos un nuevo objeto de la clase pokemon llamado bulbasaur y, a continuación, proporcionamos la información de sus atributos al constructor. 
vectorPok.push_back(bulbasaur); //Guardamos el objeto bulbasaur en el vector "vectorPok".
pokemon charmander("CHARMANDER",2,0,"NARANJA",2,4,0,1,0,"DR"); //Repetimos el mismo procedimiento con los 78 objetos que designan a los pokemon restantes. 
vectorPok.push_back(charmander);
pokemon squirtle("SQUIRTLE",3,0,"AZUL",2,4,0,1,0,"AN");
vectorPok.push_back(squirtle);
pokemon caterpie("CATERPIE",11,0,"VERDE",2,4,0,1,0,"IN");
vectorPok.push_back(caterpie);
pokemon weedle("WEEDLE",11,7,"MARRON",2,12,0,1,0,"IN");
vectorPok.push_back(weedle);
pokemon pidgey("PIDGEY",1,9,"AMARILLO",2,2,0,1,1,"AV");
vectorPok.push_back(pidgey);
pokemon rattata("RATTATA",1,0,"MORADO",2,4,0,1,0,"MA");
vectorPok.push_back(rattata);
pokemon spearow("SPEAROW",9,1,"AMARILLO",2,2,0,1,1,"AV");
vectorPok.push_back(spearow);
pokemon ekans("EKANS",7,0,"MORADO",2,0,0,1,0,"MORADO");
vectorPok.push_back(ekans);
pokemon pikachu("PIKACHU",4,0,"AMARILLO",2,4,0,1,0,"MA");
vectorPok.push_back(pikachu);
pokemon sandshrew("SANDSHREW",8,0,"AMARILLO",2,4,0,1,0,"AMARILLO");
vectorPok.push_back(sandshrew);
pokemon nidoranH("NIDORANH",7,0,"MORADO",2,4,0,1,0,"MA");
vectorPok.push_back(nidoranH);
pokemon nidoranM("NIDORANM",7,0,"ROSA",2,4,0,1,0,"MA");
vectorPok.push_back(nidoranM);
pokemon clefairy("CLEFAIRY",1,0,"ROSA",2,4,0,1,0,"MA");
vectorPok.push_back(clefairy);
pokemon vulpix("VULPIX",2,0,"MARRON",2,4,0,1,0,"MA");
vectorPok.push_back(vulpix);
pokemon jigglypuff("JIGGLYPUFF",1,0,"ROSA",2,4,0,1,0,"MA");
vectorPok.push_back(jigglypuff);
pokemon zubat("ZUBAT",7,9,"AZUL",0,2,0,0,1,"MA");
vectorPok.push_back(zubat);
pokemon oddish("ODDISH",5,7,"AZUL",2,2,0,0,0,"PL");
vectorPok.push_back(oddish);
pokemon paras("PARAS",11,5,"NARANAJA",2,6,0,0,0,"IN");
vectorPok.push_back(paras);
pokemon venonat("VENONAT",11,7,"MORADO",2,2,0,0,0,"IN");
vectorPok.push_back(venonat);
pokemon diglett("DIGLETT",8,0,"MARRON",2,0,0,0,0,"MA");
vectorPok.push_back(diglett);
pokemon meowth("MEOWTH",1,0,"AMARILLO",2,4,0,1,0,"MA");
vectorPok.push_back(meowth);
pokemon psyduck("PSYDUCK",3,0,"AMARIILLO",2,2,0,1,1,"AV");
vectorPok.push_back(psyduck);
pokemon mankey("MANKEY",6,0,"BLANCO",2,4,0,1,0,"MA");
vectorPok.push_back(mankey);
pokemon growlithe("GROWLITHE",2,0,"NARANJA",2,4,0,1,0,"MA");
vectorPok.push_back(growlithe);
pokemon POLIWIG("POLIWIG",3,0,"AZUL",2,2,0,1,0,"AN");
vectorPok.push_back(POLIWIG);
pokemon abra("ABRA",10,0,"AMARILLO",2,4,0,1,0,"MA");
vectorPok.push_back(abra);
pokemon machop("MACHOP",6,0,"GRIS",2,4,0,1,0,"HU");
vectorPok.push_back(machop);
pokemon bellsprout("BELLSPROUT",7,5,"AMARILLO",2,2,0,0,0,"PL");
vectorPok.push_back(bellsprout);
pokemon tentacool("TENTACOOL",3,7,"AZUL",2,2,0,0,0,"PE");
vectorPok.push_back(tentacool);
pokemon geodude("GEODUDE",7,8,"GRIS",2,2,0,0,0,"OTRO");
vectorPok.push_back(geodude);
pokemon ponyta("PONYTA",2,0,"AMARILLO",2,4,0,0,0,"MA");
vectorPok.push_back(ponyta);
pokemon slowpoke("SLOWPOKE",3,10,"ROSA",2,4,0,1,0,"MA");
vectorPok.push_back(slowpoke);
pokemon magnemite("MAGNEMITE",4,0,"GRIS",1,0,0,0,0,"OTRO");
vectorPok.push_back(magnemite);
pokemon farfetchd("FARFETCHD",1,9,"AMARILLO",2,2,0,1,1,"AV");
vectorPok.push_back(farfetchd);
pokemon doduo("DODUO",1,9,"MARRON",4,2,0,0,0,"AV");
vectorPok.push_back(doduo);
pokemon seel("SEEL",3,0,"BLANCO",2,2,0,1,0,"PE");
vectorPok.push_back(seel);
pokemon grimer("GRIMER",6,0,"MORADO",2,0,0,0,0,"OTRO");
vectorPok.push_back(grimer);
pokemon shellder("SHELLDER",3,0,"MORADO",2,0,0,0,0,"PE");
vectorPok.push_back(shellder);
pokemon gastly("GASTLY",8,7,"MORADO",2,0,0,0,0,"OTRO");
vectorPok.push_back(gastly);
pokemon onix("ONIX",12,8,"GRIS",2,0,0,1,0,"OTRO");
vectorPok.push_back(onix);
pokemon drowzee("DROWZEE",10,0,"AMARILLO",2,4,0,0,0,"MA");
vectorPok.push_back(drowzee);
pokemon krabby("KRABBY",3,0,"NARANJA",2,4,0,0,0,"PE");
vectorPok.push_back(krabby);
pokemon voltorb("VOLTORB",4,0,"ROJO" ,2,0,0,0,0,"OTRO");
vectorPok.push_back(voltorb);
pokemon exeggcute("EXEGGCUTE",5,10,"ROSA",12,0,0,0,0,"OTRO");
vectorPok.push_back(exeggcute);
pokemon cubone("CUBONE",8,0,"MARRON",2,4,0,1,0,"MA");
vectorPok.push_back(cubone);
pokemon hitmonlee("HITMONLEE",6,0,"MARRON",2,4,0,0,0,"HU");
vectorPok.push_back(hitmonlee);
pokemon hitmonchan("HITMONCHAN",6,0,"MARRON",2,4,0,0,0,"HU");
vectorPok.push_back(hitmonchan);
pokemon lickitung("LICKITUNG",1,0,"ROSA",2,4,0,1,0,"MA");
vectorPok.push_back(lickitung);
pokemon koffing("KOFFING",7,0,"MORADO",2,0,0,0,0,"OTRO");
vectorPok.push_back(koffing);
pokemon rhyhorn("RHYHORN",8,12,"GRIS",2,4,0,1,0,"MA");
vectorPok.push_back(rhyhorn);
pokemon chansey("CHANSEY",1,0,"ROSA",2,4,0,1,0,"MA");
vectorPok.push_back(chansey);
pokemon tangela("TANGELA",5,0,"MORADO",2,2,0,0,0,"OTRO");
vectorPok.push_back(tangela);
pokemon kangaskhan("KANGASKHAN",1,0,"MARRON",2,4,0,1,0,"MA");
vectorPok.push_back(kangaskhan);
pokemon horsea("HORSEA",3,0,"AZUL",2,0,2,1,0,"PE");
vectorPok.push_back(horsea);
pokemon goldeen("GOLDEEN",3,0,"BLANCO",2,0,1,1,0,"PE");
vectorPok.push_back(goldeen);
pokemon staryu("STARYU",3,0,"MARRON",0,0,0,0,0,"OTRO");
vectorPok.push_back(staryu);
pokemon mrmime("MR MIME",10,0,"ROSA",2,4,0,0,0,"HU"); 
vectorPok.push_back(mrmime);
pokemon scyther("SCYTHER",11,9,"VERDE",2,4,0,1,1,"IN");
vectorPok.push_back(scyther);
pokemon jynx("JYNX",15,10,"ROJO",2,2,0,0,0,"HU");
vectorPok.push_back(jynx);
pokemon electabuzz("ELECTABUZZ",4,0,"AMARILLO",2,5,0,1,0,"MA");
vectorPok.push_back(electabuzz);
pokemon magmar("MAGMAR",2,0,"ROJO",2,4,0,1,0,"DR");
vectorPok.push_back(magmar);
pokemon pinsir("PINSIR",11,0,"GRIS",2,4,0,0,0,"IN");
vectorPok.push_back(pinsir);
pokemon taurus("TAURUS",1,0,"MARRON",2,4,0,1,0,"MA");
vectorPok.push_back(taurus);
pokemon magikarp("MAGIKARP",3,0,"NARANJA",2,0,1,1,0,"PE");
vectorPok.push_back(magikarp);
pokemon lapras("LAPRAS",3,15,"AZUL",2,0,4,0,0,"PE");
vectorPok.push_back(lapras);
pokemon ditto("DITTO",1,0,"ROSA",2,2,0,0,0,"OTRO");
vectorPok.push_back(ditto); 
pokemon eevee("EEVEE",1,0,"MARRON",2,4,0,1,0,"MA");
vectorPok.push_back(eevee);
pokemon porygon("PORYGON",1,0,"ROSA",2,2,0,1,0,"OTRO");
vectorPok.push_back(porygon);
pokemon omanyte("OMANYTE",12,3,"GRIS",2,0,0,0,0,"PE");
vectorPok.push_back(omanyte);
pokemon kabuto("KABUTO",12,3,"MARRON",2,4,0,0,0,"PE");
vectorPok.push_back(kabuto);
pokemon aerodactyl("AERODACTYL",12,9,"GRIS",2,2,0,1,1,"AV");
vectorPok.push_back(aerodactyl);
pokemon snorlarx("SNORLARX",1,0,"AZUL",2,4,0,0,0,"MA");
vectorPok.push_back(snorlarx);
pokemon articuno("ARTICUNO",15,9,"AZUL",2,2,0,1,2,"AV");
vectorPok.push_back(articuno);
pokemon zapdos("ZAPDOS",4,9,"AMARILLO",2,2,0,1,1,"AV");
vectorPok.push_back(zapdos);
pokemon moltres("MOLTRES",2,9,"AMARILLO",2,2,0,1,2,"AV");
vectorPok.push_back(moltres);
pokemon dratini("DRATINI",14,0,"DRATINI",2,0,0,1,0,"DR");
vectorPok.push_back(dratini);
pokemon mewtwo("MEWTWO",4,0,"GRIS",2,4,0,1,0,"OTRO");
vectorPok.push_back(mewtwo);
pokemon mew("MEW",4,0,"ROSA",2,4,0,1,0,"OTRO");
vectorPok.push_back(mew);

//Fin de la declaración de objetos de la clase pokemon. 



char teclaRandom; // Creamos una variable de tipo caracter que guardará el valor de una tecla cualquiera para que iniciemos y finalicemos el entorno. 
char respuesta; // Variable de tipo caracter para guardar el valor de una letra pulsada.
int respuestanum;

// Para no cometer errores ortográficos, asociamos a cada letra su correspondiente con tilde, gracias a los códios numéricos del código ASCII. 
char a = 160;
char e = 130;
char i = 161; 
char o = 162;
char u=  163;
char q1 = 168; // "q1" guarda el código que define el signo de apertura de interrogación. De la misma manera "e1" guarda la apertura de exclamción. 
char e1 = 173;



/* A continución, se imprime en la pantalla el primer paso que debe seguir el usuario para comenzar.
En todo el código, las impresiones guardan la misma estructura: primero se pondrá "cout <<" para indicar la salida del texto y "<< endl" para determinar el final de la línea.*/
cout<<"Bienvenido al adivino de pok"<<e<<"mons. "<<e1<<"Elige uno y empieza la diversi"<<o<<"n!"<< endl;
cout<<"Pulsa una tecla cualquiera y dale a intro para comenzar"<< endl;
cin>> teclaRandom; // La instrucción "cin>>" es de lectura de los datos que le proporcionemos al pulsar una letra. 
    
int pregunta=0;
int size;

vector <pokemon> aletas; // Creamos un vector por cada atributo. 
vector <pokemon> cola;
vector <pokemon> alas;
vector <pokemon> color;
vector <pokemon> ojos;
vector <pokemon> patas;
vector <pokemon> tipoPrincipal;
vector <pokemon> tipoSecundario;
vector <pokemon> fisiologia;

    do{
        switch(pregunta){
            case 0:
                
                cout <<q1<<"Tiene aletas?" <<endl<< "SI (S)" <<endl<< "NO (N)"<<endl<<  "NSNC (X)"<<endl; //Impresión de la pregunta con las opciones para responder. 
                cin>> respuesta;
                if (respuesta=='S'){ 
                /* En función de la respuesta dada, se recorre el vector y se crea uno nuevo*/
                        if (vectorPok[i].getAletas() ==1)
                            aletas.push_back(vectorPok[i]);
                    }

                
                else if (respuesta == 'N'){
                  for(int i=0;i<vectorPok.size();i++){
                        if (vectorPok[i].getAletas() ==0)
                            aletas.push_back(vectorPok[i]);
                    }
                }
                else if (respuesta == 'X'){
                    cout<<"Entendido entrenador, pasamos a la siguiente pregunta."<<endl;
                    for(int i=0; i<vectorPok.size(); i++){
                        aletas.push_back(vectorPok[i]);
                    }
                        
                }
                size = aletas.size();
                break;
            case 1:
			cout<<q1<<"Tiene cola?" <<endl<< "SI (S)" <<endl<< "NO (N)"<<endl<<  "NSNC (X)"<<endl;
                
                cin>> respuesta;
                if (respuesta=='S'){
                      for(int i=0;i<size;i++){
                        if (aletas[i].getCola() ==1) cola.push_back(aletas[i]);
                            
                    }

                }
                else if (respuesta == 'N'){
                    for(int i=0;i<size;i++){
                        if (aletas[i].getCola() ==0) cola.push_back(aletas[i]);
                            
                    }
                }
                else if (respuesta == 'X'){
                    cout<<"Entendido entrenador, pasamos a la siguiente pregunta."<<endl;
                    for(int i=0;i<size;i++){
                        cola.push_back(aletas[i]);
                    }
                }
                size = cola.size();
                break;

            case 2:
                
                cout<<q1<<"Tiene alas?" <<endl<< "SI (S)" <<endl<< "NO (N)"<<endl<<  "NSNC (X)"<<endl;
                cin>> respuesta;
                if (respuesta=='S'){
                     for(int i=0;i<size;i++){
                        if (cola[i].getAlas() ==1)
                            alas.push_back(cola[i]);
			}
                }
                else if (respuesta == 'N'){
                    for(int i=0;i<size;i++){
                        if (cola[i].getAlas() ==0)
                            alas.push_back(cola[i]);
			}
                }
                else if (respuesta == 'X'){
                    cout<<"Entendido entrenador, pasamos a la siguiente pregunta."<<endl;
                    for(int i=0;i<size;i++){
                         alas.push_back(cola[i]);
			}
                }
                size = alas.size();
                break;
            case 3:
                
                cout<<q1<<"¿Cu"<<a<<"l es el color principal?"<<endl<<"AMARILLO (1)" <<endl<<"AZUL (2)" <<endl<<"BLANCO (3)" <<endl<<"GRIS (4)" <<endl<< "MARRON (5)" <<endl<< "MORADO (6)" <<endl<< "NARANJA (7)" <<endl<< "ROJO (8)" <<endl<< "ROSA (9)" <<endl<< "OTRO (X)"<<endl;
                cin>> respuestanum; 
                if (respuestanum == 1){
                    for(int i=0;i<size;i++){
                        if (alas[i].getColor() =="AMARILLO")
                           color.push_back(alas[i]);
			}
                }
                else if (respuestanum == 2){
                    for(int i=0;i<size;i++){
                        if (alas[i].getColor() == "AZUL")
                           color.push_back(alas[i]);
			}
                }
                else if(respuestanum == 3){
                    for(int i=0;i<size;i++){
                        if (alas[i].getColor() == "BLANCO")
                           color.push_back(alas[i]);
			}
                }
                else if(respuestanum == 4){
                    for(int i=0;i<size;i++){
                        if (alas[i].getColor() == "GRIS")
                           color.push_back(alas[i]);
			}
                }
                else if (respuestanum == 5){
                    for(int i=0;i<size;i++){
                        if (alas[i].getColor() == "MARRON")
                           color.push_back(alas[i]);
			}
                }
                else if (respuestanum == 6){
                    for(int i=0;i<size;i++){
                        if (alas[i].getColor() == "MORADO")
                           color.push_back(alas[i]);
			}
                }
                else if (respuestanum == 7){
                    for(int i=0;i<size;i++){
                        if (alas[i].getColor() == "NARANJA")
                           color.push_back(alas[i]);
			}
                }
                else if (respuestanum == 8){
                    for(int i=0;i<size;i++){
                        if (alas[i].getColor() == "ROJO")
                           color.push_back(alas[i]);
			}
                }
                else if (respuestanum== 9){
                    for(int i=0;i<size;i++){
                        if (alas[i].getColor() == "ROSA")
                           color.push_back(alas[i]);
			}
                }
                
                else if (respuesta == 'X'){
                    cout<<"Entendido entrenador, pasamos a la siguiente pregunta."<<endl;
                    for(int i=0;i<alas.size();i++){
                        color.push_back(alas[i]);
			}
                }
                size = color.size();
                break;
            case 4:
                
                cout<<q1<< "¿Cu"<<a<<"ntos ojos tiene?" <<endl<< '0' <<endl<< '1'<<endl<< '2' <<endl<<"OTRO (7)" <<endl<< "NSNC (X)"<<endl;
                cin>> respuestanum;
                if (respuestanum==0){
                    for(int i=0;i<size;i++){
                        if (color[i].getOjos() ==0)
                           ojos.push_back(color[i]);
			}
                }
                else if (respuestanum == 1){
                    for(int i=0;i<size;i++){
                        if (color[i].getOjos() ==1)
                           ojos.push_back(color[i]);

                }
        	}
                else if (respuestanum == 2){
                     for(int i=0;i<size;i++){
                        if (color[i].getOjos() ==2)
                           ojos.push_back(color[i]);
			}
                }
                else if (respuestanum == 7){
                     for(int i=0;i<size;i++){
                        if (color[i].getOjos() ==7)
                           ojos.push_back(color[i]);
			}
                }
                else if (respuestanum == 'X'){
                    cout<<"Entendido entrenador, pasamos a la sguiente pregunta."<<endl;
                     for(int i=0;i<size;i++){
                        ojos.push_back(color[i]);
			}
                }
                size = ojos.size();
                break;
            
            case 5:
                
                cout<<q1<<"Cu"<<a<<"ntas patas tiene?" <<endl<< '0' <<endl<< '2'<<endl<< '4' <<endl<<"OTRO (7)" <<endl<< "NSNC (X)"<<endl;
                cin>> respuestanum;
                if (respuestanum== 0){
                     for(int i=0;i<size;i++){
                        if (ojos[i].getPatas() ==0)
                           patas.push_back(ojos[i]);
			}
                }
                else if (respuestanum == 2){
                    for(int i=0;i<size;i++){
                        if (ojos[i].getPatas() ==2)
                           patas.push_back(ojos[i]);
			}
                }
                else if (respuestanum == 4){
                    for(int i=0;i<size;i++){
                        if (ojos[i].getPatas() ==4)
                           patas.push_back(ojos[i]);
			}
                }
                else if (respuestanum == 7){
                    for(int i=0;i<size;i++){
                        if (ojos[i].getPatas() ==7)
                           patas.push_back(ojos[i]);
			}                    
                }
                else if (respuesta == 'X'){
                    cout<<"Entendido entrenador, pasamos a la siguiente pregunta."<<endl;
                    for(int i=0;i<size;i++){
                       patas.push_back(ojos[i]);
			}                           
                }
                size = patas.size();
                break;      
            
            case 6:
                
                cout<<q1<<"¿Cu"<<a<<"l es su tipo principal?"<<endl<<"NORMAL (1)" <<endl<<"FUEGO (2)" <<endl<<"AGUA (3)" <<endl<< "ELECTRICO (4)" <<endl<< "PLANTA (5)" <<endl<< "LUCHA (6)" <<endl<< "VENENO (7)" <<endl<< "TIERRA (8)" <<endl<< "VOLADOR (9)" <<endl<< "PSIQUICO (10)"<<endl<< "BICHO (11)" <<endl<< "ROCA (12)"<<endl<< "FANTASMA (13)"<<endl<< "DRAGON (14)" <<endl<< "HIELO (15)" <<endl;

                cin>> respuestanum; 
                if (respuestanum==1){
                    for(int i=0;i<size;i++){
                        if (patas[i].getTipoPrincipal() ==1)
                           tipoPrincipal.push_back(patas[i]);
                   
			}
                }
                else if (respuestanum == 2){
                    for(int i=0;i<size;i++){
                        if (patas[i].getTipoPrincipal() ==2)
                           tipoPrincipal.push_back(patas[i]);
			}
                }
                else if(respuestanum == 3){
                    for(int i=0;i<size;i++){
                        if (patas[i].getTipoPrincipal() ==3)
                           tipoPrincipal.push_back(patas[i]);
			}
                }
                else if(respuestanum == 4){
                    for(int i=0;i<size;i++){
                        if (patas[i].getTipoPrincipal() ==4)
                           tipoPrincipal.push_back(patas[i]);
			}
                }
                else if (respuestanum == 5){
                    for(int i=0;i<size;i++){
                        if (patas[i].getTipoPrincipal() ==5)
                           tipoPrincipal.push_back(patas[i]);
			}
                }
                else if (respuestanum == 6){
                    for(int i=0;i<size;i++){
                        if (patas[i].getTipoPrincipal() ==6)
                           tipoPrincipal.push_back(patas[i]);
			}
                }
                else if (respuestanum == 7){
                    for(int i=0;i<size;i++){
                        if (patas[i].getTipoPrincipal() ==7)
                           tipoPrincipal.push_back(patas[i]);
			}
                }
                else if (respuestanum == 8){
                    for(int i=0;i<size;i++){
                        if (patas[i].getTipoPrincipal() ==8)
                           tipoPrincipal.push_back(patas[i]);
			}
                }
                else if (respuestanum == 9){
                    for(int i=0;i<size;i++){
                        if (patas[i].getTipoPrincipal() ==9)
                           tipoPrincipal.push_back(patas[i]);
			}
                }
                
                else if (respuestanum == 10){
                    for(int i=0;i<patas.size();i++){
                        if (patas[i].getTipoPrincipal() ==10)
                           tipoPrincipal.push_back(patas[i]);
			}           			         
                }
                else if (respuestanum == 11){
                    for(int i=0;i<size;i++){
                        if (patas[i].getTipoPrincipal() ==11)
                           tipoPrincipal.push_back(patas[i]);
 			}                   
                }
                else if (respuestanum == 12){
                    for(int i=0;i<size;i++){
                        if (patas[i].getTipoPrincipal() ==12)
                           tipoPrincipal.push_back(patas[i]);
 			}                   
                }
                else if (respuestanum == 13){
                    for(int i=0;i<size;i++){
                        if (patas[i].getTipoPrincipal() ==13)
                           tipoPrincipal.push_back(patas[i]);
			}                    
                }
                else if (respuestanum == 14){
                    for(int i=0;i<size;i++){
                        if (patas[i].getTipoPrincipal() ==14)
                           tipoPrincipal.push_back(patas[i]);
			}                    
                }
                else if (respuestanum == 15){
                    for(int i=0;i<size;i++){
                        if (patas[i].getTipoPrincipal() ==15)
                           tipoPrincipal.push_back(patas[i]);
			}                    
                }
                size = tipoPrincipal.size();
                break;
            case 7:
                 
                cout<<q1<<"¿Cu"<<a<<"l es su tipo secundario?"<<endl<< "NO TIENE (0)" <<endl<< "NORMAL (1)" <<endl<<"FUEGO (2)" <<endl<<"AGUA (3)" <<endl<< "ELECTRICO (4)" <<endl<< "PLANTA (5)" <<endl<< "LUCHA (6)" <<endl<< "VENENO (7)" <<endl<< "TIERRA (8)" <<endl<< "VOLADOR (9)" <<endl<< "PSIQUICO (10)"<<endl<< "BICHO (11)" <<endl<< "ROCA (12)"<<endl<< "FANTASMA (13)"<<endl<< "DRAGON (14)" <<endl<< "HIELO (15)" <<endl;

                cin>> respuestanum; 
                if (respuestanum==0){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==0)
                           tipoSecundario.push_back(tipoPrincipal[i]);
			}
                }
                else if (respuestanum == 1){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==1)
                           tipoSecundario.push_back(tipoPrincipal[i]);
                    
			}
                }
                else if (respuestanum == 2){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==2)
                           tipoSecundario.push_back(tipoPrincipal[i]);
			}
                }
                else if(respuestanum == 3){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==3)
                           tipoSecundario.push_back(tipoPrincipal[i]);
			}
                }
                else if(respuestanum == 4){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==4)
                           tipoSecundario.push_back(tipoPrincipal[i]);
			}
                }
                else if (respuestanum == 5){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==5)
                           tipoSecundario.push_back(tipoPrincipal[i]);
			}
                }
                else if (respuestanum == 6){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==6)
                           tipoSecundario.push_back(tipoPrincipal[i]);
			}
                }
                else if (respuestanum == 7){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==7)
                           tipoSecundario.push_back(tipoPrincipal[i]);
			}
                }
                else if (respuestanum == 8){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==8)
                           tipoSecundario.push_back(tipoPrincipal[i]);
			}
                }
                else if (respuestanum == 9){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==9)
                           tipoSecundario.push_back(tipoPrincipal[i]);
			}
                }
                
                else if (respuestanum == 10){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==10)
                           tipoSecundario.push_back(tipoPrincipal[i]);
			}                    
                }
                else if (respuestanum == 11){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==11)
                           tipoSecundario.push_back(tipoPrincipal[i]);
			}                    
                }
                else if (respuestanum == 12){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==12)
                           tipoSecundario.push_back(tipoPrincipal[i]);
			}                    
                }
                else if (respuestanum == 13){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==13)
                           tipoSecundario.push_back(tipoPrincipal[i]);
 			}                   
                }
                else if (respuestanum == 14){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==14)
                           tipoSecundario.push_back(tipoPrincipal[i]);
			}
                }
                else if (respuestanum == 15){
                    for(int i=0;i<size;i++){
                        if (tipoPrincipal[i].getTipoSecundario() ==15)
                           tipoSecundario.push_back(tipoPrincipal[i]);
			}
                }
                size = tipoSecundario.size();
                break;
            case 8:
                
                cout<<q1<<"¿A qu"<<e<<" animal se parece?"<<endl<<"AVE (1)" <<endl<< "ANFIBIO (2)" <<endl<< "DRAGON (3)" <<endl<< "HUMANO (4)" <<endl<< "INSECTO (5)"<<endl<< "MAMIFERO (6)" <<endl<< "PEZ (7)" <<endl<< "PLANTA (8)" <<endl<< "REPTIL (9)" <<endl<< " OTRO (0)" <<endl<< "NSNC (X)" <<endl;

                cin>> respuestanum; 
                if (respuestanum=='X'){
                    for(int i=0;i<size;i++){
                        fisiologia.push_back(tipoSecundario[i]);
 			}       

                }
                else if (respuestanum == 1){
                    for(int i=0;i<size;i++){
                        if (tipoSecundario[i].getFisiologia() == "AV")
                         fisiologia.push_back(tipoSecundario[i]);
			}
                }
                else if (respuestanum == 2){
                     for(int i=0;i<size;i++){
                        if (tipoSecundario[i].getFisiologia() == "AN")
                         fisiologia.push_back(tipoSecundario[i]);
			}
                }
                else if(respuestanum == 3){
                     for(int i=0;i<size;i++){
                        if (tipoSecundario[i].getFisiologia() == "DR")
                         fisiologia.push_back(tipoSecundario[i]);
			}
                }
                else if(respuestanum == 4){
                     for(int i=0;i<size;i++){
                        if (tipoSecundario[i].getFisiologia() == "HU")
                         fisiologia.push_back(tipoSecundario[i]);
			}
                }
                else if (respuestanum == 5){
                     for(int i=0;i<size;i++){
                        if (tipoSecundario[i].getFisiologia() == "IN")
                         fisiologia.push_back(tipoSecundario[i]);
                        
			}
			 }
                else if (respuestanum == 6){
                     for(int i=0;i<size;i++){
                        if (tipoSecundario[i].getFisiologia() == "MA")
                         fisiologia.push_back(tipoSecundario[i]);
                }
                
				}
                else if (respuestanum == 7){
                     for(int i=0;i<size;i++){
                        if (tipoSecundario[i].getFisiologia() == "PE")
                         fisiologia.push_back(tipoSecundario[i]);
			}
                }
                else if (respuestanum == 8){
                     for(int i=0;i<size;i++){
                        if (tipoSecundario[i].getFisiologia() == "PL")
                         fisiologia.push_back(tipoSecundario[i]);
			}
                }
                else if (respuestanum == 9){
                     for(int i=0;i<size;i++){
                        if (tipoSecundario[i].getFisiologia() == "RE")
                         fisiologia.push_back(tipoSecundario[i]);
			}
                }
                else if (respuestanum == 0){
                     for(int i=0;i<size;i++){
                        if (tipoSecundario[i].getFisiologia() == "OTRO")
                         fisiologia.push_back(tipoSecundario[i]);
			}
                }
                
               
                size = fisiologia.size();
                break;
      

            default:
                break;

        }
        pregunta++;
    }while((pregunta != 9)&&(size != 1)); // Tras cada respuesta, realiza una comrobación en la que si nos encontramos en una pregunta que no sea la nº 9 y el vector tiene un tamaño diferente de 1, se pasa a la siguiente pregunta. 
	if (size != 1){ //Cuando el vector es distinto de 1, y se han realizado todas las preguntas, el sistema no ha encontrado un único pokémon que cumpla con dichas características.
		cout<<"Lo siento, entrenador. No he podido encontrar ning"<<u<<"n pok"<<e<<"mon con esas caracter"<<i<<"sticas"<<endl;
	}
	else{
		cout<<e1<< "El pok"<<e<<"mon descrito coincide con uno de nuestra base de datos!"<<endl; // El caso contrario al anterior, es en el que sí se encuentra un pokémon.
		if (pregunta == 1){
			cout<<"El pok"<<e<<"mon es... "<<aletas[0].getNombre()<<endl; //En función, de la pregunta en la que se obtenga un vector de tamaño igual a 1, la función "getNombre" busca en un vector u otro.
		}
		if (pregunta == 2){
			cout<<"El pok"<<e<<"mon es... "<<cola[0].getNombre()<<endl;
		}
		if (pregunta == 3){
			cout<<"El pok"<<e<<"mon es... "<<alas[0].getNombre()<<endl;
		}
		if (pregunta == 4){
			cout<<"El pok"<<e<<"mon es... "<<color[0].getNombre()<<endl;
		}
		if (pregunta == 5){
			cout<<"El pok"<<e<<"mon es... "<<ojos[0].getNombre()<<endl;
		}
		if (pregunta == 6){
			cout<<"El pok"<<e<<"mon es..."<<patas[0].getNombre()<<endl;
		}
		if (pregunta == 7){
			cout<<"El pok"<<e<<"mon es... "<<tipoPrincipal[0].getNombre()<<endl;
		}
		if (pregunta == 8){
			cout<<"El pok"<<e<<"mon es... "<<tipoSecundario[0].getNombre()<<endl;
		}
		if (pregunta == 9){
			cout<<"El pok"<<e<<"mon es... "<<fisiologia[0].getNombre()<<endl;
		}

	}
	cout<<"Pulsa una tecla e intro para salir"<<endl;
	cin>> pregunta; 
	return 0;
}

