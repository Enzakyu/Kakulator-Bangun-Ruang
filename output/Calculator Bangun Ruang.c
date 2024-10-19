#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

void clearScreen();

double volumeTabung(double r, double t)
{
    return PI * r * r * t;
}

double luasPermukaanTabung(double r, double t)
{
    return 2 * PI * r * (r + t);
}

double volumeBola(double r)
{
    return (4.0 / 3.0) * PI * pow(r, 3);
}

double luasPermukaanBola(double r)
{
    return 4 * PI * r * r;
}

double volumeLimasSegiempat(double panjang, double lebar, double tinggi)
{
    return (1.0 / 3.0) * panjang * lebar * tinggi;
}

double luasPermukaanLimasSegiempat(double panjang, double lebar, double tinggi)
{
    double s1 = sqrt(pow((panjang / 2), 2) + pow(tinggi, 2));
    double s2 = sqrt(pow((lebar / 2), 2) + pow(tinggi, 2));
    return (panjang * lebar) + (panjang * s2) + (lebar * s1);
}

double volumePrismaSegitiga(double alas, double tinggiSegitiga, double tinggiPrisma)
{
    return (1.0 / 2.0) * alas * tinggiSegitiga * tinggiPrisma;
}

double luasPermukaanPrismaSegitiga(double alas, double tinggiSegitiga, double tinggiPrisma)
{
    double sisiMiring = sqrt(pow(alas / 2, 2) + pow(tinggiSegitiga, 2));
    return (alas * tinggiSegitiga) + 2 * (tinggiPrisma * sisiMiring) + (alas * tinggiPrisma);
}

double volumeKerucut(double r, double t)
{
    return (1.0 / 3.0) * PI * r * r * t;
}

double luasPermukaanKerucut(double r, double t)
{
    double s = sqrt(r * r + t * t);
    return PI * r * (r + s);
}

void clearScreen()
{
    system("cls");
}

int main()
{
    int pilihan;
    double r, t, panjang, lebar, tinggiSegitiga, tinggiPrisma, alas;
    int ulang;

    do
    {
        printf("\t\t-----------------------------------------------------------------\n");
        printf("\t\t-----------------------------------------------------------------\n");
        printf("\t\t||                   Kelompok 1 Pratikum Algoritma             ||\n");
        printf("\t\t-----------------------------------------------------------------\n");
        printf("\t\t-----------------------------------------------------------------\n");
        printf("\t\tNama Anggota Kelompok\n");
        printf("\t\t1. Marcell Christian Santoso\n");

        printf("\t\tTekan enter untuk melanjutkan\n");
        getchar();

        clearScreen();

        printf("\t\t-----------------------------------------------------------------\n");
        printf("\t\t-----------------------------------------------------------------\n");
        printf("\t\t||                   PROGRAM MENGHITUNG VOLUME LUAS            ||\n");
        printf("\t\t-----------------------------------------------------------------\n");
        printf("\t\t-----------------------------------------------------------------\n");
        printf("\t\tPilihlah bangun ruang:\n");
        printf("\t\t1. Tabung\n");
        printf("\t\t2. Bola\n");
        printf("\t\t3. Limas Segiempat\n");
        printf("\t\t4. Prisma Segitiga\n");
        printf("\t\t5. Kerucut\n");
        printf("\t\t0. Exit\n");
        printf("\t\tPilihan Anda: ");
        if (scanf("%d", &pilihan) != 1)
        {
            printf("\t\tInput invalid. Silakan masukkan angka.\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        clearScreen();

        switch (pilihan)
        {
        case 1:
            // Tabung
            printf("\t\t--- Menghitung Tabung ---\n");
            printf("\t\tMasukkan jari-jari (r): ");
            scanf("%lf", &r);
            printf("\t\tMasukkan tinggi (t): ");
            scanf("%lf", &t);
            printf("\t\tVolume Tabung: %.2lf\n", volumeTabung(r, t));
            printf("\t\tLuas Permukaan Tabung: %.2lf\n", luasPermukaanTabung(r, t));
            break;
        case 2:
            // Bola
            printf("\t\t--- Menghitung Bola ---\n");
            printf("\t\tMasukkan jari-jari (r): ");
            scanf("%lf", &r);
            printf("\t\tVolume Bola: %.2lf\n", volumeBola(r));
            printf("\t\tLuas Permukaan Bola: %.2lf\n", luasPermukaanBola(r));
            break;
        case 3:
            // Limas Segiempat
            printf("\t\t--- Menghitung Limas Segiempat ---\n");
            printf("\t\tMasukkan panjang alas: ");
            scanf("%lf", &panjang);
            printf("\t\tMasukkan lebar alas: ");
            scanf("%lf", &lebar);
            printf("\t\tMasukkan tinggi: ");
            scanf("%lf", &t);
            printf("\t\tVolume Limas Segiempat: %.2lf\n", volumeLimasSegiempat(panjang, lebar, t));
            printf("\t\tLuas Permukaan Limas Segiempat: %.2lf\n", luasPermukaanLimasSegiempat(panjang, lebar, t));
            break;
        case 4:
            // Prisma Segitiga
            printf("\t\t--- Menghitung Prisma Segitiga ---\n");
            printf("\t\tMasukkan alas segitiga: ");
            scanf("%lf", &alas);
            printf("\t\tMasukkan tinggi segitiga: ");
            scanf("%lf", &tinggiSegitiga);
            printf("\t\tMasukkan tinggi prisma: ");
            scanf("%lf", &tinggiPrisma);
            printf("\t\tVolume Prisma Segitiga: %.2lf\n", volumePrismaSegitiga(alas, tinggiSegitiga, tinggiPrisma));
            printf("\t\tLuas Permukaan Prisma Segitiga: %.2lf\n", luasPermukaanPrismaSegitiga(alas, tinggiSegitiga, tinggiPrisma));
            break;
        case 5:
            // Kerucut
            printf("\t\t--- Menghitung Kerucut ---\n");
            printf("\t\tMasukkan jari-jari (r): ");
            scanf("%lf", &r);
            printf("\t\tMasukkan tinggi (t): ");
            scanf("%lf", &t);
            printf("\t\tVolume Kerucut: %.2lf\n", volumeKerucut(r, t));
            printf("\t\tLuas Permukaan Kerucut: %.2lf\n", luasPermukaanKerucut(r, t));
            break;
        case 0:
            printf("\t\tBye User!\n");
            break;
        default:
            printf("\t\tPilihan Invalid, silahkan masukan angka yang benar!\n");
        }

        printf("\t\t-----------------------------------------------------------------\n");
        printf("\t\t-----------------------------------------------------------------\n");
        printf("\t\t||                Apakah Anda Ingin Mengulang                  ||\n");
        printf("\t\t-----------------------------------------------------------------\n");
        printf("\t\t||               1) ya                                         ||\n");
        printf("\t\t||               2) tidak                                      ||\n");
        printf("\t\t-----------------------------------------------------------------\n");
        printf("\t\tPilihan Anda: ");
        scanf("%d", &ulang);
        clearScreen();

    } while (ulang == 1);

    printf("\t\tBye User!\n");
    return 0;
}
