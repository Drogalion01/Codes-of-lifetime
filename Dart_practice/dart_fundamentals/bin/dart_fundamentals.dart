import 'dart:io';

String _readRequired(String fieldName) {
  while (true) {
    stdout.write('$fieldName: ');
    final input = stdin.readLineSync()?.trim();

    if (input != null && input.isNotEmpty) {
      return input;
    }

    stdout.writeln('Please enter a valid $fieldName.');
  }
}

String _readUniqueContact(Set<String> existingContacts) {
  while (true) {
    final contactNumber = _readRequired('Contact Number');

    if (existingContacts.add(contactNumber)) {
      return contactNumber;
    }

    stdout.writeln(
      'This contact number is already used. Enter a different one.',
    );
  }
}

int _readAge() {
  while (true) {
    stdout.write('Age: ');
    final input = stdin.readLineSync()?.trim();
    final age = int.tryParse(input ?? '');

    if (age != null && age > 0) {
      return age;
    }

    stdout.writeln('Please enter a valid age.');
  }
}

void main() {
  const studentCount = 5;

  final List<Map<String, String>> students = [];
  final Set<String> contactNumbers = {};

  for (var index = 1; index <= studentCount; index++) {
    stdout.writeln('Enter information for student $index:');

    final id = index;
    final name = _readRequired('Name');
    final details = _readRequired('Details/About');
    final presentAddress = _readRequired('Present Address');
    final permanentAddress = _readRequired('Permanent Address');
    final contactNumber = _readUniqueContact(contactNumbers);
    final age = _readAge();

    students.add({
      'ID': id.toString(),
      'Name': name,
      'Details/About': details,
      'Present Address': presentAddress,
      'Permanent Address': permanentAddress,
      'Contact Number': contactNumber,
      'Age': age.toString(),
    });

    stdout.writeln();
  }

  stdout.write('Enter student ID: ');
  final input = stdin.readLineSync()?.trim();

  Map<String, String>? found;
  try {
    found = students.firstWhere((s) => s['ID'] == input);
  } catch (_) {
    found = null;
  }

  if (found != null) {
    found.forEach((k, v) => stdout.writeln('$k: $v'));
  } else {
    stdout.writeln('Student not found for ID $input');
  }

  //   for (var index = 0; index < students.length; index++) {
  //     final student = students[index];
  //     stdout.writeln('Student ${index + 1}:');
  //     student.forEach((field, value) {
  //       stdout.writeln('$field: $value');
  //     });
  //     stdout.writeln();
  //   }
  // }

  String _readRequired(String fieldName) {
    while (true) {
      stdout.write('$fieldName: ');
      final input = stdin.readLineSync()?.trim();

      if (input != null && input.isNotEmpty) {
        return input;
      }

      stdout.writeln('Please enter a valid $fieldName.');
    }
  }

  String _readUniqueContact(Set<String> existingContacts) {
    while (true) {
      final contactNumber = _readRequired('Contact Number');

      if (existingContacts.add(contactNumber)) {
        return contactNumber;
      }

      stdout.writeln(
        'This contact number is already used. Enter a different one.',
      );
    }
  }

  int _readAge() {
    while (true) {
      stdout.write('Age: ');
      final input = stdin.readLineSync()?.trim();
      final age = int.tryParse(input ?? '');

      if (age != null && age > 0) {
        return age;
      }

      stdout.writeln('Please enter a valid age.');
    }
  }
}
