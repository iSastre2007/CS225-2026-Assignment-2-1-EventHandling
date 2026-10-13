#include "event.hh"

class IEventHandler
{
    void call(Event* event);
};