int numWaterBottles(int numBottles, int numExchange) {
    int total = numBottles;
    int empty = numBottles;

    while (empty >= numExchange) {
        int newBottles = empty / numExchange;
        empty = empty % numExchange;

        total += newBottles;
        empty += newBottles;
    }

    return total;
}
