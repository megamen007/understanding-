// dynamic casting is mainly used for safe downcasting at run time in inheritance hierarchies ;
// to work on dynamic_cast there must be one virtual function in the base class ;
// a dynamic cast works only polymorphic base class because it uses this information to decide safe downcasting ;
// those information are typically implemented using virtual function tables (vtables);
// those v tables store information about actual type of the object at runtime .
// whenever a class contains a virtual function the compiler creates a vtable for that class , 
// each object of that class is then provided with a hidden pointer to this table .
// the v table has one entry for each virtual function  accessible by the class .
// the vpointer is created only if a class has or inherit a virtual function .

// so Dowcasting typically is going down so its casting a base class pointer or reference to a derived class pointer or refrence 
// vice & versa  upcasting is the opposite .

// when dyanmic cast can tcast and its seems impossible it returns a null pointer to indicate the failure .
// an exception of type bad_cast is thrown if the conversion is not possible .

// dynamic cast can also cast null pointers even  between pointers to unrelated classes .
// also can cast pointers of any type to void pointers .

// a dynamic cast has a runtime overhead beacuse it checks object types at run time using Run time Type information .

// dynamic cast syntax :
// dynamic_cast <new_type>(Expression).


// Resources :
// to understand vtable & and vptr : https://www.geeksforgeeks.org/vtable-and-vptr-in-cpp/.
// to understand dynamic cast : https://www.geeksforgeeks.org/dynamic-_cast-in-cpp/.
