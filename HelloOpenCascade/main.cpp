#include <TopoDS_Shape.hxx>
#include <BRepPrimAPI_MakeBox.hxx>
#include <STEPControl_Writer.hxx>

int main()
{
    // ��������
    BRepPrimAPI_MakeBox boxMaker(10.0, 20.0, 30.0);
    TopoDS_Shape boxShape = boxMaker.Shape();

    // ����ΪSTEP�ļ�
    STEPControl_Writer writer;
    writer.Transfer(boxShape, STEPControl_AsIs);
    writer.Write("box_model.step");

    std::cout << "����ģ���ѱ���Ϊbox_model.step" << std::endl;

    return 0;
}