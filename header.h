#include <stdio.h>
#include <string.h>

typedef struct {
	char nomor;
	int keterampilan;
	int biaya;
	int waktu;
} kru;

typedef struct {
	char id[5];
	int level;
	int jam;
} perbaikan;

kru a_data_kru();
perbaikan b_data_perbaikan();
void c_kru_murah();
void d_kru_cepat();
void e_total_jam();
