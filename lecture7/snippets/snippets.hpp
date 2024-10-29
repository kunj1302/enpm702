
//</>--- code #1
//=====================
void get_attribute_offsets() const {
    std::cout << "Offset of 'name_': " << offsetof(Person, name_) << '\n';
    std::cout << "Offset of 'email_': " << offsetof(Person, email_) << '\n';
    std::cout << "Offset of 'phone_': " << offsetof(Person, phone_) << '\n';
    std::cout << "Offset of 'date_of_birth_': " << offsetof(Person, date_of_birth_) << '\n';
}

//</>--- code #2
//=====================
Person(
    const std::string& name,
    const std::string& email,
    const std::string& phone,
    unsigned short day,
    unsigned short month,
    unsigned short year) {
    name_ = name;
    email_ = email;
    phone_ = phone;
    date_of_birth_.day_ = day;
    date_of_birth_.month_ = month;
    date_of_birth_.year_ = year;
}

//</>--- code #6
//=====================
Person(const std::string& name,
       const std::string& email,
       const std::string& phone,
       short day,
       short month,
       short year)
    : name_{name},
      email_{email},
      phone_{phone},
      date_of_birth_{day, month, year} {
    /* empty body */
}