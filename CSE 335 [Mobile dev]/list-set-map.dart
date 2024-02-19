import 'package:dart_class/dart_class.dart' as dart_class;

void main(List<String> arguments) {
  var num1 = 100;
  var num2 = 30;
  List<String> list = ["Sun", "Mon", "Tues", "Wed"];
  Set<String> set = {"Sun", "Mon", "Tues", "Wed"};
  Map<String,dynamic> map = {
    "name": "DIU",
    "Age": 100
  };
  print(list);
  print(set);
  print(map);
  num n1 = 23;
  num n2 = 23.67;
  String st1 = n1.toString();
  print(st1.runtimeType);
  String st2 = n2.toString();
  print(st1.runtimeType);
}
