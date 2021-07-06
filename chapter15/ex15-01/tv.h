#ifndef TV_H_
#define TV_H_

class Remote;

class Tv
{
private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
public:
    friend class Remote;
    enum {Off, On};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};

    Tv(int s = Off, int mc = 125) : state(s), volume(5),
        maxchannel(mc), channel(2), mode(Cable), input(TV) {}
    void onoff() { state = (state == On) ? Off : On; }
    bool ison() const { return state == On; }
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
    void set_input() { input = (input == TV) ? DVD : TV; }
    void settings() const;
    void ToggleRemoteMode(Remote& r) const;
};

class Remote
{
private:
    int mode;
    int remoteMode;
public:
    enum { Interactive, Normal };
    friend class Tv;

    Remote(int m = Tv::TV) : mode(m) {}
    bool volup(Tv& t) { return t.volup(); }
    bool voldown(Tv& t) { return t.voldown(); }
    void onoff(Tv& t) { t.onoff(); }
    void chanup(Tv& t) { t.chanup(); }
    void chandown(Tv& t) { t.chandown(); }
    void set_chan(Tv& t, int c) { t.channel = c; }
    void set_mode(Tv& t) { t.set_mode(); }
    void set_input(Tv& t) { t.set_input(); }
    void DisplayRemoteMode();
};

#endif // !TV_H_
