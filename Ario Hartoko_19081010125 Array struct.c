#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct biodata {
	char nama[30];
	char alamat[100];
	char lahir[20];
	char email[50];
	char npm[20];
	char jurusan[30];
	char universitas[50];
}mahasiswa;

int i,j,banyak=0;
char lagi;
mahasiswa mhs[50];

int main (){
	int menu;
	printf("SELAMAT DATANG DALAM PROGRAM BIODATA MAHASISWA!!!!!\n\n");
	printf("-----------------------------------------------------------------------------------------------------\n\n");
	printf("1. Input data\n");
	printf("2. Update data\n");
	printf("3. HAPUS data\n");
	printf("4. Tampilkan data\n");
	printf("5. EXIT\n");
	printf("\nSilahkan pilih menu yang anda ingin lakukan : ");
	scanf("%d",&menu);
	system("cls");
	printf("SELAMAT DATANG DALAM PROGRAM BIODATA MAHASISWA!!!!!\n\n");
	printf("-----------------------------------------------------------------------------------------------------\n\n");
	switch(menu){
		case 1:
			input();
			break;
		case 2:
			if(banyak>0){
				update();
			}
			else{
				printf("Mohon maaf belum ada data :)\n\n");
				system("pause");
				system("cls");
			}
			break;
		case 3:
			if(banyak>0){
				hapus();
			}
			else{
				printf("Mohon maaf belum ada data :)\n\n");
				system("pause");
				system("cls");
			}
			break;
		case 4:
			if(banyak>0){
				display();
				printf("\n");
				system("pause");
				system("cls");
			}
			else{
				printf("Mohon maaf belum ada data :)\n\n");
				system("pause");
				system("cls");
			}
			break;
		case 5:
			printf("TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI :)\n\n");
			system("pause");
			return 0;
		default:
			printf("Mohon maaf menu pilihan tersebut tidak ada :(\n\n");
			system("pause");
			system("cls");
	}
	main();
	return 0;
}

int input(){
	printf("Masukkan banyak mahasiswa : ");
	scanf("%d",&banyak);
	fflush(stdin);
	system("cls");
	for(i=0;i<banyak;i++){
		printf("SELAMAT DATANG DALAM PROGRAM BIODATA MAHASISWA!!!!!\n\n");
		printf("-----------------------------------------------------------------------------------------------------\n\n");
		printf("Biodata mahasiswa ke-%d\n\n", i+1);
		printf("Masukkan nama\t\t: ");
		gets(mhs[i].nama);
		printf("Masukkan tanggal lahir\t: ");
		gets(mhs[i].lahir);
		printf("Masukkan alamat\t\t: ");
		gets(mhs[i].alamat);
		printf("Masukkan email\t\t: ");
		gets(mhs[i].email);
		printf("Masukkan NPM\t\t: ");
		gets(mhs[i].npm);
		printf("Masukkan jurusan\t: ");
		gets(mhs[i].jurusan);
		printf("Masukkan universitas\t: ");
		gets(mhs[i].universitas);
		system("cls");
	}
}

int update(){
	display();
	printf("Silahkan pilih biodata ke berapa yang ingin di-update : ");
	scanf("%d",&i);
	system("cls");
	fflush(stdin);
	printf("SELAMAT DATANG DALAM PROGRAM BIODATA MAHASISWA!!!!!\n\n");
	printf("-----------------------------------------------------------------------------------------------------\n\n");
	printf("Biodata mahasiswa ke-%d\n\n", i+1);
	printf("Masukkan nama\t\t: ");
	gets(mhs[i].nama);
	printf("Masukkan tanggal lahir\t: ");
	gets(mhs[i].lahir);
	printf("Masukkan alamat\t\t: ");
	gets(mhs[i].alamat);
	printf("Masukkan email\t\t: ");
	gets(mhs[i].email);
	printf("Masukkan NPM\t\t: ");
	gets(mhs[i].npm);
	printf("Masukkan jurusan\t: ");
	gets(mhs[i].jurusan);
	printf("Masukkan universitas\t: ");
	gets(mhs[i].universitas);
	printf("\n");
	system("pause");
	system("cls");
}

int hapus(){
	display();
	printf("Silahkan pilih biodata ke berapa yang ingin dihapus : ");
	scanf("%d", &i);
	for(i-1;i<banyak;i++){
		strcpy(mhs[i-1].nama,mhs[i].nama);
		strcpy(mhs[i-1].alamat,mhs[i].alamat);
		strcpy(mhs[i-1].lahir,mhs[i].lahir);
		strcpy(mhs[i-1].email,mhs[i].lahir);
		strcpy(mhs[i-1].npm,mhs[i].npm);
		strcpy(mhs[i-1].jurusan,mhs[i].jurusan);
		strcpy(mhs[i-1].universitas,mhs[i].universitas);
	}
	banyak=banyak-1;
	system("cls");
}

int display(){
	for(i=0;i<banyak;i++){
		printf("Biodata mahasiswa ke-%d\n",i+1);
		printf("Nama\t\t: %s\n", mhs[i].nama);
		printf("Alamat\t\t: %s\n", mhs[i].alamat);
		printf("Tanggal lahir\t: %s\n", mhs[i].lahir);
		printf("E-mail\t\t: %s\n", mhs[i].email);
		printf("NPM\t\t: %s\n", mhs[i].npm);
		printf("Jurusan\t\t: %s\n", mhs[i].jurusan);
		printf("Universitas\t: %s\n\n", mhs[i].universitas);
	}
}

