#ifndef _AREA_H
#define _AREA_H

class Area{
    private:
        float length;
        float width;
    public:
        void set_length(float len);
        void set_width(float w);
        float get_area(void);
    
};

#endif