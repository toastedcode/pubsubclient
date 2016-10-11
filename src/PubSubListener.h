#pragma once

class PubSubListener
{

public:

   virtual void callback(
      char* topic,
      uint8_t* buffer,
      unsigned int bufferLength) = 0;
};
