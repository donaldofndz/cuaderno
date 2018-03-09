// Given a string s, find and return the first instance of a non-repeating character in it. If there is no such character, return '_'.

// Example

// For s = "abacabad", the output should be
// firstNotRepeatingCharacter(s) = 'c'.

// There are 2 non-repeating characters in the string: 'c' and 'd'. Return c since it appears in the string first.

// For s = "abacabaabacaba", the output should be
// firstNotRepeatingCharacter(s) = '_'.

// There are no characters in this string that do not repeat.

// Input/Output

// [execution time limit] 4 seconds (js)

// [input] string s

// A string that contains only lowercase English letters.

// Guaranteed constraints:
// 1 ≤ s.length ≤ 105.

// [output] char

// The first non-repeating character in s, or '_' if there are no characters that do not repeat.
// 


function firstNotRepeatingCharacter(s) {

	var objeto = new Object
	var arrFinal = []

	for(var i = 0; i < s.length; i++){

		if(objeto.hasOwnProperty(s[i])){
			objeto[s[i]]++	
		}else{
			objeto[s[i]] = 1
		}
	}

	for(var i = 0; i < s.length; i++){

		if(objeto[s[i]] == 1){
			return s[i]
		}
	}

	return "_"

}

// function firstNotRepeatingCharacter(s) {
    
//     var arr = s.split("");
    
//     for(var i = 0; i < arr.length; i++){
//         var chr = arr[i];
//         if( arr.indexOf(arr[i]) == arr.lastIndexOf(arr[i])){  ---->indexOf: la primera ocurrencia de una letr ---> lastIndexOf: ultimo lugar donde aparecio la letra
//             return arr[i]
//         }
        
//     }
    
//     return "_"
// }


console.log(firstNotRepeatingCharacter("abacabad"))