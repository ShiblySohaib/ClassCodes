import 'dart:io';

void main(List<String> arguments) {
  print("Enter name: ");
  String? name = stdin.readLineSync();
  print(name);
  print("Enter age: ");
  int? age = int.parse(stdin.readLineSync()!);
  print(age);
  print("Enter ID: ");
  double id = double.parse(stdin.readLineSync()!);
  
}
