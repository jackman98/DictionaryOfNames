#include <QCoreApplication>
#include <QDataStream>
#include <QString>
#include <QFile>
#include <QDebug>

int main()
{
	QFile file("names.txt");
	if (!file.open(QFile::ReadOnly)) {
		return -1;
	}
	QDataStream in(&file);

	QFile fileOut("namesBig.txt");
	if (!fileOut.open(QIODevice::Text | QIODevice::Append)) {
		return -1;
	}
	QTextStream out(&fileOut);

	QStringList list;
	QString str;
	char *bytes;
	while (!in.atEnd()) {

//		in.readBytes()

//		if (!in.read) {
//		return -1;
//	}
	in >> str;
	qDebug() << str;
//		QString str1 = str.replace("\"", ",");
//		qDebug() << str.replace("\"", ",").simplified().trimmed().split(',', QString::SkipEmptyParts);
//		list += str.replace("\"", ",").simplified().trimmed().split(',', QString::SkipEmptyParts);
}
//	while (!in.atEnd()) {
//		QString str = in.readLine();
//		for (int i = 0; i < 10; ++i) {
//			out << str;
//		}
//	}
qDebug() << list.size();

}
