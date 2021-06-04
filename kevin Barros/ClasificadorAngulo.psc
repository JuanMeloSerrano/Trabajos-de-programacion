Algoritmo ClasificarAngulo
	Definir angulo como real
	Escribir "Programa para clasificar angulos. (aguno, obtuso o recto)"
	Escribir "Ingrese angulo: "
	Leer angulo
	
	si angulo < 90 y angulo >= 0 Entonces
		Escribir "El angulo es agudo!"
	sino si angulo > 90 y angulo <= 360 entonces
			Escribir "El angulo es obtuso!"
		SiNo si angulo == 90 entonces
				Escribir "El angulo es recto!"
			SiNo
				Escribir "El angulo es incorrecto!"
			finSi
			
		FinSi
		
	FinSi
	
FinAlgoritmo
