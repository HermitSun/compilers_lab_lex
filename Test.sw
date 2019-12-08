// Test.sw
// OS.sw contains a function print
import OS;

// properties
number array[10];
Test next = void;

// methods
export void say_hello(){
    number i = 0;
    while(i < 3){
        if(i == 1){
            OS.print(get_msg());
            array[i] = i;
            continue;
        } else {
            OS.print(add(2, 1.0));
            break;
        }
    }
    Test t;
    next = t;
}

number add(number a, number b){
    return a + b;
}

string get_msg(){
    return "Hello World!";
}