class CodingDojoTimeBoxStatus
{
  private:
    unsigned long _total_elapsed_time=0;
    unsigned long _initial;
    unsigned byte _timebox_room=7;
    unsigned long _millis = 1000;
  public:
    CodingDojoTimeBoxStatus();
    void in();
    void out();
    void setup();
    void check();
};

CodingDojoTimeBoxStatus::CodingDojoTimeBoxStatus(byte timebox_room){
  _timebox_room = timebox_room;
}

void CodingDojoTimeBoxStatus::in()
{
  //SOM
  //LED branco
  //TEXTO
 this._initial = millis();
}
void CodingDojoTimeBoxStatus::out()
{
 this._total_elapsed_time += millis() - this._initial;
}
void CodingDojoTimeBoxStatus::setup()
{
  _total_elapsed_time=0;
}
void CodingDojoTimeBoxStatus::check()
{  //todo:refactor extract method
 if ( (this._total_elapsed_time + (millis() - this._initial)) > this._timebox_room*this._millis) {
   //the parent will be passed at instanciation ?! ?! :-$
   //CodingDojoTimeBoxStatus tm(this); ?!
   //_parent.set_status(END);
 }
}

