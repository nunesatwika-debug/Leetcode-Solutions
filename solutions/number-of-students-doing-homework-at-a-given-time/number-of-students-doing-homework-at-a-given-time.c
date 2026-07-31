int busyStudent(int* s, int n, int* e, int endTimeSize, int q) {
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]<=q && q<=e[i])
            c++;
    }
    return c;
}