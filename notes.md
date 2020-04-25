## C++ Notes
1. Variable assignment
   1. ``int num1 = 10;``
   2. ``int num2(10);``
   3. ``int num3{20}; // Preferred``
2. Pointers
   1. ```c++
      int x = 5;
      int &y = x;
      std::cout << "x: " << x << '\n';
      std::cout << "address: " << &x << "\n\n";
      std::cout << "y: " << y << '\n';
      std::cout << "address: " << &y << "\n\n";
      -----OUTPUT--------
      x: 5
      address: 0x7ffeea935b78
      y: 5
      address: 0x7ffeea935b78
      ```
      1. y is referencing the same memory location as x. it is essentially an alias for x.
      2. & is the "address of" operator.  
   2. ```c++
      int x = 5;
      int *y = &x;
      std::cout << "x: " << x << '\n';
      std::cout << "address: " << &x << "\n\n";
      std::cout << "y: " << y << '\n';
      std::cout << "address: " << &y << "\n";
      std::cout << "value: " << *y << "\n\n";
      ------OUTPUT---------
      x: 5
      address: 0x7ffeedefeb78
      y: 0x7ffeedefeb78
      address: 0x7ffeedefeb70
      value: 5
      ```
      1. y points to x's spot in memory. BUT y gets its own spot in memory.
      2. * is the "dereference" operator. It allows us to access the value at a particular address. 