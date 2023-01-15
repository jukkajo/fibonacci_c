#include <stdio.h>
#include <stdlib.h>

typedef struct _luku luku;

struct _luku  {
    int arvo;
    struct _luku *seuraava;
};

luku *lisaa(luku *lukujono, int arvo) {
    luku *uusi = NULL;
    uusi = malloc(sizeof(luku));
    uusi->arvo = arvo;
    uusi->seuraava = lukujono;
    return uusi;
}

void tyhjenna(luku *lukujono) {
    if (lukujono == NULL) return;
    luku *seuraava = lukujono->seuraava;
    free(lukujono);
    tyhjenna(seuraava);
}

void tulostaLuvut(luku *lukujono, int mones) {
  luku *nykyinen = lukujono;
  if(nykyinen == NULL) { return; }
  mones -= 1;
  int alkio = nykyinen->arvo;
  tulostaLuvut(nykyinen->seuraava, mones);
  printf("fiboluku%d: %d\n", mones, alkio);

}

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Anna argumenttina tulostettavien lukujen lukumäärä, joka on >= 2.\n");
        return 1;
    }

    int lkm = atoi(argv[1]);
    lkm = lkm - 2; // Lukumäärästä pois ekat kaksi

    if (lkm < 0) {
        printf("Lukumäärän tulee olla >= 2.\n");
        return 1;
    }

    luku *lukujono = lisaa(NULL, 1);
    lukujono = lisaa(lukujono, 1);
 
    for(int i=0; i < lkm; ++i) {
      int ed1 = lukujono->arvo;
      int ed2 = lukujono->seuraava->arvo;
      int uusi_luku = ed1 + ed2;
      lukujono = lisaa(lukujono, uusi_luku);
    }
    int mones =lkm + 2;
    tulostaLuvut(lukujono, mones);

    tyhjenna(lukujono);

    return 0;
}
