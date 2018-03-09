// Write a method to replace all spaces in a string with '%20'
// 


function urlReplace(string){

	var final = ""

	string = string.replace(/\s{2,}/g,' '); // <------ Todo lo que no sea S que aparezca al menos dos veces, se busca mas de una coincidencia

	string = string.split(" ")

	console.log(string.length);

	string.forEach(function(element,index){

		if( index != (string.length - 1)){

			string[index] = element + '%20'

		}
	})


	string.forEach(function(element){
		final = final + element
	})	

	console.log(final);

}


urlReplace("Aqui hay cuatro palabras")