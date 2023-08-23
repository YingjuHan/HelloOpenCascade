#include <TopoDS_Shape.hxx>
#include <BRepPrimAPI_MakeBox.hxx>
#include <STEPControl_Writer.hxx>

int main()
{
    // 创建盒子
    BRepPrimAPI_MakeBox boxMaker(10.0, 20.0, 30.0);
    TopoDS_Shape boxShape = boxMaker.Shape();

    // 保存为STEP文件
    STEPControl_Writer writer;
    writer.Transfer(boxShape, STEPControl_AsIs);
    writer.Write("box_model.step");

    std::cout << "盒子模型已保存为box_model.step" << std::endl;

    return 0;
}