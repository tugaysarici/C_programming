// Array Tanımlama
int numbers[10];
float myArray[3284];

// Yukarıdaki array örnekleri local tanımlanırsa elemanları "rastgele" değerler alır. Global tanımlanırsa "0" değerini alır.
int array[5] = {10, 8, 36, 9, 13}; // Burada {10} olsa geri kalan elemanlar 0 olacaktı. Fazla eleman olsa syntax error

int array[5]; // Bu satırda hata yok.
array = {10, 8, 36, 9, 13}; // syntactically error

// Array'i Parametre olarak geçirme
// Array'in ismi, ilk elemanının adresidir.
int myArray[24];
myFunction(myArray, 24); //boyutu genellikle geçirilir

void modifyArray( int b[], int arraySize);

// Dizi içeriğini fonksiyonda atama
void read_array(int ar[10]){
	int i;
	for (i=0;i<10;i++)
		scanf("%d", &ar[i]);
}
int main(int argc, char *argv[]) {
	int a[10], i;
	read_array(a);
	for (i=0;i<10;i++)
	printf("%d ", a[i]);	
	return 0;
}
