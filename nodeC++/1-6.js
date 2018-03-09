// String Compression: Implement a method to perform basic string compression using the counts 
// of repeated characters. For example, the string aabcccccaaa would become a2b1c5a3. If the "compressed" 
// string would not become smaller than the original string, your method should return
// the original string. You can assume the string has only uppercase and lowercase letters (a - z).
// Hints:#92, #110
// 


function compressString(string){

	var bandera = 1, passChar ='0', cadena = ""

	var mapa = new Map()

	var otString = string.split('')

	otString.forEach(function(element,index){

		if(index == 0){

			passChar = element
			bandera++

		}else{

			if(passChar == element){

				bandera ++

			}else if(passChar != element){

				cadena += passChar + bandera

				passChar = element

				bandera = 1;

			}


		}

		if((index + 1) == otString.length){

			cadena += passChar + bandera

		}

	})

	if(cadena.length > string.length){

		return string

	}else{

		return cadena

	}


}


var compress = compressString("aabccccjcaaa")

console.log(compress)