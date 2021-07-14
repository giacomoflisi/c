#ifndef SCACCHIERA_H_
#define SCACCHIERA_H_

struct scacchiera {
    char caselle[64];
};

extern void stampa_scacchiera(const struct scacchiera *sc);

#endif //SCACCHIERA_H_
