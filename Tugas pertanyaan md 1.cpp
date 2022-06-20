#include <stdio.h>
#include <string.h>
enum bulan { JAN = 1, PEB, MAR, APR,
 MEI, JUN, JUL, AGU, SEP, OKT, NOP, DES
};

Main(){
	enum bulan Bulan;
	char *namaBulan[] = {"",
	"Januaru", "Pebruari", "maret", "april", "mei", "juni",
	 "juli", "agustus", "september", "oktober",
	  "nopember", "desember"};
	
	for ( Bulan = JAN ; Bulan <= 12 ;
	Bulan++ )
	printf ( "%2d%11s\n", Bulan, namaBulan[Bulan]);
	return 0;
}
