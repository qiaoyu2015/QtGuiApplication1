#include "QtGuiApplication1.h"

#include <vtkSphereSource.h>
#include <vtkPolyData.h>
#include <vtkSmartPointer.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkRenderWindowInteractor.h>

#include <qdebug.h>
#include <vtkPolyDataReader.h>

using namespace pcl::console;

typedef pcl::visualization::PointCloudColorHandler<pcl::PCLPointCloud2> ColorHandler;
typedef ColorHandler::Ptr ColorHandlerPtr;
typedef ColorHandler::ConstPtr ColorHandlerConstPtr;

typedef pcl::visualization::PointCloudGeometryHandler<pcl::PCLPointCloud2> GeometryHandler;
typedef GeometryHandler::Ptr GeometryHandlerPtr;
typedef GeometryHandler::ConstPtr GeometryHandlerConstPtr;

#define NORMALS_SCALE 0.01f
#define PC_SCALE 0.001f


QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void QtGuiApplication1::showPointsClouds()
{
	//// ����һ������
	//vtkSmartPointer<vtkSphereSource> sphereSource =
	//	vtkSmartPointer<vtkSphereSource>::New();
	//sphereSource->SetCenter(0.0, 0.0, 0.0);   // ��������
	//sphereSource->SetRadius(5.0);             // ���ð뾶

	//										  // ӳ�䡢��ͼ��
	//vtkSmartPointer<vtkPolyDataMapper> mapper =
	//	vtkSmartPointer<vtkPolyDataMapper>::New();
	//mapper->SetInputConnection(sphereSource->GetOutputPort());    // ����ӳ�����Ⱦ����

	//															  // ��Ա
	//vtkSmartPointer<vtkActor> actor =
	//	vtkSmartPointer<vtkActor>::New();
	//actor->SetMapper(mapper);

	//// ��Ⱦ��
	//vtkSmartPointer<vtkRenderer> renderer =
	//	vtkSmartPointer<vtkRenderer>::New();
	//// ��Ⱦ����
	//vtkSmartPointer<vtkRenderWindow> renderWindow =
	//	vtkSmartPointer<vtkRenderWindow>::New();

	//pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);  
	//{
	//	for (float y = -0.5f; y <= 0.5f; y += 0.01f)
	//	{
	//		for (float z = -0.5f; z <= 0.5f; z += 0.01f)
	//		{
	//			pcl::PointXYZ point;
	//			point.x = 2.0f - y;
	//			point.y = y;
	//			point.z = z;
	//			cloud->points.push_back(point);
	//		}
	//	}
	//	cloud->width = cloud->points.size();
	//	cloud->height = 1;
	//}


	pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
	if(pcl::io::loadPCDFile("F:\\result.pcd", *cloud) == -1){
		//* load the file 
		PCL_ERROR("Couldn't read PCD file \n");
		return;
	}
	qDebug()<<"Loaded %d data points from PCD\n"<<cloud->width * cloud->height;

	pcl::visualization::PCLVisualizer viewer("Cloud Viewer",false);

	vtkSmartPointer<vtkRenderWindow> renderWindow = viewer.getRenderWindow();

	widget = new QVTKWidget(ui.frame_showresult);
	int widgetWidth = ui.frame_showresult->width();
	int widgetHeight = ui.frame_showresult->height();
	widget->SetRenderWindow(renderWindow);
	widget->resize(widgetWidth, widgetHeight);
	widget->show();

	viewer.setupInteractor(widget->GetInteractor(), widget->GetRenderWindow());
	viewer.getInteractorStyle()->setKeyboardModifier(pcl::visualization::INTERACTOR_KB_MOD_SHIFT);
	//viewer.setCameraPosition(0, 0, -3.0, 0, -1, 0);
	//viewer.addCoordinateSystem(0.3);
	viewer.addPointCloud(cloud);

	//renderWindow->AddRenderer(renderer);
	//// ��Ⱦ���ڽ���
	////	vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor =
	////		vtkSmartPointer<vtkRenderWindowInteractor>::New();
	////	renderWindowInteractor->SetRenderWindow(renderWindow);
	//// �����Ա
	//renderer->AddActor(actor);

	//renderer->SetBackground(.3, .6, .3); // Background color green

	//renderWindow->Render();
	////	renderWindowInteractor->Start();
}

bool QtGuiApplication1::isValidFieldName(const std::string & field)
{
	if (field == "_")
		return (false);

	if ((field == "vp_x") || (field == "vx") || (field == "vp_y") || (field == "vy") || (field == "vp_z") || (field == "vz"))
		return (false);
	return (true);
}

bool QtGuiApplication1::isMultiDimensionalFeatureField(const pcl::PCLPointField & field)
{
	if (field.count > 1)
		return (true);
	return (false);
}

void QtGuiApplication1::resizePointsClouds()
{
	int widgetWidth = ui.frame_showresult->width();
	int widgetHeight = ui.frame_showresult->height();

	widget->resize(widgetWidth, widgetHeight);
}
