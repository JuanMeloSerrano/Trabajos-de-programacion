Algoritmo numeros_primos_1_100
	Definir n, i, j, cont Como Entero
	para i <- 2 Hasta 100 Con Paso 1 Hacer
		Para j <- 2 Hasta i Con Paso 1 Hacer
			si i mod j = 0 Entonces
				cont <- cont + 1;
			FinSi
		FinPara
		si cont == 1 Entonces
			Escribir i;
		FinSi
		cont <- 0;
	FinPara
	
FinAlgoritmo
