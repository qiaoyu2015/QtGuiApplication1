#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1.h"

#include <QVTKWidget.h>

#include <pcl/common/common.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h> 
#include <cfloat>
#include <pcl/visualization/eigen.h>
//#include <pcl/visualization/vtk.h>
#include <pcl/visualization/point_cloud_handlers.h>
#include <pcl/visualization/cloud_viewer.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/visualization/image_viewer.h>
#include <pcl/visualization/histogram_visualizer.h>
#if VTK_MAJOR_VERSION>=6 || (VTK_MAJOR_VERSION==5 && VTK_MINOR_VERSION>6)
#include <pcl/visualization/pcl_plotter.h>
#endif
#include <pcl/visualization/point_picking_event.h>
#include <pcl/console/print.h>
#include <pcl/console/parse.h>
#include <pcl/console/time.h>
#include <pcl/search/kdtree.h>

class QtGuiApplication1 : public QMainWindow
{
    Q_OBJECT

public:
    QtGuiApplication1(QWidget *parent = Q_NULLPTR);

	bool isValidFieldName(const std::string &field);

	bool isMultiDimensionalFeatureField(const pcl::PCLPointField &field);

public slots:
	void showPointsClouds();

	void resizePointsClouds();

private:
    Ui::QtGuiApplication1Class ui;

	QVTKWidget *widget;
};
