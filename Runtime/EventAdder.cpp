#include <stdio.h>
#include "EventAdder.h"

EventAdder::EventAdder(void) 
{
}

EventAdder::~EventAdder(void)
{
	opEvent = NULL;
}


void EventAdder::removeEvent(void)
{
        if (opEvent)
                opEvent->releaseEvent ();
        opEvent = NULL;
}

bool EventAdder::eventAttached(void)
{
        return (opEvent != NULL);
}
                                                                                                                             
int EventAdder::addOperationEvent(OperationEvent *pOpEvent)
{
/*        
	if (!pOpEvent)
                return ERR_BAD_ARGUMENT;
        if (pOpEvent->eventConnected())
                return ERR_OPEVNT__ALREADY_CONNECTED;
*/                                                                                                                  /*           
        if (opEvent)
                return ERR_EVT_ASSIGNED;
*/        
        opEvent = pOpEvent;
//        opEvent->connectEvent ();
	return SUCCESS;
}

