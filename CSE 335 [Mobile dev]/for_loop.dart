import 'package:dart_class/dart_class.dart' as dart_class;
import 'dart:io';

int findIndex(List<int> list, int target){
  for(int i=0;i<list.length;i++){
    if(list[i]==target){
      return i;
    }
  }
  return -1;
}

void main(List<String> arguments) {
  List<int> list = [12,34,545,34,67,85];
  int target = 67;
  int found = findIndex(list, target);
  if(found == -1){
    print("Element not found");
  }
  else{
    print("Element is found at: $found");
  }
}
