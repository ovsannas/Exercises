class Time {
    public:
        Time() : hour(0), min(0), sec(0) {}
        Time(int, int, int);
        void setHour (int);
        void setMinute (int);
        void setSecond (int);
        void setTime (int, int, int);

        int getHour ();
        int getMinute ();
        int getSecond ();

        void printStandard();

    private:
        int hour;
        int min;
        int sec;
};



