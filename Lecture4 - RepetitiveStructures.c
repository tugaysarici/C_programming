// FOR LOOP
unsigned int counter;
for(counter=1; counter<=10; counter++){
  if(counter == 6)
    continue; //1'den 10'a kadar olan sayılar, 6'yı atla
  printf("%u ", counter);
}

// For ile Üs Alma a^b
int a, b, result=1, i;
scanf("%d %d", &a, &b);
for(i=0; i<b; i++){
  result *= a;
}
printf("%d", result);

// WHILE LOOP
unsigned int counter=1;
while(i<=10){
  if(counter == 6){
    counter++;
    continue; //1'den 10'a kadar olan sayılar, 6'yı atla
  }
  printf("%u ", counter);
  counter++;
}

// While ile girilen sayıların ortalamasını bulma
int sum=0, n, count=0;
scanf("%d", &n);
while(n>=0){
  sum += n;
  count++;
  scanf("%d", &n);
}
float average = (count)?(float)sum/count:0; // count 0 ise false olarak, farklı bir değer ise true olarak algılanacak.
printf("%f", average);

// Do-While ve Break Yapısı
int i=1;
do{
  if(i==6)
    break;  // Break olmasa 1-10 arasını basacak ama 6'da döngü kırılır.
  printf("%d ", i);
  i++;
}while(i<=10);
printf("\n%d is not accepted.", i);

// Bir sayıyı tersinden yazma
int num, digit;
scanf("%d", &num);
while(num>0){
  digit = num%10;
  num /= 10;
  printf("%d", digit);
}
