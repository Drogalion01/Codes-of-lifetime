import 'dart:io';

void main() {
  var grade;
  var marks;
  stdout.write("Enter your marks!:\n=>");
  marks = int.parse(stdin.readLineSync()!);
  if (marks >= 80)
    print("You have got A+");
  else if (marks >= 70)
    print("You have got A");
  else
    print("Failed");

  final name = stdin.readLineSync()?.trim() ?? "Bhuski";
  print(name);
}
