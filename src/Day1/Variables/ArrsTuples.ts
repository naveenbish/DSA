// Arrays: (Typed arrays)
// Declaring and printing arr number [Example 1]
let arr: number[] = [1, 2, 3, 4, 5];
arr.forEach((num: number) => console.log(num));

// Declaring and printing arr string [Example 2]
let animals: string[] = ["lion", "tiger", "elephant", "donkey", "dog"];
animals.forEach((animal: string) => console.log(animal));

// Tuples: (Fixed-length, typed arrays)
// Example 1
let greetings: [string, string, string] = ["hello", "hola", "konichiwa"];
greetings.forEach((greeting: string) => console.log(greeting));
// Example 2
let randomThings: [string, number, boolean] = ["super syan", 192, false];
randomThings.forEach((thing: string | number | boolean) => console.log(thing));
