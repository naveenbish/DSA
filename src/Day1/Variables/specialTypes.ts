// Special Type
// any -> Avoid using, diables type checking
let anything: any = "can be anything.";
// console.log(anything);
anything = 10;
// console.log(anything);

// unknown -> Better than any, enables type checking
let uncertain: unknown = "might be anything.";
// Checking if this is number.
if (typeof uncertain === "number") {
  console.log(uncertain + 10); // type-safe
}
// Checking if this is string.
if (typeof uncertain === "string") {
  console.log(uncertain + 10); // type-safe
}

// never -> Represents a function that never returns
function throwError(message: string): never {
  throw new Error(message);
}
