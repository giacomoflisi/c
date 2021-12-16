#ifndef RAZIONALI_H_
#define RAZIONALI_H_

struct fraz {
    int num;
    unsigned int den;
};

extern void fr_somma(struct fraz *ris, const struct fraz *a, const struct fraz *b);

#endif //MATRIX_H_
