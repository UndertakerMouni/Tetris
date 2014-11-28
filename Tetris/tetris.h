#ifndef TETRIS_H
#define TETRIS_H

#include <QMainWindow>
#include <QKeyEvent>
#include <bin.h>
#include <brick.h>

namespace Ui {
class Tetris;
}

class Tetris : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tetris(QWidget *parent = 0);
    ~Tetris();

private:
    Ui::Tetris *ui;

    CBin *bin,*bin1,*bin2,*bin3;
    CBrick *activeBrick,*activeBrick1,*activeBrick2,*activeBrick3;
    int gameOver,gameOver1;
    int brickInFlight,brickInFlight1;
    int brickType,brickType1,brickType2,brickType3;
    unsigned int initOrientation,initOrientation1,initOrientation2,initOrientation3;
    int notCollide,notCollide1;
    unsigned int numLines,numLines1;
    unsigned char**image,**image1;
    unsigned char**image2,**image3;
    int difficulty;
    int GameModal;
    int timerID;

    bool RandomFlag,RandomFlag1;
    bool Pause1,Pause2;
    bool p;
    bool Flag;
    bool modal;

    ///////////////////////////////////
    void init();

public slots:
    void gameStart();
    void onPause();

    void onDiffEasy();
    void onDiffMid();
    void onDiffSup();

protected:
    void keyPressEvent(QKeyEvent *event);
    void timerEvent(QTimerEvent *event);
    void paintEvent(QPaintEvent *event);

};

#endif // TETRIS_H
