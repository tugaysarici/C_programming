/*
byte,  8 bit unsigned
short, 16 bit signed
int,   32 bit signed
long,  54 bit signed
float, 32 bit
double,64 bit
*/

/*
int için; short int <= int <= long int

float için; float <= double <= long double
*/

/*
define ile sabit değer tanımpayabilirsin. Örneğin;
#define PI 3.14
*/

/*Enumarated type ile kendi türünü tanımlayabilirsin.
enum tür_ismi{
  item_ismi = sabit_int_deger,...
}değişken_listesi;

Süslü parantezler içerisine atama belirtilmediyse 0'dan başlayarak değer ataması yapılır.
Atama belirtilirse ataması olmayanlar bir öncekinden 1 fazla olarak değerlenir.
*/

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
enum week day;
//ya da
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun}day;

#include<stdio.h> 
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun}; 
int main() 
{ 
	enum week day; 
	day = Wed; 
	printf("%d",day); 
	return 0; 
}

/*
Aritmetik Operatörler: + - * / %

Logic Operatörler: &&(logical-AND)   ||(logical-OR)    !(logical-NOT)
Değerlendirme sırası soldan sağa doğrudur.
AND'de ilki 0 ise ikinci kısım hiç değerlendirilmez.
OR'da ilk kısım 1 ise ikinci kısım hiç değerlendirilmez.

Bitwise Operatörleri: & | ^ << >> ~
&   bitwise-AND
|   bitwise-OR
^   bitwise-XOR
<<  shift left
>>  shift right
~   1'in tümleyenini

+= -= *= /= %= ile de atama yapılabilir.

++pre preincrement  (Arttırma işlemi değişken kullanılmadan önce yapılır.)
post++ post increment (Arttırma işlemi değişken kullanıldıktan sonra yapılır.)

Comparison Operatörleri: == < > <= >= !=
*/

/*Type Casting
conversion ya da type conversion olarak adlanır. Tür dönüşümü
int a=10, b=3;
float f, g;
f=a/b; //f 3 olur
g=(float)a/b; //g 3.333 olur
*/
