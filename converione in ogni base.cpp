#include<iostream>
#include<math.h>
#include<string>
#include<process.h>
using namespace std;
int main(){
	int base,basefinale;
	system("color f0");
	char start='s';
	do{
			system("cls");
			cout<<"CONVERSIONI IN OGNI BASE"<<endl;
			cout<<"scrivi base iniziale(10,2,16,8):";
			cin>>base;
			cout<<"scrivi base finale(10,2,16,8):";
			cin>>basefinale;
			if(basefinale!=10 & basefinale!=2 & basefinale!=16 & basefinale!=8)
				base=1;
			if(basefinale==base)
				base=1;
			string esadecimale;
			string ottale;
			int decimale=0,decimale1,decimale2;
			string binario;
			int esp,i;
	
			if(base==2){					//base 2
    			cout<<"inserisci binario:";
				cin>>binario;
				esp=binario.size()-1;
				for(i=0;i<binario.size();i++){					//2-->10
	    			decimale+=(int(binario[i])-48)*pow(2, esp);
					esp--;
					if(binario[i]>49)  // contollo solo 1 e 0
					return 0;} 
		
				if(basefinale==10)
					cout<<"numero decimale:"<<decimale;
					decimale1=decimale; 
					decimale2=decimale;
	 
	                            //2-->10-->8
				while(decimale1>0){
					ottale.push_back(char(decimale1%8+48));
					decimale1=decimale1/8;}	
				if(decimale==0 & basefinale==8)
					cout<<"numero ottale:0"; 
				else if(basefinale==8){
					cout<<"numero ottale:"; 
					for(i=ottale.size()-1;i>=0;i--){
						cout<<ottale[i];}	}
		
		
	                            //2-->10-->16
				while(decimale2>0){
    				switch(decimale2%16){
		
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
			
		
					decimale2=decimale2/16;
								}
			if(decimale==0 & basefinale==16) 
				cout<<"numero esadecimale:0";
			else if(basefinale==16){
				cout<<"numero esadecimale:";
				for(i=esadecimale.size()-1;i>=0;i--){
					cout<<esadecimale[i];}	}
										
		}
		else if(base==10){				//base10
			cout<<"inserisci numero decimale:";
			cin>>decimale;
		decimale1=decimale;
		decimale2=decimale;
		int decimale3=decimale;
                           //10-->2
			while(decimale1>0){
				binario.push_back(char(decimale1%2+48));
				decimale1=decimale1/2;}	
			if(decimale==0 & basefinale==2)
				cout<<"numero binario:0";
			else if(basefinale==2){
	    		cout<<"numero binario:"; 
				for(i=binario.size()-1;i>=0;i--)
					cout<<binario[i];}
		
		
		                           //10-->8
			while(decimale2>0){
				ottale.push_back(char(decimale2%8+48));
				decimale2=decimale2/8;}	
			if(decimale==0 & basefinale==8)
				cout<<"numero ottale:0";
			else if(basefinale==8){
				cout<<"numero ottale:"; 
				for(i=ottale.size()-1;i>=0;i--)
					cout<<ottale[i];}
		
		
                            //10-->16	
			while(decimale3>0){
    			switch(decimale3%16){
		
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
			decimale3=decimale3/16;}
		if(decimale==0 & basefinale==16)
			cout<<"numero esadecimale:0";
		else if(basefinale==16){
			cout<<"numero esadecimale:";	
			for(i=esadecimale.size();i>=0;i--)
				cout<<esadecimale[i];}


}
		else if(base==8){				//base 8
			cout<<"scrivi numero ottale:";
			cin>>ottale;
			for(i=0;i<ottale.size();i++){   //tolto 8 9
				if((int(ottale[i])-48)>7)
				return 0;}

						//8-->10
			esp=ottale.size()-1;		
			for(i=0;i<ottale.size();i++){
				decimale+=pow(8,esp)*(int(ottale[i])-48);
			esp--;	}   
			 if(basefinale==10)
				cout<<"decimale:"<<decimale;
			decimale1=decimale;
			decimale2=decimale;

                           //8-->10-->2
			while(decimale1>0){
				binario.push_back(char(decimale1%2+48));
				decimale1=decimale1/2;}	
			if(decimale==0 & basefinale==2)
				cout<<"numero binario:0";
			else if(basefinale==2){
				cout<<"numero binario:"; 
				for(i=binario.size()-1;i>=0;i--)
					cout<<binario[i];}

                            //8-->10-->16
	
			while(decimale2>0){
   				switch(decimale2%16){
		
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
			
		
			decimale2=decimale2/16;}
		if(decimale==0 & basefinale==16)
			cout<<"numero esadecimale:0";
		else if(basefinale==16){
			cout<<"numero esadecimale:";
			for(i=esadecimale.size()-1;i>=0;i--)
				cout<<esadecimale[i];}	
			}
		else if(base==16){              //base 16
			cout<<"scrivi numero esadecimale:";
			cin>>esadecimale;
			int chesad;						//16-->10
			esp=esadecimale.size()-1;		
			for(i=0;i<esadecimale.size();i++){
				chesad=int(esadecimale[i]);
				if(chesad>47 & chesad<58)        //0-9
					chesad-=48;
				else if(chesad>64 & chesad<71)   //A-F
					chesad-=55;
				else if(chesad>96 & chesad<103)   //a-f
					chesad-=87;
				else{		
					cout<<"NUMERO ERRATO";
					basefinale=1;
					break;}
	
			decimale+=pow(16,esp)*chesad;
			esp--;} 
		if(basefinale==10)
			cout<<"decimale:"<<decimale;
		decimale1=decimale;
		decimale2=decimale;

                           //16-->10-->2
		while(decimale1>0){
			binario.push_back(char(decimale1%2+48));
			decimale1=decimale1/2;}	
			if(decimale==0 & basefinale==2)
				cout<<"numero binario:0";
			else if(basefinale==2){
				cout<<"numero binario:"; 
				for(i=binario.size()-1;i>=0;i--)
					cout<<binario[i];}
	                            //16-->10-->8
		while(decimale2>0){
			ottale.push_back(char(decimale2%8+48));
			decimale2=decimale2/8;}	
		if(decimale==0 & basefinale==8)
			cout<<"numero ottale:0";
		else if(basefinale==8){
		cout<<"numero ottale:"; 
		for(i=ottale.size()-1;i>=0;i--)
		cout<<ottale[i];}}
		else
			cout<<"base errata";	
		cout<<endl;	
		cout<<endl<<"vuoi continuare? (s/n)"<<endl;
		cin>>start;}while(start=='s');
return 0;
}

