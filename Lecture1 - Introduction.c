#include <stdio.h>

int main(void){
  int n1, n2;
  
  printf("Number 1: ");
  scanf("%d", &n1);
  
  printf("Number 2: ");
  scanf("%d", &n2);
  
  int sum = n1 + n2;
  printf("The sum of n1 and n2 = %d\n", sum);  
}

// Burada % yanına string'de gösterilecek değişkenler gelecek, bu değişkenler tırnaktan sonraki , ile belirtilecek.
// scanf'de %nin bulunduğu kadar okuma yapılıyor. Okunan değişkenler & ile belirtilir.
// %d int için(scanf ve printf); %c char için(scanf ve printf); %f double için(printf); %lf double için(scanf)

// Aritmetik işlemler + - * / %
// % mod olmada kalanı gösterir.
// Bölme için kullanılan / tam sayı bölmesie yapar. Küsürat vermez.
// Aynı önceliğe sahip işlemlerden birden fazla tekrar varsa işlem sırası soldan sağa doğrudur.
// if durumalarında 0 falsedur. 0 olmayanlar truedur.
// > < >= <= != ==
// Tüm işlemler soldan sağa doğru yapılır. Sadece = yani atama işlemi sağdan sola gerçekleşir.

/*
%c char için printf/scanf fonksiyonlarında kullanılır.
%d int için printf/scanf fonksiyonlarında kullanılır.
%f double için printf fonksiyonunda kullanılır.
%lf double için printf fonksiyonunda kullanılır.
*/

/*
Keywords: auto, break, case, char, const, continue, default, do, double, else, enum, extern, fkoat, for, goto, if, int,
long, register, return, short, signed, sizeof, static, struct, switch, typedef, union, unsigned, void, volatile, while.
*/

