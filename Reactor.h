#ifndef REACTOR_H
#define REACTOR_H

#include "EventHandler.h"

void Register(EventHandler* handler);
void Unregister(EventHandler* handler);

#endif
