// If'li bir ifadede birden fazla satırlık işlem varsa süslü parantez kullanılmalı. 
// Tek bir satır varsa süslü parantez şart değil.
// IF, standart bir koşul yapısı:
int x;
scanf("%d", &x);
if(x < 2){
  ...
}
else if(x<=30){
  ...
}
else
  ...
  
// Ternary operatör: True ya da False olma durumuna göre if'e benzer bi yapı. Ama operatör olarak adlandırılır.
int x;
scanf("%d", &x);
int b = x != 5 ? 1: 0;
printf("%d", b);

// Switch Yapısı
enum day {MON,TUE,WED,THU,FRI,SAT,SUN} day;
// sayısal bir değer girilir
scanf("%d", &day);
// switch içerisine değişken ismi gelir ve değişken içerisindeki değere göre durumlar değerlendirilir.
switch (day)
{  case SUN: printf("Sunday\n"); break;
   case WED: printf("Wednesday\n"); break;
   case TUE: printf("Tuesday\n"); break;
   case THU: printf("Thursday\n"); break;
   case FRI: printf("Friday\n"); break;
   case SAT: printf("Saturday\n"); break;
   case MON: printf("Monday\n"); break;
   default:  printf("Incorrect day\n"); break;
}
