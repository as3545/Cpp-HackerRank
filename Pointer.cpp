//Code

void update(int *a,int *b) {
    // Complete this function    
    
    int sum = *a + *b;
    int sub = abs(*a - *b);
    *a = sum;
    *b= sub;
    
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a >> b;
    update(&a, &b);
    cout<<a<<endl;
    cout<<b;

    return 0;
}
