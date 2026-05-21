import 'dart:io';
// Removed dependency on intl to avoid DateFormat not defined error

void main() {
  var n = '25ng';
  const double pi = 3.14159;
  DateTime now = DateTime.now();
  String twoDigits(int n) => n.toString().padLeft(2, '0');
  final time =
      '${twoDigits(now.hour)}:${twoDigits(now.minute)}:${twoDigits(now.second)}';
  print('$pi is sth I wrote at $time');
}
