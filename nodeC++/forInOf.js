let iterable = new Map([["a", 1], ["b", 2], ["c", 3]]);

console.log(iterable)

for (entry of iterable) {
  console.log("Este es del of : " + entry);

  for(var key in entry){
  	console.log("Estes es del in : " + entry[key])
  }
}

// for (let [key, value] of iterable) {
//   console.log(key);
// }

