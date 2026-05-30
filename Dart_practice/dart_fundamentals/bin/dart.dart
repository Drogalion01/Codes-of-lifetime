// //Data types
// main() {
//   //List
//   List<String> name = ['Drog', 'Fenry', 'Eliza'];
//   name.add('Nancy');
//   name.addAll(['kutta', 'shuwor']);
//   print(name);
//   print(name.length);
//   name.insert(3, 'Fifi');
//   print(name);
//   print(name.first);
//   print(name.last);
//   name.removeWhere((i) => i == 'Eliza');
//   name.remove('Drog');
//   name.removeAt(2);
//   print(name.isEmpty);
//   name.sort((a, b) => b.compareTo(a));
//   print(name.reversed);

//   //Set
//   Set<int> st = {2, 3, 4, 5, 2, 23, 4, 5, 2, 3, 4, 5};
//   print(st);
//   st.addAll({2, 10});
//   print(st);
//   print(st.elementAt(3));
//   print(st.hashCode);
//   //all functions are same as list

//   //Map
//   Map<int, String> mp = {1: "Nindiya re", 2: 'Dekho', 3: 'Faasle'};
//   print(mp[2]);
//   mp[10] = 'Tere Pyar Mein';
//   print(mp);
//   mp.addAll({5: 'Nusu', 9: 'Dim'});
//   print(mp.values);
//   print(mp.keys);
//   mp.remove(3);
//   print(mp);

//   Map<int, Map<int, String>> tmp = {
//     1: {2: 'Maher', 4: 'Jayed', 6: 'Sharafat'},
//     10: {1: 'Mim', 2: 'Dim', 3: 'Payratoli'},
//   };
//   print(tmp[10]![2]);
//   print(tmp[1]!.containsKey(4));
//   print(tmp[10]!.length);
//   print(tmp[10]!.values.last);
//   print(tmp[10]!.values);

//   print(mp.containsKey(9));
//   print(mp.containsValue('Dekho2'));
//   print(mp.length);

//   name.sort();
//   print(name);

//   var student = new Map();
//   student['name'] = '14 Tom';
//   student['age'] = 25;
//   print(student);
// }

//Type casting

// main() {
//   int a = 234;
//   double b = 3.14159;
//   int s = a + b.toInt();
//   print(s);
//   double s2 = a.toDouble() / b;
//   print(s2.toStringAsFixed(16));
//   String r = s2.toString();
//   print(r);

//   double t = double.parse(r) + b;
//   print(t);
//   int c = int.tryParse('1254ff') ?? 0;
//   print(c);
//   print(r.runtimeType);

//   a = (234 / 4).toInt();
//   print(a);
// }

//Looping
// import 'dart:io';

// main() {
//   var st = ['Rk', 'Hs', 'Ad'];
//   for (var item in st) {
//     //For each
//     print(item);
//   }

//   for (int i = 0; i < st.length; i++) {
//     print('Hello, Bolod ${st[i]}!!');
//   }

//   Map<int, String> mp = {1: "Nindiya re", 2: 'Dekho', 3: 'Faasle'};
//   for (var item in mp.entries) {
//     print('${item.key} : ${item.value}');
//   }

//   Map<int, Map<int, String>> tmp = {
//     1: {2: 'Maher', 4: 'Jayed', 6: 'Sharafat'},
//     10: {1: 'Mim', 2: 'Dim', 3: 'Payratoli'},
//   };
//   for (Map<int, String> el in tmp.values) {
//     print(el.values);
//     print(el.keys);
//     print(el[1] ?? 'Not available');
//   }

//   st.forEach((i) {
//     print(i);
//   });
//   mp.forEach((key, value) {
//     print('$key : $value');
//   });

//   st.forEach((i) {
//     stdout.write('$i ');
//   });

//   var hudai = [];
//   for (int i = 0; i < 3; i++) {
//     hudai.add(stdin.readLineSync() ?? 'Invalid');
//     hudai[i] = int.tryParse(hudai[i]) ?? 0;
//     stdout.write('${hudai[i]} ');
//   }
// }

// //Functions
// void main() {
//   var bhog = 'Raiyan';
//   for (int i = 0; i < 5; i++) msg(bhog: bhog);
// }

// //2 types: positional, named
// void msg({required String bhog, int? age, bool? manush}) {
//   print('Hello, $bhog');
//   print('Khaichish?');
//   print(manush ?? false);
//   print('Ghuma ${age ?? 0}');
// }

//Class
void main() {}
