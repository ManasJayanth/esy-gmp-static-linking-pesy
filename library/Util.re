external myCFunction: unit => int = "core";

let foo = () => {
  print_int(myCFunction());
  print_endline("\nHello");
};
