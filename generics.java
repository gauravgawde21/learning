class Test<T>
{
    // An object of type T is declared
    T obj;
    Test(T obj) {  this.obj = obj;  }  // constructor
    public T getObject()  { return this.obj; }
}
  
// Driver class to test above
class Main
{
    public static void main (String[] args)
    {
        // instance of Integer type
        Test <Integer> iObj = new Test<Integer>(123);
        System.out.println(iObj.getObject());
  
        // instance of String type
        Test <String> sObj =
                          new Test<String>("Test");
        System.out.println(sObj.getObject());
    }
}