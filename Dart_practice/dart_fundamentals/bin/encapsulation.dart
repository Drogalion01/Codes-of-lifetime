class Student {
    String _fname;
    String _lname;
    int age;
    String faculty;

    Student(this._fname, this._lname, this.age, this.faculty);

    String getFull() {
        return _fname + " " + _lname;
    }

    
    
}