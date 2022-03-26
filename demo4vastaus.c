/**
 * Demo 4 kirjallinen palautustehtävä.
 *
 * Tämä koettaa johdatella käymään läpi samoja kysymyksiä, joita
 * ryhmäharjoitteessa käytiin läpi kasvotusten. Tee kaikki kohdat 1-5.
 *
 * 1. Tutustu seuraavaan C#-ohjelmaan:
 *
 *       https://replit.com/@JonneItkonen/QuerulousImpartialStructures
 *
 * (ryhmäharjoitteessa käydään läpi seuraavat kohdat keskustellen; älä
 * hajota keskittymistä ryhmätyössä niiden parissa, vaan tarvittaessa
 * voit kerrata _myöhemmin_; vain itsenäisesti tekevien tarvitsee
 * täyttää kohdat vastaukseksi demoon)
 *
 * 2. Kirjoita vastaukset seuraaviin kysymyksiin C#-esimerkkiin
 *    liittyen. Vastausten pohtiminen ennakkoon toivottavasti
 *    helpottaa myöhempien tehtävien tekemistä:
 *
 *    Kysymys: Millainen lukujono on Fibonacci? Miten se
 *    muodostetaan?
 *    Vastaus: Rekursiivisesti määriteltävä, haluttu luku muodostetaan
 *    summaamalla kaksi sitä edeltänyttä lukua. (1,2,3..55)
 *
 *    Kysymys: Mikä tietorakenne C#-esimerkkiohjelmassa on käytössä?
 *    Vastaus:  Kun esimerkkiohjelman kommenteissa sanotaan matkittaneen
 *    struct-tietuetta luokalla, niin ei liene väärin vastata rakenteeksi
 *    Luokan oliota? Muulloin se olisi struct.
 *
 *    Kysymys: Anna esimerkki rivistä, jolla varataan muistia pinosta.
 *    Vastaus: int e = lukujono.Arvo;
 *
 *    Kysymys: Anna esimerkki rivistä, jolla varataan muistia keosta.
 *    Vastaus: uusi = new Luku();
 *
 *    Kysymys: Anna esimerkki rivistä, jolla muutetaan pinomuistissa
 *    sijaitsevaa dataa.
 *    Vastaus: lkm = lkm - 2; //esimerkkikoodista
 *
 *    Kysymys: Anna esimerkki rivistä, jolla muutetaan kekomuistissa
 *    sijaitsevaa dataa.
 *    Vastaus: uusi.Arvo = arvo;
 *
 *    Kysymys: Milloin pinosta varattu muisti vapautuu?
 *    Vastaus: Kun funktion suoritus päättyy.
 *
 *    Kysymys: Milloin keosta varattu muisti vapautuu?
 *    Vastaus: Kun kutsutaan luokan tyhjennä-metodia. Kun C on kieli
 *    niin täytyy muisti vapauttaa itse ja näkisin sen tapahtuvan aikaisintaan
 *    tässä.
 *
 * 3. Tutustu tähän C-kieliseen esimerkkiohjelmaan ja vastaa
 *    seuraaviin kysymyksiin:
 *
 *    Kysymys: Mikä tietorakenne C-esimerkkiohjelmassa on käytössä?
 *    Vastaus: Tässäkin struct, tai sanotaan, tietue
 *
 *    Kysymys: Anna esimerkki rivistä, jolla varataan muistia pinosta.
 *    Vastaus: luku *lisaa(luku *lukujono, int arvo) 
 *
 *    Kysymys: Anna esimerkki rivistä, jolla varataan muistia keosta.
 *    Vastaus: uusi = malloc(sizeof(luku))
 *
 *    Kysymys: Anna esimerkki rivistä, jolla muutetaan pinomuistissa
 *    sijaitsevaa dataa.
 *    Vastaus: lkm = lkm - 2
 *
 *    Kysymys: Anna esimerkki rivistä, jolla muutetaan kekomuistissa
 *    sijaitsevaa dataa.
 *    Vastaus: uusi->arvo = arvo
 *
 *    Kysymys: Milloin pinosta varattu muisti vapautuu?
 *    Vastaus: Kun funktion suoritus loppuu tai se vapautetaan itse.
 *
 *    Kysymys: Milloin keosta varattu muisti vapautuu?
 *    Vastaus: Kun ohjelman suoritus päättyy tai se vapautetaan itse
 *    esim. free(jotakin);
 *
 *    Kysymys: Selitä, miksi aliohjelmaan lisaa() viedään osoitin
 *    luku-tietueeseen.
 *    Vastaus: '*'-merkki kuuluu paluutyyppiin, aliohjelma
 *    palauttaa siis osoittimen muistipaikkaan, jonka sisällön tyyppi ei ole tiedossa.
 *
 *    Kysymys: Miksi esimerkiksi rivillä
 *
 *                 lukujono = lisaa(lukujono, 3);
 *
 *    täytyy tehdä sijoitus muuttujaan lukujono? Ts. Miksi ei olisi
 *    vain
 *
 *                 lisaa(lukujono, 3);
 *
 *    Vastaus: Näin sijoitetaan arvot oikeaan muistipaikkaan.
 *
 *    Kysymys: Aliohjelman lisaa() kutsumuoto (engl. signature) on
 *
 *                luku *lisaa(luku *lukujono, int arvo);
 *
 *    Miksi se ei voisi olla
 *
 *                luku lisaa(luku *lukujono, int arvo);
 *
 *    Vastaus: Koska jatkoa ajatellen täytyy tietää muistipaikka jonka
 *    funktio '*'-merkillä palauttaa, ilman palauttaisin integerin    
 *
 * 4. Tallenna tämä koodi nimelle "demo4vastaus.c" ja muokkaa tätä
 *    niin, että tämä toimii samoin kuin kohdan 1 C#-ohjelma. Voit
 *    katsoa mallia siitä sekä alkuperäisestä esimerkkikoodista.
 *
 *    HUOM 1: Sinun tulee siis muokata tätä niin, että tämä laskee
 *    Fibonaccin lukujonon ja tallentaa sen samanlaiseen
 *    tietorakenteeseen kuin mitä C#-esimerkki käyttää!
 *
 *    HUOM 2: Helpointa lienee havaita, mikä on erilaista C:llä
 *    verrattuna C#-kieleen, ja sitten kääntää mallia C-kieliseksi
 *    rivi riviltä. Lopullinen vastaus voi lopulta hyvinkin sisältä
 *    täysin saman määrän ei-kommenttirivejä kuin C#-malli. Jokainen
 *    rivi voi tehdä olennaisesti saman asian C:llä kuin mitä C#:lla
 *    tehdään.
 *
 *    HUOM 3: Kuten aina, tee pieni muutos kerrallaan ja varmistu
 *    muutoksen jälkeen, että koodi edelleen kääntyy ja toimii
 *    nykyisen oletuksen mukaisesti. Sillä tavoin ei pääse kertymään
 *    montaa uutta virhettä kerralla, jolloin korjaaminen pysyy
 *    mahdollisena!
 *
 * 5. Palauta syntynyt tiedosto "demo4vastaus.c" kommentteineen.
 *
 */


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

/*
int laske_summa(luku *lukujono, int summa) {
    luku *nykyinen = lukujono;
    if (nykyinen == NULL) return summa;
    return laske_summa(nykyinen->seuraava, summa+nykyinen->arvo);
}
*/

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

    // Tässä lasket sitten C#-esimerkin mukaisesti
    // Fibonaccin luvut. Nyt on vain kovakoodattu esimerkki
    // ja lukujen summan laskeminen:
 
    for(int i=0; i < lkm; ++i) {
      int ed1 = lukujono->arvo;
      int ed2 = lukujono->seuraava->arvo;
      int uusi_luku = ed1 + ed2;
      lukujono = lisaa(lukujono, uusi_luku);
    }
    int mones =lkm + 2;
    tulostaLuvut(lukujono, mones);

    /*
    int summa = laske_summa(lukujono, 0);
    printf("summa on %d\n", summa);

    */

    tyhjenna(lukujono);

    return 0;
}
