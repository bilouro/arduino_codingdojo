#include "CodingDojoInitialStatus.h"

class CodingDojoManager
{
  private:
    byte _status;
    byte _state_list[];
  public:
    CodingDojoManager();
    void setStatus(byte State);
    const byte static INITIAL=0;
    const byte static TIMEBOX=1;
    const byte static PAUSE=2; 
    const byte static END=3; 
};

CodingDojoManager::CodingDojoManager()
{
//  _state_list =  
//    _state_list[0] = CodingDojoInitialStatus();
//  _state_list[1] = CodingDojoInitialStatus();
//  _state_list[2] = CodingDojoInitialStatus();

}

void CodingDojoManager::setStatus(byte new_status)
{
  byte old_status = _status;
  //_state_list[old_status].out();
  //_state_list[new_status].in();
}
