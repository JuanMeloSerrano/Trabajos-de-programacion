Algoritmo numeros_perfectos_1_1000
	Definir i, j, acum Como Entero
	acum <- 0;
	Para i <- 1 Con Paso 1 Hasta 1000 Hacer
		Para j <- 1 Con Paso 1 hasta (i/2) Hacer
			si i mod j == 0 Entonces
				acum <- acum + j;
			FinSi
		FinPara
		si acum == i Entonces
			Escribir i;
		FinSi
		acum <- 0;
	FinPara
	
FinAlgoritmo
