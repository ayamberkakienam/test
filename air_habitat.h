//file : air_habitat.h
#ifndef AIRHABITAT_H
#define AIRHABITAT_H
#include "../habitat/habitat.h"

/** @class AirHabitat
 * @brief Menangani objek AirHabitat
 */
class AirHabitat : public Habitat {
public:
    /** @brief Constructor.
     * Melakukan inisialisasi kelas AirHabitat dengan parameter absis dan ordinat lokasi
     */
    AirHabitat(int i, int j);
    /** @brief Destructor.
     * Membebaskan objek AirHabitat
     */
    ~AirHabitat();
};
#endif
