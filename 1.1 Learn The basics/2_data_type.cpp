// Data type refers to the type of value a variable has and the way the computer interprets it.
// Each data type has a different size. You’ve studied 5 different data types and the sizes of the data types:
// Integer: 4 bytes
// Long: 8 bytes
// Float: 4 bytes
// Double: 8 bytes
// Character: 1 byte

int dataTypes(string type) {
  // Write your code here
  if (type == "Integer")
    return 4;
  else if (type == "Long")
    return 8;
  else if (type == "Float")
    return 4;
  else if (type == "Double")
    return 8;
  else if (type == "Character")
    return 1;
}
