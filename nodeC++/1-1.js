// Implemetar una funcion que determine si todos los valores de una cadena 
// son unicos 
// 


function dobleString(cadena){

	var arreglo = []
	cadena = cadena.split('')

	cadena.forEach(function(element,index){

		if(arreglo[element.charCodeAt(0)]){
			console.log("Tiene un valor repetido")
			return false 
		}

		arreglo[element.charCodeAt(0)] = element

	})

}


dobleString("Holaa")