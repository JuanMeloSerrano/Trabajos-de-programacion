Algoritmo vector_acendente
	Definir n, i, j, aux como entero
	Escribir "Ingrese el tamaño del vetor: ";
	Leer n;
	Dimension v[n];
	Para i <- 1 con paso 1 hasta n hacer
		Escribir "Ingrese un numero para la posicion #",i,": ";
		Leer v[i];
	FinPara
	
	Para i <- 1 con paso 1 hasta n-1 hacer
		para j <- i+1 con paso 1 hasta n Hacer
			si (v[i] < v[j]) entonces
				aux <- v[i];
				v[i] <- v[j];
				v[j] <- aux;
			FinSi
		FinPara
	FinPara
	
	Escribir "Vector ordenado de forma decendente."
	Para i <- 1 Con Paso 1 hasta n Hacer
		Escribir "Posicio #",i," -> ",v[i];
	FinPara
	
FinAlgoritmo
