all: 01_soma_inteiros 02_subtracao_reais 03_divisao_inteiros 04_media_notas

01_soma_inteiros: 01_soma_inteiros.c
	cc -o 01_soma_inteiros 01_soma_inteiros.c

02_subtracao_reais: 02_subtracao_reais.c
	cc -o 02_subtracao_reais 02_subtracao_reais.c

03_divisao_inteiros: 03_divisao_inteiros.c
	cc -o 03_divisao_inteiros 03_divisao_inteiros.c

04_media_notas: 04_media_notas.c
	cc -o 04_media_notas 04_media_notas.c

clean:
	rm 01_soma_inteiros
	rm 02_subtracao_reais
	rm 03_divisao_inteiros
	rm 04_media_notas
