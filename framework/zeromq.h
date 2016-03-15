#ifndef ZEROMQ_H_LOCK
#define ZEROMQ_H_LOCK

void zeromq_start(char* charMode, char* charName);
void zeromq_stop();
bool zeromq_connected();
void zeromq_send(cJSON* cjsonHandle);
cJSON* zeromq_recv();

#endif