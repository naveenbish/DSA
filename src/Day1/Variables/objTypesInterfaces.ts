// Object types
const userObj: { name: string; age: number } = {
  name: "John",
  age: 30,
};

// Object interface
interface User {
  name: string;
  age: number;
  isAdmin?: boolean; // Optional property
}

const newUser: User = {
  name: "Naveen",
  age: 25,
  isAdmin: false,
};

const newUser2: User = {
  name: "Nitin",
  age: 25,
};

console.log(newUser);
console.log("\n");
console.log(newUser2);
