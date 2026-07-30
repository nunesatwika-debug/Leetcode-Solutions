double angleClock(int hour, int minutes) {
    //minute - 1- 6 degree
    //hour 1 - 30 degree 
    double h=hour,m=minutes;
    if(h==12) h=0;
    if(m==60) m=0;
    double x= m/60;
    h=30*h+30*x;
    m*=6;
    if(h>m){
    if(h-m>180)
        return 360-(h-m);
    else
        return h-m;
    }
    else
    {
    if(m-h>180)
        return 360-(m-h);
    else
        return m-h;
    }
}