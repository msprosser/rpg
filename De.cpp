#include "De.h"

De::De()
{
    m_nbFaces = 100;
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
}

De::De(int nbFaces)
{
    m_nbFaces = nbFaces;
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
}

int De::jeter() {
    return qrand() % ((m_nbFaces + 1) - 1) + 1;
}
