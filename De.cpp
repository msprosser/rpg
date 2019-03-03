#include "De.h"

int De::jeter(int nbFaces) {
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
    return qrand() % ((nbFaces + 1) - 1) + 1;
}
