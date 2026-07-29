char* categorizeBox(int length, int width, int height, int mass) {
    bool bulk=false,heav=false;
        if(length>=pow(10,4) || width>=pow(10,4) || height>=pow(10,4) || (long long)length*width*height>=pow(10,9))
            bulk = true;
        if(mass>=100)
            heav = true;
        if(bulk && heav)
            return "Both";
        else if(!(bulk) && !(heav))
            return "Neither";
        else if(bulk)
            return "Bulky";
        else
            return "Heavy";
}