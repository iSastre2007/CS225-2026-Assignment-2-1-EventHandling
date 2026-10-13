#include "event.hh"

typedef void (*CallbackFunction)(void* context, event* event);

struct Listener
{
void* context; // Object listening the event (Who)
Callback callback; // Method to call (How)
};