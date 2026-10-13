#include "event.hh"

typedef void (*CallbackFunction)(void* context, Event* event);

struct EventListener
{
    void* context; // Object listening the event (Who)
    CallbackFunction callback; // Method to call (How)
};

class EventDispatcher
{
    std::vector<Listener> ListenersSubscribed;
public:
    void subscribe(void* context, CallbackFunction callback);
    void getListenerAt();
    void dispatchEvent(Event* event);
};