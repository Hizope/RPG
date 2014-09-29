
#include "Player.hpp"

#ifndef ARCHER_H
#define	ARCHER_H

class Archer : public Player {
public:
    Archer();
    Archer(const Archer& orig);
    virtual ~Archer();

    int getFocus();

    void setFocus(int focus);

private:
    int focus;

};

#endif	/* ARCHER_H */

