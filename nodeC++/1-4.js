// Generar palindromos con cadenas 
// 

function palindromo(string){

	string = string.replace(/\s{1,}/g,'')

	string = string.split('')

	string.sort()

	var valor = checkOddLetters(string)

	console.log(string)

	if(valor)
		console.log("La cadena permite permutaciones")
	else
		console.log("No permite permutaciones")

}


function checkOddLetters(cadena){

	var arreglo = new Map()

	var bandera = 0

	//Cuenta cuantos numeros de elementos hay 

	cadena.forEach(function(element,index){
		
		if (!arreglo[element]){
			arreglo[element] = 1
		}else{
			arreglo[element]++
		}

	})

	console.log(arreglo)
	//Comprueba que el numero de elemntos sea par menos uno 

	for (var key in arreglo) {

		if((arreglo[key] % 2) != 0){
			bandera++
		}

	}

	bandera = bandera > 1 ? true : false

	if(bandera){
		return false
	}else{
		return true
	}

}


// Funcionamiento de for..in
// 
// for (variable in objeto) sentencia 
// 
// variable puede ser cualquier valor, es el alias de una llave 




palindromo("anita lava la tina")
