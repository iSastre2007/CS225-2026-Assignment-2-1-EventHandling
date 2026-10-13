#include "event_callbacks.hh"


    void EventDispatcher::subscribe(void* context, CallbackFunction callback)
    {
        EventListener listener {context, callback};
        listeners.push_back(listener);
    }
    void EventDispatcher::getListenerAt()
    {

    }
    void EventDispatcher::dispatchEvent(Event* event)
    {
        for(auto listener : listeners)
        {
            listener.callback(listener.context, event);
        }
    }
