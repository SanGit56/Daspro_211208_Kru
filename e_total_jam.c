#include "header.h"

void e_total_jam(kru data_kru[], perbaikan data_perbaikan[])
{
	int i, j;
	for (i=0;i<3;i++)
	{
		data_kru[i].waktu = 0;
		
		for (j=0;j<8;j++)
		{
			if (data_perbaikan[j].level == data_kru[i].keterampilan)
			{
				data_kru[i].waktu = data_kru[i].waktu + data_perbaikan[j].jam;
			}
		}
	}
	
	for (i=0;i<3;i++)
	{
		printf("Total waktu kru %c adalah %d jam\n", data_kru[i].nomor, data_kru[i].waktu);
	}
}
