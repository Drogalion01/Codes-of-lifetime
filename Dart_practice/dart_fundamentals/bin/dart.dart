main() {
  //List
  List<String> name = ['Drog', 'Fenry', 'Eliza'];
  name.add('Nancy');
  name.addAll(['kutta', 'shuwor']);
  print(name);
  print(name.length);
  name.insert(3, 'Fifi');
  print(name);
  print(name.first);
  print(name.last);
  name.removeWhere((i) => i == 'Eliza');
  print(name);

  //Set
  Set<int> st = {2, 3, 4, 5, 2, 23, 4, 5, 2, 3, 4, 5};
  print(st);
}
