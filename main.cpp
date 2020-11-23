#include <QApplication>
#include <QProgressBar>
#include <QSlider>
//#include <QPushButton>
#include "window.h"

int main(int argc, char **argv) {
QApplication app (argc, argv);
/* QPushButton button ("Hello world !");
button.setText("My text");
button.setToolTip("A tooltip");
QFont font ("Courier"); button.setFont(font);
QIcon icon ("C:/Qt/Tools/QtCreator/share/doc/qtcreator/qbs/images/home.png"); button.setIcon(icon);

// This displays a second window for button1 behind button
QPushButton button1 ("test");
QPushButton button2 ("other", &button1);
button1.show();

button.show();
*/

//Window window;
//window.setFixedSize(100, 50);
/* QPushButton *button = new QPushButton("Hello World", &window);
button->setGeometry(10, 10, 80, 30);
*/

// Create a container window
QWidget window;
window.setFixedSize(200, 80);

// Create a progress bar
// with the range between 0 and 100, and a starting value of 0
QProgressBar *progressBar = new QProgressBar(&window);
progressBar->setRange(0, 100);
progressBar->setValue(0);
progressBar->setGeometry(10, 10, 180, 30);

// Create a horizontal slider
// with the range between 0 and 100, and a starting value of 0
QSlider *slider = new QSlider(&window);
slider->setOrientation(Qt::Horizontal);
slider->setRange(0, 100);
slider->setValue(0);
slider->setGeometry(10, 40, 180, 30);
window.show();

// Connection
// This connection set the value of the progress bar
// while the slider's value changes
QObject::connect(slider, SIGNAL (valueChanged(int)), progressBar, SLOT (setValue(int)));
return app.exec();
}
