	#include <iostream>

	using namespace std;

	struct alumno 
	{
		int control;
		char nombre[50];
		char apellidos[50];
		char ing[50];
		int sem;
	};
	
	int main(){
		int n_alum;
		setlocale(LC_CTYPE,"Spanish");
		
		cout << "Ingresa el n�mero de alumnos: " ;
        cin >> n_alum;
		struct alumno alum[n_alum];
		
	
		for (int i=0; i<n_alum; i++){
			system("cls");
			cout << "\n\tIngresa datos del alumno: " << i+1;
			cout << "\n\t===========================";
			cout << "\n\tN�mero de control: ";
        	cin >> alum[i].control;
        	while(getchar()!='\n');
        	cout << "\n\tNombre: ";
        	gets(alum[i].nombre);
        	cout << "\n\tApellido: ";
        	gets(alum[i].apellidos);
        	cout << "\n\tIngenier�a: ";
        	gets(alum[i].ing);
        	cout << "\n\tSemestre: ";
        	cin >> alum[i].sem;
        	while(getchar()!='\n'); //Bucle que vac�a buffer de entrada
       	}
       	
       	system("cls");
       	
       	cout << "\tControl\t\tNombre\t\tApellido\tIngenier�a\tSemestre";
       	cout << "\n\t================================================================\n";
		for (int i=0; i<n_alum; i++){
        	cout << "\t" << alum[i].control <<"\t\t"<<  alum[i].nombre <<"\t\t"<<  +
			alum[i].apellidos <<"\t\t"<< alum[i].ing <<"\t\t"<< alum[i].sem << "\n";
    	}
    	
    	cout << "\n\n";
		system("PAUSE");
		return 0;	
	}	
