Algoritmo invertir_numero
	Definir n, c, aux, d Como Entero
	Escribir "Digite el numero que desea invertir: ";
	Leer n;
	c <- 0;
	aux <- n;
	
	Mientras n <> 0 Hacer
		n <- trunc (n / 10);
		c <- c + 1;
	FinMientras
	
	n <- aux;
	aux <- 0;
	
	Mientras n <> 0 Hacer
		d <- n % 10;
		n <- trunc (n / 10);
		c <- c - 1;
		aux <- aux + (d * trunc (10 ^ (c)));
	FinMientras
	
	Escribir "Nuemro invertido: ",aux;
	
FinAlgoritmo
