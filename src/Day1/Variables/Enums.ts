// Enum: Enum helps to define a set of named constants. Using enums can make it easier to document intent, or create a set of distinct cases.
// Example 1
enum Role {
  Admin,
  User,
  Guest,
}
let myRole: Role = Role.User;

// Example 1
enum Status {
  Success = "SUCCESS",
  Failure = "FAILURE",
}
let myResult: Status = Status.Success;
