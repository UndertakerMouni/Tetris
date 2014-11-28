#ifndef CBIN_H
#define CBIN_H

class CBin {
    private:
        unsigned char** image;
        unsigned int width;
        unsigned int height;

    public:
        CBin(unsigned int w, unsigned int h);
        ~CBin();

        unsigned int getWidth();
        unsigned int getHeight();

        void getImage(unsigned char** destImage);
        void setImage(unsigned char** srcImage);

        unsigned int removeFullLines();
};

#endif // CBIN_H
