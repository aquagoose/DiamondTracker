#pragma once

#include <cstdint>
#include <vector>

namespace Diamond::Audio {

    class Mixer {
    private:
        struct Voice;

        std::vector<Voice> _voices;

    public:
        Mixer(uint32_t sampleRate, uint16_t numVoices);

    private:
        struct Voice {

        };
    };

}
