#include "QtGuiApplication1.h"
#include <QApplication>>

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	QtGuiApplication1 gui;
	gui.show();

	app.exec();

	return EXIT_SUCCESS;
}