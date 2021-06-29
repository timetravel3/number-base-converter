#include<iostream>
#include<math.h>
#include<string>
#include<process.h>
#include<vector>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void decimale();
void binario();
void ottale();
void esadecimale();
/////////////////////////////////////////////
void svo10(std::string decimale);
void svo2(int decimale, std::string inizio);
void svo8(int decimale, std::string inizio);
void svo16(int decimale, std::string inizio);
/////////////////////////////////////////////////////////////////////////////////////////////////////////				
int base;
int basefinale;
////////////////////////////////////////////////////////////////////////////////////////////////////////				
int main(){
	
	system("color c0");
	char start='s';
	do{
			system("cls");
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*             Conversione basi                 *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*               1. decimale                    *"<<std::endl
			    <<"*               2. binario                     *"<<std::endl
			    <<"*               3. ottale                      *"<<std::endl
			    <<"*               4. esadecimale                 *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
			std::cin>>base;
			
			switch(base){
				case 1:
					base=10;
					decimale();
					break;
					
				case 2:
					base=2;
					binario();
					break;
					
				case 3:
					base=8;
					ottale();
					break;
					
				case 4:
					base=16;
					esadecimale();
					break;
					
				default:
				std::cout<<"ERRORE"<<std::endl;
				system("pause");
				break;	
					
			}
			
			system("cls");
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*             vuoi continuare?                 *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                   s/n                        *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
		std::cin>>start;}while(start=='s');
return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void decimale(){
	std::string decimale;
	system("cls");
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*           scrivi numero decimale             *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
			    std::cin>>decimale;
			    
			    system("cls");
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*               base finale                    *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*               1. binario                     *"<<std::endl
			    <<"*               2. ottale                      *"<<std::endl
			    <<"*               3. esadecimale                 *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
			    std::cin>>basefinale;
			    
			    switch(basefinale){
					
				case 1:
					basefinale=2;
					svo10(decimale);
					break;
					
				case 2:
					basefinale=8;
					svo10(decimale);
					break;
					
				case 3:
					basefinale=16;
					svo10(decimale);
					break;
					
				default:
				std::cout<<"ERRORE"<<std::endl;
				system("pause");
				break;}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
void binario(){
		std::string binario;
	system("cls");
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*           scrivi numero binario              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
			    std::cin>>binario;
			    
			    system("cls");
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*               base finale                    *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*               1. decimale                    *"<<std::endl
			    <<"*               2. ottale                      *"<<std::endl
			    <<"*               3. esadecimale                 *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
			    std::cin>>basefinale;
			    
			    switch(basefinale){
					
				case 1:
					basefinale=10;
					svo10(binario);
					break;
					
				case 2:
					basefinale=8;
					svo10(binario);
					break;
					
				case 3:
					basefinale=16;
					svo10(binario);
					break;
					
				default:
				std::cout<<"ERRORE"<<std::endl;
				system("pause");
				break;}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void ottale(){
	std::string ottale;
	system("cls");
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*           scrivi numero ottale               *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
			    std::cin>>ottale;
			    
			    system("cls");
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*               base finale                    *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*               1. decimale                    *"<<std::endl
			    <<"*               2. binario                     *"<<std::endl
			    <<"*               3. esadecimale                 *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
			    std::cin>>basefinale;
			    
			    switch(basefinale){
					
				case 1:
					basefinale=10;
					svo10(ottale);
					break;
					
				case 2:
					basefinale=2;
					svo10(ottale);
					break;
					
				case 3:
					basefinale=16;
					svo10(ottale);
					break;
					
				default:
				std::cout<<"ERRORE"<<std::endl;
				system("pause");
				break;}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void esadecimale(){
	std::string esadecimale;
	system("cls");
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*           scrivi numero esadecimale          *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
			    std::cin>>esadecimale;
			    
			    system("cls");
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*               base finale                    *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*               1. decimale                    *"<<std::endl
			    <<"*               2. ottale                      *"<<std::endl
			    <<"*               3. binario                     *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
			    std::cin>>basefinale;
			    
			    switch(basefinale){
					
				case 1:
					basefinale=10;
					svo10(esadecimale);
					break;
					
				case 2:
					basefinale=8;
					svo10(esadecimale);
					break;
					
				case 3:
					basefinale=2;
					svo10(esadecimale);
					break;
					
				default:
				std::cout<<"ERRORE"<<std::endl;
				system("pause");
				break;}
						
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void svo10(std::string numero){
					std::string inizio=numero;
																				//str in int
					int dec,esp,cha;
					esp=numero.size()-1;
					
					if(base==2){	
					for(int i=0;i<numero.size();i++){					//2-->10
	    			dec+=(int(numero[i])-48)*pow(2, esp);
					esp--;
					if(numero[i]>49)  // contollo solo 1 e 0
					basefinale=0;}
					}
					
					if(base==8){									 //8-->10
					for(int i=0;i<numero.size();i++){   //tolto 8 9
					if((int(numero[i])-48)>7)
					basefinale=0;}
		
					for(int i=0;i<numero.size();i++){
					dec+=pow(8,esp)*(int(numero[i])-48);
					esp--;	}
					}
																		//16-->10
					if(base==16){
					for(int i=0;i<numero.size();i++){
				cha=int(numero[i]);
				if(cha>47 & cha<58)        //0-9
					cha-=48;
				else if(cha>64 & cha<71)   //A-F
					cha-=55;
				else if(cha>96 & cha<103)   //a-f
					cha-=87;
				else{		
					std::cout<<"NUMERO ERRATO";
					basefinale=1;
					break;}
			   dec+=pow(16,esp)*cha;
			esp--;} }
																		//10-->10
			if(base==10){
						int p=1;
						for(int i=numero.size()-1;i>=0;i--){
				cha=int(numero[i]);
				if(cha>47 & cha<58)        //0-9
					cha-=48;
				else{		
					std::cout<<"NUMERO ERRATO";
					break;}
			   dec+=cha*p;
			   p*=10;} 
			   std::cout<<dec<<std::endl; 
					}
					
					
					
					
					
				
					if(basefinale==10 & dec!=0){          //base finali
						system("cls");
			 std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                  RISULTATO                   *"<<std::endl
			    <<"            "<<base<<": "<<inizio<<"-->10: "<<dec<<" "<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
			    system("pause");}
			    else 
			    if(basefinale==10){          //base finali
						system("cls");
			 std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                  RISULTATO                   *"<<std::endl
			    <<"                       0                        "<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
			    system("pause");}
			    
			    else if(basefinale==2){   //10-->2
				
			    svo2(dec, inizio);}
			    else if(basefinale==8){   //10-->8
				
			    svo8(dec, inizio);}
			    else if(basefinale==16){ //10-->16
				
			    svo16(dec, inizio);}
				
				}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////				
void svo2(int decimale, std::string inizio){
					std::string binario;
					int cont0=decimale;
					while(decimale>0){
				binario.push_back(char(decimale%2+48));
				decimale=decimale/2;}	 
				
				std::string invert;   //inverto la stringha
		int j=binario.size()-1;
		for(int i = binario.size()-1;i>=0;i--){
			invert.push_back(binario[i]);
			j--;
		}
				if(cont0==0){system("cls");
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                  RISULTATO                   *"<<std::endl
			    <<"                       0                         "<<std::endl
	            <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
			
				system("pause");}
				else if(base!=10){
				
				system("cls");	
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                  RISULTATO                   *"<<std::endl
			    <<"       "<<base<<": "<<inizio<<"-->10: "<<cont0<<"-->2:"<<invert<<"   "<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
				system("pause");}
				else{
					
					system("cls");
		     std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                  RISULTATO                   *"<<std::endl
			    <<"                 10: "<<inizio<<"-->2: "<<invert<<"    "<<std::endl
	            <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
			
				system("pause");}}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////				
void svo8(int decimale, std::string inizio){
					std::string ottale;
					int cont0=decimale;
					while(decimale>0){
				ottale.push_back(char(decimale%8+48));
				decimale=decimale/8;}
				
					
			 std::string invert;   //inverto la stringha
		int j=ottale.size()-1;
		for(int i = ottale.size()-1;i>=0;i--){
			invert.push_back(ottale[i]);
			j--;
		}
				if(cont0==0){	system("cls");
			 std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                  RISULTATO                   *"<<std::endl
			    <<"                      0                          "<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
				
				system("pause");
				}
				else if(base!=10){
				
				system("cls");	
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                  RISULTATO                   *"<<std::endl
			    <<"       "<<base<<": "<<inizio<<"-->10: "<<cont0<<"-->8: "<<invert<<"   "<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
				system("pause");}	
				else{
				
					system("cls");
			 std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                  RISULTATO                   *"<<std::endl
			    <<"               10: "<<inizio<<"-->8: "<<invert<<"   "<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
				
				system("pause");}}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////				
void svo16(int decimale, std::string inizio){
					std::string esadecimale;
					int cont0=decimale;
					while(decimale>0){
    			switch(decimale%16){
		
		        case 0:
					esadecimale.push_back('0');
					break;
			
				case 1:
					esadecimale.push_back('1');
					break;
			
				case 2:
					esadecimale.push_back('2');
					break;
			
				case 3:
					esadecimale.push_back('3');
					break;
			
				case 4:
					esadecimale.push_back('4');
					break;
			
				case 5:
					esadecimale.push_back('5');
					break;
			
				case 6:
					esadecimale.push_back('6');
					break;
			
				case 7:
					esadecimale.push_back('7');
					break;
			
				case 8:
					esadecimale.push_back('8');
					break;
			
				case 9:
					esadecimale.push_back('9');
					break;
			
				case 10:
					esadecimale.push_back('A');
					break;
			
				case 11:
					esadecimale.push_back('B');
					break;
			
				case 12:
					esadecimale.push_back('C');
					break;
			
				case 13:
					esadecimale.push_back('D');
					break;
			
				case 14:
					esadecimale.push_back('E');
					break;
			
				case 15:
					esadecimale.push_back('F');
					break;
			
				default:
					break;
			}
			decimale=decimale/16;}
		
		std::string invert;   //inverto la stringha
		int j=esadecimale.size()-1;
		for(int i = esadecimale.size()-1;i>=0;i--){
			invert.push_back(esadecimale[i]);
			j--;
		}
				if(cont0==0){
					system("cls");	
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                  RISULTATO                   *"<<std::endl
			    <<"                       0                         "<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
				system("pause");
				}	
				else if(base!=10){
				
				system("cls");	
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                  RISULTATO                   *"<<std::endl
			    <<"              "<<base<<": "<<inizio<<"-->10: "<<cont0<<"-->16: "<<invert<<"   "<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
				system("pause");}
				else{
				
				system("cls");	
	   std::cout<<"************************************************"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                  RISULTATO                   *"<<std::endl
			    <<"          10: "<<inizio<<"-->16: "<<invert<<"   "<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"*                                              *"<<std::endl
			    <<"************************************************"<<std::endl;
				system("pause");}
}





