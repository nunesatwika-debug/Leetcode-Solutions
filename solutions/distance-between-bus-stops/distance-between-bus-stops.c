

int distanceBetweenBusStops(int* distance, int distanceSize, int s, int d){
    if(s>d){
        int t=s;
        s=d;
        d=t;
    }
    int c=0,t=0;
    for(int i=0;i<distanceSize;i++){
        t+=distance[i];
        if(i>=s &&i<d){
            c+=distance[i];
        }
    }
    int cc=t-c;
    return (c<cc)?c:cc;
}