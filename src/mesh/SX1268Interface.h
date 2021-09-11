#pragma once

#include "SX126xInterface.h"

/**
 * Our adapter for SX1268 radios
 */
class SX1268Interface : public SX126xInterface<SX1268>
{
  public:
    /// Initializing the frequency of the SX1268 module regardless of the region
    float freq = 433.0;

    SX1268Interface(RADIOLIB_PIN_TYPE cs, RADIOLIB_PIN_TYPE irq, RADIOLIB_PIN_TYPE rst, RADIOLIB_PIN_TYPE busy, SPIClass &spi);
};