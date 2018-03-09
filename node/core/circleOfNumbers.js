// Consider integer numbers from 0 to n - 1 written down along the circle in such a way that the distance between any two neighbouring numbers is equal (note that 0 and n - 1 are neighbouring, too).

// Given n and firstNumber, find the number which is written in the radially opposite position to firstNumber.

// Example

// For n = 10 and firstNumber = 2, the output should be
// circleOfNumbers(n, firstNumber) = 7.

function circleOfNumbers(n, firstNumber) {

	if(firstNumber == n/2){
		return 0
	}
    
    var total = firstNumber + n/2

    if(total > n){
    	return total - n
    }

    return total
}



console.log(circleOfNumbers(10,7))