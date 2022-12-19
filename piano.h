#ifndef piano_h
#define piano_h

#include <QMainWindow>
#include <QPushButton>

class MainWindow : public QMainWindow {
	Q_OBJECT

public:
	MainWindow();

private slots:
	void playWhiteNote(int n);
	void releaseNote();


private:

	QPushButton *whiteKey[7];
};
#endif
