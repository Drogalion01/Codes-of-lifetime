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
  st.addAll({2, 10});
  print(st);
  //all functions are same as list

  //Map
  Map<int, String> mp = {1: "Nindiya re", 2: 'Dekho', 3: 'Faasle'};
  print(mp[2]);
  mp[10] = 'Tere Pyar Mein';
  print(mp);
  mp.addAll({5: 'Nusu', 9: 'Dim'});
  print(mp.values);
  print(mp.keys);
  mp.remove(3);
  print(mp);

  Map<int, Map<int, String>> tmp = {
    1: {2: 'Maher', 4: 'Jayed', 6: 'Sharafat'},
    10: {1: 'Mim', 2: 'Dim', 3: 'Payratoli'},
  };
  print(tmp[10]![3]);

  print(mp.containsKey(9));
  print(mp.containsValue('Dekho2'));
  print(mp.length);
  ;

  name.sort();
  print(name);
}
