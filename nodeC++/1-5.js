// There are three types of edits that can be performed on strings: insert a character, remove a 
// character, or replace a character. Given two strings, write a function to check if they are 
// one edit (or zero edits) away.
// 



function distanceArray(arrOne, arrTwo){


	arrOne = arrOne.split('')
	arrTwo = arrTwo.split('')

	if(arrOne.length == arrTwo.length){

		return arrayEdit(arrOne,arrTwo)

	}else if(Math.abs(arrOne.length - arrTwo.length) > 1) {

		console.log("invalido")
		return false 

	}

	var valor = arrayInsert(arrOne,arrTwo)

	console.log(valor)

	
}

function arrayInsert(arrOne,arrTwo){

	var bandera = 0,peq = [], gra = []

	if(arrOne.length > arrTwo.length){
		peq = arrTwo
		gra = arrOne
	}else{
		gra = arrTwo
		peq = arrOne
	}


	for (var i = 0; i < arrOne.length; i++) {

		if(bandera == 0){

			if(peq[i] != gra[i])
				bandera++

		}else if(bandera == 1){

			if(peq[i] != gra[i+1])
				return false

		}

	}

	return true

}

function arrayEdit(arrOne,arrTwo){

	var bandera = 0

	arrOne.forEach(function(element,index){
		if(element != arrTwo[index])
			bandera++
	})

	if(bandera > 1)
		return false
	else 
		return true

}


var valor = distanceArray("hola","boola")

console.log(valor)


