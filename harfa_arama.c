#include <stdio.h>
#include <conio.h>

int main(void)
{
  char kelime[50],harf, *cp,*hp;
  int sayac=0;

  printf("Kelime(en fazla 50 karakter): ");
  gets(kelime);
  printf("Harfi giriniz: ");
  scanf("%c",&harf);
  cp = kelime;
  hp=&harf;
  while(*cp)
  {
      if(*cp==*hp)sayac++;
      cp++;
  }
  printf("Kelimede %c harfi %d kadar var.",harf,sayac);
  return 0;
}
