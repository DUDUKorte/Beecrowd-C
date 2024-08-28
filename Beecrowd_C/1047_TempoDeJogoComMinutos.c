#include <stdio.h>

int h_inicial, m_inicial, h_final, m_final = 0;

int main(void){

	scanf("%d %d %d %d", &h_inicial, &m_inicial, &h_final, &m_final);
	int m_tempo = 0;

	if(h_final <= h_inicial){
		m_tempo += (60*24) + ((h_final-h_inicial)*60);
	}else{
		m_tempo += ((h_final-h_inicial)*60);
	}
	
	if(m_final <= m_inicial){
		m_tempo -= (m_inicial - m_final);
	}else{
		m_tempo += (m_final - m_inicial);
	}
	
	int tempo = m_tempo / 60;
	m_tempo -= tempo*60;

	if(tempo >= 24 && m_tempo > 0){ tempo = 0; }

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo, m_tempo);

	return 0;
}