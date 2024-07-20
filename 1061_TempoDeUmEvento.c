#include <stdio.h>

int transformar_em_segundos(int dia, int hr[]){
	return (((dia*24) * 3600) + (hr[0] * 3600) + (hr[1] * 60) + hr[2]);
}

int main(){

	int init_dia, init_hr[3],  end_dia, end_hr[3];
	int init_sec, end_sec, total_sec;
	scanf("Dia %d\n%d : %d : %d\nDia %d\n%d : %d : %d", &init_dia, &init_hr[0], &init_hr[1], &init_hr[2], &end_dia, &end_hr[0], &end_hr[1], &end_hr[2]);

	init_sec = transformar_em_segundos(init_dia, init_hr);
	end_sec = transformar_em_segundos(end_dia, end_hr);
	total_sec = end_sec - init_sec;

	// Calcular os dias, horas, minutos e segundos
	int dias, horas, minutos, segundos;
	
	dias = total_sec / (24*3600);
	total_sec = total_sec%(24*3600);

	horas = total_sec / 3600;
	total_sec = total_sec % 3600;

	minutos = total_sec / 60;
	segundos = total_sec % 60;
	printf(
		"%d dia(s)\n"
		"%d hora(s)\n"
		"%d minuto(s)\n"
		"%d segundo(s)\n", dias, horas, minutos, segundos);
	
	return 0;
}
