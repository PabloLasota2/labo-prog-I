int suma(int a, int b){
    int res;
    res = a + b;
    return res;
}

int resta(int a, int b){
    int res;
    res = a - b;
    return res;
}

float division(int a, int b){
    int res;
    res = (float)a / b;
    return res;
}

int multiplicacion(int a, int b){
    int res;
    res = a * b;
    return res;
}

int factorial(int a){
    int res;
    if(a == 1){
        res = 1;
    }
    else{
        res = a * factorial(a-1);
    }
    return res;
}

