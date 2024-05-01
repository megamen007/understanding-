// this is the simplest type of that can be used .
// it is a compile time cast .

// can perform conversions between pointers to related classes.

// from derived to base and from the base to the derived .
// that actually means that static cast supports both upcasting (form derived class pointer to base class pointer )
// and support downcasting (from base class pointer to derived class pointer)
// and that offer flexibility in handling inhertance relationships unlic dynamic cast that only support downcasting .

// when we use static cast , the compiler ensures that the classes involved are related through inheritance.
// which gurantee some level of comptability between the objects being converted .
// this reduce the risk of invalid conversion .

// unlike "dynamic cast" static cast does not perform runtime type checking to verify if the object being converted is a full object .
// it relies on the progremmers assurance that the conversion is safe .

// unlike "dynamic cast" which incurs runtime type checking overhead static cast bypasses theses checks , 
// resulting faster execution , this spped comes with the trade-off of reduced safety guarantees .

// static cast can also be used to perform any other non-pointer conversion that could also be performed implicitly 
// like standard conversion between fundamental types .

// static cast is able to call the conversion operator of the class if it is defined .

// syntax of static-cast :
// static_cast <dest_type> (source);

// so to use static_cast in case of inheritance , the base class must be accessible 