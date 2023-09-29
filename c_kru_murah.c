#include "header.h"

void c_kru_murah(kru data_kru[], perbaikan data_perbaikan[])
{
	int i, j, murah, level;
	char no_kru;
	murah = data_kru[0].biaya;
	for (i=0;i<8;i++)
	{
		for (j=0;j<3;j++)
		{
			if (data_perbaikan[i].level <= data_kru[j].keterampilan)
			{
				if (murah <= data_kru[j].biaya)
				{
					murah = data_kru[j].biaya;
					no_kru = data_kru[j].nomor;
					level = data_perbaikan[i].level;
				}
			}
		}
	}
	
	printf("Kru termurah untuk level %d adalah kru %c dengan biaya %d\n", level, no_kru, murah);
}
