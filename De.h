#ifndef DE_H
#define DE_H
#include <QTime>


class De
{
public:
    De() = delete;
    De(De const& other) = delete;
    De& operator=(De const& other) = delete;

    static int jeter(int nbFaces);
};

#endif // DE_H
