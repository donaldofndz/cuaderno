// Dadas dos cadenas, de caracteres se necesita saber si una 
// es permutacion de otra 

function permutation(strOne, strTwo){

	strOne = strOne.split('')
	strTwo = strTwo.split('')

	strOne.sort()
	strTwo.sort()

	var valor = strOne.forEach(function(element,index){

		if(element != strTwo[index]){
			return false
		}

	})


	console.log(strTwo);
	console.log(strOne);

}


permutation("Hola", "Bola")

