struct structName{
  //tanımlamalar
}variable_list; //Bu kısım main içerisinde de tanımlanabilir. Main'de 
struct structName variableName;

//Örnek
struct stu_info{
  char name[41];
  long int id;
  char dept[16];
  short int class;
  float gpa;
}stu1, stu2;

// . structure member operator
stu1.id = 123;

// -> structure pointer operator
(*p).m /*yerine*/ p->m
//Örneğin:

struct point_type{
  int x, y;
};
struct triangle_tpe{
  struct point_type A, B, C;
};
//Main'de
struct triangle_type T = {{1, 3}, {2, 4}, {1, 6}};

struct A_type{
  int m=10, n=3; //Başlangıçta tanımlama YAPILAMAZ.
}k;

// Parametre olarak struct
void func(struct A_type *h){
  (*h).m = 5; //h->m = 5;
}
// Mainde aşağıdaki fonksiyon çağırılarak fonksiyon içerisinde değeri değiştirilebilir.
struct A_type k = {1, 2};
func(&k);

// Struct türünde bir fonksiyon yazarsan struct bir değer döndürebilirsin.
// Struct değişkeni array olarak da tanımlanabilir. 
// Structta tüm değişkenleer eş zamanlı olarak kullanılır

// Union
union Number{
  int x;
  float y;
};
union Number value;
// Kullanımı struct ile aynı gibi

// Typedef: mevcut olan tür isimleri için yeni isimler tanımlamada kullanılır
typedef mevcut_tür_ismi yeni_tür_ismi;

// Typedef struct ile kullanıldığında maindeki tanımlamada struct kelimesi sürekli yazılmak zorunda kalmaz.
typedef struct{
  int x, y;
}nokta_t, noktalar_t[10];
//Main'deyken ise
nokta_t n;
noktalar_t N;
n.x = 4;
N[3].y = 8;
