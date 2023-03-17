quadrado(int x){
    int y = pow(x,2);
    return y;
}
cubo(int x){
    int y = pow(x,3);
    return y;
}

main(){
    int x,rq,rc;
    printf("entre com um numero: ");
    scanf("%d",&x);
    rq = quadrado(x);
    rc = cubo(x);
    printf("o quadrado eh %d e o cubo eh %d",rq,rc);
}