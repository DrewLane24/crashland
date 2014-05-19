#ifndef _PLATFORMS_H_
#define _PLATFORMS_H

typedef double Vec[3];
#define USE_PLATFORMS
#ifdef USE_PLATFORMS
typedef struct t_platforms {
        int shape;
        Vec pos;
        Vec lastpos;
        float width;
        float width2;
        float radius;
} Platforms;
#endif
extern void draw_platforms(void);

#endif
