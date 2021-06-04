Algoritmo vector_capicua
	Definir n, i, j, p, q como entero
	definir dec como logico
	
	Escribir "Ingrese el tamaño del vetor: ";
	Leer n;
	Dimension v[n];
	Para p <- 1 con paso 1 hasta n hacer
		Escribir "Ingrese un numero para la posicion #",p,": ";
		Leer v[p];
	FinPara

	si n%2 = 1 Entonces
		q <- (n-1)/2;
	SiNo
		q <- n/2;
	FinSi
	
	j <- n;
	
	dec <- verdadero;

	para i<-1 con paso 1 hasta q hacer
		si (v[i] = v[j]) entonces
			j <- j-1;
		sino
			dec <- Falso
			i <- q;
		FinSi
	FinPara
	
	si dec = Verdadero Entonces
		Escribir "El vector es capicúa.";
	SiNo
		Escribir "El vector no es capicúa.";
	FinSi
	
FinAlgoritmo
