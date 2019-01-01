#ifndef DE_H
#define DE_H
#include <QGlobal.h>
#include <QTime>


class De
{
public:
    De();
    De(int nbFaces);
    int jeter();

private:
    int m_nbFaces;
};

#endif // DE_H
