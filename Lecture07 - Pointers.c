// Normal değişkenler belirli bir değeri içerirken(direct reference) Pointerlar bu değişkenlerin adresini içerir(indirect reference).
int *myPtr1, *myPtr2;

// 0, NULL ya da bir adrese ayarlanmalı. 0 ve NULL için hiçbir şeye işaret etmez.

// & adres operatörü
int y = 5;
int *yPtr;
yPtr = &y; //myPtr, y'nin adresini alır. *yPtr ise y'nin değerini döndürür.

// Mainde çağırılan fonksiyon ile maindeki değişkeni değiştirme
void func(int *d){
	*d = 10;
}
int main(int argc, char *argv[]) {
	int num = 5;
	func(&num);	
	printf("%d", num);
	return 0;
}

// Argumanlar bir fonksiyona Value ya da Reference ile geçebilir.
// C otomatik olarak array'in başlangıç konumunu geçirir.
// Array'in ismi, onun başlangıç konumuna eşitti. &arrayName[0]
// Yani tek boyutlu dizi main'den parametre olarak verilirken sadece ismini yazmak kafi.
// ++ -- += -= + - operatörleri pointerlar ile kullanılabilir. Pointerlar kendi aralarında işleme tabi tutulabilir.

// const değişmesi istenmeyen durumlarda kullanılıyordu.
// const pointer da hep aynı bellek bölgesine işaret edecek.
int *const myPtr = &x;
const int *myPtr = &x;
const int *const myPtr = &x;
// Yukarıdaki 3 tabir hemen hemen aynı.

int main(void){
  int x;
  int y;
  int *const ptr = &x;
  *ptr = 7; //izin verilir. int'ten önce de bir tane const olursa buna da izin verilmez.
  ptr = &y; //izin verilmez
}

// sizeof Operatörü
// size_t türü gibi toplam byte sayısını döndürür.
double real[22];
int size = sizeof(real) / sizeof(real[0]); //(22*4) / 4
printf("%d", size);

// Array ile Pointer ilişkisi
int b[5] = {4,6,10,54,23};
int *ptr = b; //b[0]'ın adresine eşit.
printf("%d", *(ptr+3)); //54'ü yani 4. elemanı bastırır.

// Array of Pointers
const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
// Burada suit[0] Hearts'e, suit[1] Diamonds'a eşittir.
printf("%c", suit[3][1]); //ile spades'in p'si basılır.
