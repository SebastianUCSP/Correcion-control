
#include <iostream>

using namespace std;

void imprimir_nums(int x){
    for(int i = 1; i < x-1; i++){
        if(i % 2 == 0)
            cout << i << ", ";
    }
    if(x % 2 == 0)
        cout << x;
    else if((x-1) % 2 == 0)
        cout << x-1;
}

int suma(int arr[], int tam)
{
   if (tam == 0)
   {
      return 0;
   }
   return suma(arr, tam-1) + arr[tam-1];
}

int longitud(char *str){
    int cont = 0;
    for(int i = 0; str[i] != '\0'; i++)
        cont ++;
    return cont;
}

bool palindrome(char *str, int lon, int idx = 0){
    if(idx == lon)
        return true;
    char *ultimo = str + lon - 1 - idx;
    if(*ultimo == str[idx])
        return palindrome(str, lon, ++idx);
    else
        return false;
}

int casteo(char caracter){
    int temp = static_cast<int>(caracter);
    return temp;
}

void swap(char x, char y){
    int temp = x;
    x = y;
    y = temp;
}

void ordenar(char *arr[],int tam){
	char *temp;
	int i, j;
    for(i=0; i<tam-1; i++){
		for(j=i+1; j<tam; j++){
			if(casteo(*arr[i]) > casteo(*arr[j])){
                swap(arr[i], arr[j]);
			}
		}
	}
}


int main()
{
    imprimir_nums(20);

    cout << endl;

    int arr1[] = {1,2,5,7};
    int arr2[] = {3,6,2,1};

    cout << suma(arr1, 4) << endl;
    cout << suma(arr2, 4) << endl;


    char str[] = "anitalavalatina";

    int x = longitud(str);

    cout << palindrome(str, x) << endl;

    char str2[] = "hola";

    cout << palindrome(str2, 4) << endl;


    char *arr[4] = {"perro", "gato", "abeja","burro"};

    ordenar(arr,4);
    cout<<"Orden alfabetico: " << endl;
    for(int i=0; i<4; i++){
    cout<<arr[i]<<endl;

}

}
