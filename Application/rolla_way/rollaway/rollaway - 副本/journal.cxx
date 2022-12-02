// NX 12.0.0.27
// Journal created by haomjc on Thu Jan  3 10:36:17 2019 中国标准时间

//
#include <uf_defs.h>
#include <NXOpen/NXException.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Annotations_Dimension.hxx>
#include <NXOpen/Arc.hxx>
#include <NXOpen/BasePart.hxx>
#include <NXOpen/Body.hxx>
#include <NXOpen/BodyCollection.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/CartesianCoordinateSystem.hxx>
#include <NXOpen/CoordinateSystemCollection.hxx>
#include <NXOpen/CurveCollection.hxx>
#include <NXOpen/DatumAxis.hxx>
#include <NXOpen/DatumCollection.hxx>
#include <NXOpen/DatumPlane.hxx>
#include <NXOpen/Direction.hxx>
#include <NXOpen/DirectionCollection.hxx>
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/Edge.hxx>
#include <NXOpen/EdgeTangentRule.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/ExpressionCollection.hxx>
#include <NXOpen/Face.hxx>
#include <NXOpen/Features_ChamferBuilder.hxx>
#include <NXOpen/Features_DatumCsys.hxx>
#include <NXOpen/Features_DatumCsysBuilder.hxx>
#include <NXOpen/Features_DatumPlaneBuilder.hxx>
#include <NXOpen/Features_DatumPlaneFeature.hxx>
#include <NXOpen/Features_EditWithRollbackManager.hxx>
#include <NXOpen/Features_Extrude.hxx>
#include <NXOpen/Features_ExtrudeBuilder.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/GeometricUtilities_BooleanOperation.hxx>
#include <NXOpen/GeometricUtilities_Extend.hxx>
#include <NXOpen/GeometricUtilities_FeatureOffset.hxx>
#include <NXOpen/GeometricUtilities_FeatureOptions.hxx>
#include <NXOpen/GeometricUtilities_Limits.hxx>
#include <NXOpen/GeometricUtilities_MultiDraft.hxx>
#include <NXOpen/GeometricUtilities_SimpleDraft.hxx>
#include <NXOpen/GeometricUtilities_SmartVolumeProfileBuilder.hxx>
#include <NXOpen/ICurve.hxx>
#include <NXOpen/IPlane.hxx>
#include <NXOpen/ModelingView.hxx>
#include <NXOpen/ModelingViewCollection.hxx>
#include <NXOpen/NXMatrix.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/PartLoadStatus.hxx>
#include <NXOpen/Plane.hxx>
#include <NXOpen/PlaneTypes.hxx>
#include <NXOpen/Point.hxx>
#include <NXOpen/PointCollection.hxx>
#include <NXOpen/Preferences_SessionPreferences.hxx>
#include <NXOpen/Preferences_SessionSketch.hxx>
#include <NXOpen/Preferences_SketchPreferences.hxx>
#include <NXOpen/RegionBoundaryRule.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/ScCollectorCollection.hxx>
#include <NXOpen/ScRuleFactory.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SectionCollection.hxx>
#include <NXOpen/SelectionIntentRule.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Sketch.hxx>
#include <NXOpen/SketchCollection.hxx>
#include <NXOpen/SketchDimensionalConstraint.hxx>
#include <NXOpen/SketchGeometricConstraint.hxx>
#include <NXOpen/SketchInPlaceBuilder.hxx>
#include <NXOpen/SketchTangentConstraint.hxx>
#include <NXOpen/SmartObject.hxx>
#include <NXOpen/Unit.hxx>
#include <NXOpen/UnitCollection.hxx>
#include <NXOpen/Update.hxx>
#include <NXOpen/View.hxx>
#include <NXOpen/Xform.hxx>
#include <NXOpen/XformCollection.hxx>
// We are currently testing removal of using namespace NXOpen.
// Uncomment the below line if your journal does not compile.
// using namespace NXOpen;

extern "C" DllExport int ufusr_ask_unload()
{
    return (int)NXOpen::Session::LibraryUnloadOptionImmediately;
}

extern "C" DllExport void ufusr(char *param, int *retCode, int paramLen)
{
    NXOpen::Session *theSession = NXOpen::Session::GetSession();
    NXOpen::Part *workPart(theSession->Parts()->Work());
    NXOpen::Part *displayPart(theSession->Parts()->Display());
    // ----------------------------------------------
    //   Menu: 插入(S)->基准/点(D)->基准平面(D)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId1;
    markId1 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId1, NULL);
    
    NXOpen::Session::UndoMarkId markId2;
    markId2 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    // can not output code to find <JABL>: <UGS::EXTRUDE_BUILDER> &00007FF4F3908D00 [62482]
    NXOpen::Features::FeatureBuilder *nullNXOpen_Features_FeatureBuilder(NULL);
    NXOpen::Features::Feature *feature1;
    feature1 = nullNXOpen_Features_FeatureBuilder->CommitFeature();
    
    theSession->DeleteUndoMark(markId2, NULL);
    
    theSession->SetUndoMarkName(NXOpen::Session::UndoMarkId(199), NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    NXOpen::Section *section1(dynamic_cast<NXOpen::Section *>(workPart->FindObject("HANDLE R-6705")));
    section1->CleanMappingData();
    
    // can not output code to find <JABL>: <UGS::EXTRUDE_BUILDER> &00007FF4F3908D00 [62482]
    NXOpen::Builder *nullNXOpen_Builder(NULL);
    nullNXOpen_Builder->Destroy();
    
    NXOpen::Expression *expression1(dynamic_cast<NXOpen::Expression *>(workPart->Expressions()->FindObject("p44")));
    workPart->Expressions()->Delete(expression1);
    
    NXOpen::Expression *expression2(dynamic_cast<NXOpen::Expression *>(workPart->Expressions()->FindObject("p45")));
    workPart->Expressions()->Delete(expression2);
    
    NXOpen::Expression *expression3(dynamic_cast<NXOpen::Expression *>(workPart->Expressions()->FindObject("p46")));
    workPart->Expressions()->Delete(expression3);
    
    theSession->DeleteUndoMark(NXOpen::Session::UndoMarkId(199), NULL);
    
    NXOpen::Features::EditWithRollbackManager *editWithRollbackManager1(dynamic_cast<NXOpen::Features::EditWithRollbackManager *>(workPart->Find(NXOpen::NXString("EditWithRollbackData {BAJ-25E143-16\346\273\232\351\201\223}", NXOpen::NXString::UTF8))));
    editWithRollbackManager1->UpdateFeature(false);
    
    editWithRollbackManager1->Stop();
    
    editWithRollbackManager1->Destroy();
    
    workPart->Close(NXOpen::BasePart::CloseWholeTreeFalse, NXOpen::BasePart::CloseModifiedUseResponses, NULL);
    
    workPart = NULL;
    displayPart = NULL;
    NXOpen::Session::UndoMarkId markId3;
    markId3 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\346\233\264\346\224\271\346\230\276\347\244\272\351\203\250\344\273\266", NXOpen::NXString::UTF8));
    
    NXOpen::Part *part1(dynamic_cast<NXOpen::Part *>(theSession->Parts()->FindObject("_model1")));
    NXOpen::PartLoadStatus *partLoadStatus1;
    NXOpen::PartCollection::SdpsStatus status1;
    status1 = theSession->Parts()->SetActiveDisplay(part1, NXOpen::DisplayPartOptionAllowAdditional, NXOpen::PartDisplayPartWorkPartOptionUseLast, &partLoadStatus1);
    
    workPart = theSession->Parts()->Work(); // _model1
    displayPart = theSession->Parts()->Display(); // _model1
    delete partLoadStatus1;
    // ----------------------------------------------
    //   Menu: 插入(S)->基准/点(D)->基准平面(D)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId4;
    markId4 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\345\274\200\345\247\213", NXOpen::NXString::UTF8));
    
    NXOpen::Features::Feature *nullNXOpen_Features_Feature(NULL);
    NXOpen::Features::DatumPlaneBuilder *datumPlaneBuilder1;
    datumPlaneBuilder1 = workPart->Features()->CreateDatumPlaneBuilder(nullNXOpen_Features_Feature);
    
    NXOpen::Plane *plane1;
    plane1 = datumPlaneBuilder1->GetPlane();
    
    NXOpen::Unit *unit1(dynamic_cast<NXOpen::Unit *>(workPart->UnitCollection()->FindObject("MilliMeter")));
    NXOpen::Expression *expression4;
    expression4 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Expression *expression5;
    expression5 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Point3d coordinates1(0.0, 0.0, 0.0);
    NXOpen::Point *point1;
    point1 = workPart->Points()->CreatePoint(coordinates1);
    
    theSession->SetUndoMarkName(markId4, NXOpen::NXString("\345\237\272\345\207\206\345\271\263\351\235\242 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    plane1->SetUpdateOption(NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    plane1->SetMethod(NXOpen::PlaneTypes::MethodTypeDistance);
    
    std::vector<NXOpen::NXObject *> geom1(1);
    NXOpen::DatumPlane *datumPlane1(dynamic_cast<NXOpen::DatumPlane *>(workPart->Datums()->FindObject("DATUM_CSYS(0) YZ plane")));
    geom1[0] = datumPlane1;
    plane1->SetGeometry(geom1);
    
    plane1->SetFlip(false);
    
    plane1->SetReverseSide(false);
    
    NXOpen::Expression *expression6;
    expression6 = plane1->Expression();
    
    expression6->SetRightHandSide("0");
    
    plane1->SetAlternate(NXOpen::PlaneTypes::AlternateTypeOne);
    
    plane1->Evaluate();
    
    plane1->SetMethod(NXOpen::PlaneTypes::MethodTypeDistance);
    
    std::vector<NXOpen::NXObject *> geom2(1);
    geom2[0] = datumPlane1;
    plane1->SetGeometry(geom2);
    
    plane1->SetFlip(false);
    
    plane1->SetReverseSide(false);
    
    NXOpen::Expression *expression7;
    expression7 = plane1->Expression();
    
    expression7->SetRightHandSide("0");
    
    plane1->SetAlternate(NXOpen::PlaneTypes::AlternateTypeOne);
    
    plane1->Evaluate();
    
    NXOpen::Point3d coordinates2(0.0, 0.0, 0.0);
    NXOpen::Point *point2;
    point2 = workPart->Points()->CreatePoint(coordinates2);
    
    workPart->Points()->DeletePoint(point1);
    
    NXOpen::Point3d coordinates3(0.0, 0.0, 0.0);
    NXOpen::Point *point3;
    point3 = workPart->Points()->CreatePoint(coordinates3);
    
    workPart->Points()->DeletePoint(point2);
    
    NXOpen::Point3d coordinates4(0.0, 0.0, 0.0);
    NXOpen::Point *point4;
    point4 = workPart->Points()->CreatePoint(coordinates4);
    
    workPart->Points()->DeletePoint(point3);
    
    NXOpen::Point3d coordinates5(0.0, 0.0, 0.0);
    NXOpen::Point *point5;
    point5 = workPart->Points()->CreatePoint(coordinates5);
    
    workPart->Points()->DeletePoint(point4);
    
    NXOpen::Session::UndoMarkId markId5;
    markId5 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\345\237\272\345\207\206\345\271\263\351\235\242", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId5, NULL);
    
    NXOpen::Session::UndoMarkId markId6;
    markId6 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\345\237\272\345\207\206\345\271\263\351\235\242", NXOpen::NXString::UTF8));
    
    plane1->RemoveOffsetData();
    
    plane1->Evaluate();
    
    NXOpen::Point3d corner1_1(-18.324704678675864, -18.324704678675864, 0.0);
    NXOpen::Point3d corner2_1(18.324704678675864, -18.324704678675864, 0.0);
    NXOpen::Point3d corner3_1(18.324704678675864, 18.324704678675864, 0.0);
    NXOpen::Point3d corner4_1(-18.324704678675864, 18.324704678675864, 0.0);
    datumPlaneBuilder1->SetCornerPoints(corner1_1, corner2_1, corner3_1, corner4_1);
    
    datumPlaneBuilder1->SetResizeDuringUpdate(true);
    
    NXOpen::Features::Feature *feature2;
    feature2 = datumPlaneBuilder1->CommitFeature();
    
    NXOpen::Features::DatumPlaneFeature *datumPlaneFeature1(dynamic_cast<NXOpen::Features::DatumPlaneFeature *>(feature2));
    NXOpen::DatumPlane *datumPlane2;
    datumPlane2 = datumPlaneFeature1->DatumPlane();
    
    datumPlane2->SetReverseSection(false);
    
    theSession->DeleteUndoMark(markId6, NULL);
    
    theSession->SetUndoMarkName(markId4, NXOpen::NXString("\345\237\272\345\207\206\345\271\263\351\235\242", NXOpen::NXString::UTF8));
    
    datumPlaneBuilder1->Destroy();
    
    try
    {
        // 表达式仍然在使用中。
        workPart->Expressions()->Delete(expression5);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }
    
    try
    {
        // 表达式仍然在使用中。
        workPart->Expressions()->Delete(expression4);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }
    
    // ----------------------------------------------
    //   Menu: 插入(S)->草图曲线(S)->圆(C)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId7;
    markId7 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Profile short list");
    
    NXOpen::Session::UndoMarkId markId8;
    markId8 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    NXOpen::DatumAxis *datumAxis1(dynamic_cast<NXOpen::DatumAxis *>(workPart->Datums()->FindObject("DATUM_CSYS(0) X axis")));
    NXOpen::Direction *direction1;
    direction1 = workPart->Directions()->CreateDirection(datumAxis1, NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Features::DatumCsys *datumCsys1(dynamic_cast<NXOpen::Features::DatumCsys *>(workPart->Features()->FindObject("DATUM_CSYS(0)")));
    NXOpen::Point *point6(dynamic_cast<NXOpen::Point *>(datumCsys1->FindObject("POINT 1")));
    NXOpen::Xform *xform1;
    xform1 = workPart->Xforms()->CreateXformByPlaneXDirPoint(datumPlane1, direction1, point6, NXOpen::SmartObject::UpdateOptionWithinModeling, 0.625, false, false);
    
    NXOpen::CartesianCoordinateSystem *cartesianCoordinateSystem1;
    cartesianCoordinateSystem1 = workPart->CoordinateSystems()->CreateCoordinateSystem(xform1, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Features::DatumCsysBuilder *datumCsysBuilder1;
    datumCsysBuilder1 = workPart->Features()->CreateDatumCsysBuilder(nullNXOpen_Features_Feature);
    
    datumCsysBuilder1->SetCsys(cartesianCoordinateSystem1);
    
    datumCsysBuilder1->SetDisplayScaleFactor(1.25);
    
    NXOpen::Features::Feature *feature3;
    feature3 = datumCsysBuilder1->CommitFeature();
    
    datumCsysBuilder1->Destroy();
    
    NXOpen::Sketch *nullNXOpen_Sketch(NULL);
    NXOpen::SketchInPlaceBuilder *sketchInPlaceBuilder1;
    sketchInPlaceBuilder1 = workPart->Sketches()->CreateSketchInPlaceBuilder2(nullNXOpen_Sketch);
    
    sketchInPlaceBuilder1->SetCsystem(cartesianCoordinateSystem1);
    
    sketchInPlaceBuilder1->SetPlaneOption(NXOpen::Sketch::PlaneOptionInferred);
    
    theSession->Preferences()->Sketch()->SetCreateInferredConstraints(true);
    
    theSession->Preferences()->Sketch()->SetContinuousAutoDimensioning(true);
    
    theSession->Preferences()->Sketch()->SetDimensionLabel(NXOpen::Preferences::SketchPreferences::DimensionLabelTypeExpression);
    
    theSession->Preferences()->Sketch()->SetTextSizeFixed(true);
    
    theSession->Preferences()->Sketch()->SetFixedTextSize(3.0);
    
    theSession->Preferences()->Sketch()->SetDisplayParenthesesOnReferenceDimensions(true);
    
    theSession->Preferences()->Sketch()->SetDisplayReferenceGeometry(false);
    
    theSession->Preferences()->Sketch()->SetConstraintSymbolSize(3.0);
    
    theSession->Preferences()->Sketch()->SetDisplayObjectColor(false);
    
    theSession->Preferences()->Sketch()->SetDisplayObjectName(true);
    
    NXOpen::NXObject *nXObject1;
    nXObject1 = sketchInPlaceBuilder1->Commit();
    
    sketchInPlaceBuilder1->Destroy();
    
    NXOpen::Sketch *sketch1(dynamic_cast<NXOpen::Sketch *>(nXObject1));
    sketch1->Activate(NXOpen::Sketch::ViewReorientFalse);
    
    NXOpen::Expression *expression8;
    expression8 = workPart->Expressions()->CreateSystemExpression("140");
    
    theSession->SetUndoMarkVisibility(markId8, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::NXMatrix *nXMatrix1;
    nXMatrix1 = theSession->ActiveSketch()->Orientation();
    
    NXOpen::Point3d center1(0.0, 0.0, 0.0);
    NXOpen::Arc *arc1;
    arc1 = workPart->Curves()->CreateArc(center1, nXMatrix1, 70.0, 0.0, ( 360.0 * DEGRA ));
    
    theSession->ActiveSketch()->AddGeometry(arc1, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    NXOpen::Sketch::ConstraintGeometry geom1_1;
    geom1_1.Geometry = arc1;
    geom1_1.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
    geom1_1.SplineDefiningPointIndex = 0;
    NXOpen::Sketch::ConstraintGeometry geom2_1;
    NXOpen::Features::DatumCsys *datumCsys2(dynamic_cast<NXOpen::Features::DatumCsys *>(feature3));
    NXOpen::Point *point7(dynamic_cast<NXOpen::Point *>(datumCsys2->FindObject("POINT 1")));
    geom2_1.Geometry = point7;
    geom2_1.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
    geom2_1.SplineDefiningPointIndex = 0;
    NXOpen::SketchGeometricConstraint *sketchGeometricConstraint1;
    sketchGeometricConstraint1 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_1, geom2_1);
    
    NXOpen::Sketch::DimensionGeometry dimObject1_1;
    dimObject1_1.Geometry = arc1;
    dimObject1_1.AssocType = NXOpen::Sketch::AssocTypeNone;
    dimObject1_1.AssocValue = 0;
    dimObject1_1.HelpPoint.X = 0.0;
    dimObject1_1.HelpPoint.Y = 0.0;
    dimObject1_1.HelpPoint.Z = 0.0;
    NXOpen::NXObject *nullNXOpen_NXObject(NULL);
    dimObject1_1.View = nullNXOpen_NXObject;
    NXOpen::Point3d dimOrigin1(0.0, 4.1225432347977202, 0.0);
    NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint1;
    sketchDimensionalConstraint1 = theSession->ActiveSketch()->CreateDiameterDimension(dimObject1_1, dimOrigin1, expression8, NXOpen::Sketch::DimensionOptionCreateAsDriving);
    
    NXOpen::Annotations::Dimension *dimension1;
    dimension1 = sketchDimensionalConstraint1->AssociatedDimension();
    
    theSession->ActiveSketch()->Update();
    
    NXOpen::Session::UndoMarkId markId9;
    markId9 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    NXOpen::Session::UndoMarkId markId10;
    markId10 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    NXOpen::Expression *expression9;
    expression9 = workPart->Expressions()->CreateSystemExpression("180");
    
    theSession->DeleteUndoMark(markId10, "Curve");
    
    // ----------------------------------------------
    //   Menu: 插入(S)->草图曲线(S)->圆(C)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId11;
    markId11 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Profile short list");
    
    NXOpen::Session::UndoMarkId markId12;
    markId12 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    NXOpen::Expression *expression10;
    expression10 = workPart->Expressions()->CreateSystemExpression("180");
    
    theSession->SetUndoMarkVisibility(markId12, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::NXMatrix *nXMatrix2;
    nXMatrix2 = theSession->ActiveSketch()->Orientation();
    
    NXOpen::Point3d center2(0.0, 0.0, 0.0);
    NXOpen::Arc *arc2;
    arc2 = workPart->Curves()->CreateArc(center2, nXMatrix2, 90.0, 0.0, ( 360.0 * DEGRA ));
    
    theSession->ActiveSketch()->AddGeometry(arc2, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    NXOpen::Sketch::ConstraintGeometry geom1_2;
    geom1_2.Geometry = arc2;
    geom1_2.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
    geom1_2.SplineDefiningPointIndex = 0;
    NXOpen::Sketch::ConstraintGeometry geom2_2;
    geom2_2.Geometry = arc1;
    geom2_2.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
    geom2_2.SplineDefiningPointIndex = 0;
    NXOpen::SketchGeometricConstraint *sketchGeometricConstraint2;
    sketchGeometricConstraint2 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_2, geom2_2);
    
    NXOpen::Sketch::DimensionGeometry dimObject1_2;
    dimObject1_2.Geometry = arc2;
    dimObject1_2.AssocType = NXOpen::Sketch::AssocTypeNone;
    dimObject1_2.AssocValue = 0;
    dimObject1_2.HelpPoint.X = 0.0;
    dimObject1_2.HelpPoint.Y = 0.0;
    dimObject1_2.HelpPoint.Z = 0.0;
    dimObject1_2.View = nullNXOpen_NXObject;
    NXOpen::Point3d dimOrigin2(0.0, 4.1225432347977202, 0.0);
    NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint2;
    sketchDimensionalConstraint2 = theSession->ActiveSketch()->CreateDiameterDimension(dimObject1_2, dimOrigin2, expression10, NXOpen::Sketch::DimensionOptionCreateAsDriving);
    
    NXOpen::Annotations::Dimension *dimension2;
    dimension2 = sketchDimensionalConstraint2->AssociatedDimension();
    
    theSession->ActiveSketch()->Update();
    
    NXOpen::Session::UndoMarkId markId13;
    markId13 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->DeleteUndoMark(markId13, "Curve");
    
    // ----------------------------------------------
    //   Menu: 插入(S)->设计特征(E)->拉伸(X)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId14;
    markId14 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\345\274\200\345\247\213", NXOpen::NXString::UTF8));
    
    NXOpen::Features::ExtrudeBuilder *extrudeBuilder1;
    extrudeBuilder1 = workPart->Features()->CreateExtrudeBuilder(nullNXOpen_Features_Feature);
    
    NXOpen::Section *section2;
    section2 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);
    
    extrudeBuilder1->SetSection(section2);
    
    extrudeBuilder1->AllowSelfIntersectingSection(true);
    
    NXOpen::Unit *unit2;
    unit2 = extrudeBuilder1->Draft()->FrontDraftAngle()->Units();
    
    NXOpen::Expression *expression11;
    expression11 = workPart->Expressions()->CreateSystemExpressionWithUnits("2.00", unit2);
    
    extrudeBuilder1->SetDistanceTolerance(0.001);
    
    extrudeBuilder1->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);
    
    std::vector<NXOpen::Body *> targetBodies1(1);
    NXOpen::Body *nullNXOpen_Body(NULL);
    targetBodies1[0] = nullNXOpen_Body;
    extrudeBuilder1->BooleanOperation()->SetTargetBodies(targetBodies1);
    
    extrudeBuilder1->Limits()->StartExtend()->Value()->SetRightHandSide("0");
    
    extrudeBuilder1->Limits()->EndExtend()->Value()->SetRightHandSide("25");
    
    extrudeBuilder1->Offset()->StartOffset()->SetRightHandSide("0");
    
    extrudeBuilder1->Offset()->EndOffset()->SetRightHandSide("5");
    
    NXOpen::GeometricUtilities::SmartVolumeProfileBuilder *smartVolumeProfileBuilder1;
    smartVolumeProfileBuilder1 = extrudeBuilder1->SmartVolumeProfile();
    
    smartVolumeProfileBuilder1->SetOpenProfileSmartVolumeOption(false);
    
    smartVolumeProfileBuilder1->SetCloseProfileRule(NXOpen::GeometricUtilities::SmartVolumeProfileBuilder::CloseProfileRuleTypeFci);
    
    theSession->SetUndoMarkName(markId14, NXOpen::NXString("\346\213\211\344\274\270 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    section2->SetDistanceTolerance(0.001);
    
    section2->SetChainingTolerance(0.00095);
    
    section2->SetAllowedEntityTypes(NXOpen::Section::AllowTypesOnlyCurves);
    
    NXOpen::Session::UndoMarkId markId15;
    markId15 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NULL);
    
    std::vector<NXOpen::ICurve *> curves1(2);
    curves1[0] = arc1;
    curves1[1] = arc2;
    NXOpen::Point3d seedPoint1(65.478213504024581, 32.631935128126777, 0.0);
    NXOpen::RegionBoundaryRule *regionBoundaryRule1;
    regionBoundaryRule1 = workPart->ScRuleFactory()->CreateRuleRegionBoundary(theSession->ActiveSketch(), curves1, seedPoint1, 0.001);
    
    section2->AllowSelfIntersection(true);
    
    std::vector<NXOpen::SelectionIntentRule *> rules1(1);
    rules1[0] = regionBoundaryRule1;
    NXOpen::Point3d helpPoint1(0.0, 0.0, 0.0);
    section2->AddToSection(rules1, nullNXOpen_NXObject, nullNXOpen_NXObject, nullNXOpen_NXObject, helpPoint1, NXOpen::Section::ModeCreate, false);
    
    theSession->DeleteUndoMark(markId15, NULL);
    
    NXOpen::Session::UndoMarkId markId16;
    markId16 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "section mark");
    
    NXOpen::Session::UndoMarkId markId17;
    markId17 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NULL);
    
    theSession->DeleteUndoMark(markId17, NULL);
    
    NXOpen::Direction *direction2;
    direction2 = workPart->Directions()->CreateDirection(theSession->ActiveSketch(), NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    extrudeBuilder1->SetDirection(direction2);
    
    NXOpen::Expression *expression12;
    expression12 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Expression *expression13;
    expression13 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    theSession->DeleteUndoMark(markId16, NULL);
    
    extrudeBuilder1->Limits()->EndExtend()->Value()->SetRightHandSide("10");
    
    NXOpen::Session::UndoMarkId markId18;
    markId18 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId18, NULL);
    
    NXOpen::Session::UndoMarkId markId19;
    markId19 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    extrudeBuilder1->SetParentFeatureInternal(false);
    
    NXOpen::Session::UndoMarkId markId20;
    markId20 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Deactivate Sketch");
    
    NXOpen::Features::Feature *feature4;
    feature4 = extrudeBuilder1->CommitFeature();
    
    theSession->DeleteUndoMark(markId19, NULL);
    
    theSession->SetUndoMarkName(markId14, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    NXOpen::Expression *expression14(extrudeBuilder1->Limits()->StartExtend()->Value());
    NXOpen::Expression *expression15(extrudeBuilder1->Limits()->EndExtend()->Value());
    extrudeBuilder1->Destroy();
    
    workPart->Expressions()->Delete(expression11);
    
    workPart->Expressions()->Delete(expression12);
    
    workPart->Expressions()->Delete(expression13);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->基准/点(D)->基准平面(D)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId21;
    markId21 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\345\274\200\345\247\213", NXOpen::NXString::UTF8));
    
    NXOpen::Features::DatumPlaneBuilder *datumPlaneBuilder2;
    datumPlaneBuilder2 = workPart->Features()->CreateDatumPlaneBuilder(nullNXOpen_Features_Feature);
    
    NXOpen::Plane *plane2;
    plane2 = datumPlaneBuilder2->GetPlane();
    
    NXOpen::Expression *expression16;
    expression16 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Expression *expression17;
    expression17 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Point3d coordinates6(0.0, 0.0, 0.0);
    NXOpen::Point *point8;
    point8 = workPart->Points()->CreatePoint(coordinates6);
    
    theSession->SetUndoMarkName(markId21, NXOpen::NXString("\345\237\272\345\207\206\345\271\263\351\235\242 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    plane2->SetUpdateOption(NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    plane2->SetMethod(NXOpen::PlaneTypes::MethodTypeDistance);
    
    std::vector<NXOpen::NXObject *> geom3(1);
    NXOpen::Features::Extrude *extrude1(dynamic_cast<NXOpen::Features::Extrude *>(feature4));
    NXOpen::Face *face1(dynamic_cast<NXOpen::Face *>(extrude1->FindObject("FACE 130 {(0,0,10) EXTRUDE(3)}")));
    geom3[0] = face1;
    plane2->SetGeometry(geom3);
    
    plane2->SetFlip(false);
    
    plane2->SetReverseSide(false);
    
    NXOpen::Expression *expression18;
    expression18 = plane2->Expression();
    
    expression18->SetRightHandSide("0");
    
    plane2->SetAlternate(NXOpen::PlaneTypes::AlternateTypeOne);
    
    plane2->Evaluate();
    
    plane2->SetMethod(NXOpen::PlaneTypes::MethodTypeDistance);
    
    std::vector<NXOpen::NXObject *> geom4(1);
    geom4[0] = face1;
    plane2->SetGeometry(geom4);
    
    plane2->SetFlip(false);
    
    plane2->SetReverseSide(false);
    
    NXOpen::Expression *expression19;
    expression19 = plane2->Expression();
    
    expression19->SetRightHandSide("0");
    
    plane2->SetAlternate(NXOpen::PlaneTypes::AlternateTypeOne);
    
    plane2->Evaluate();
    
    NXOpen::Point3d coordinates7(0.0, 0.0, 10.0);
    NXOpen::Point *point9;
    point9 = workPart->Points()->CreatePoint(coordinates7);
    
    workPart->Points()->DeletePoint(point8);
    
    NXOpen::Point3d coordinates8(0.0, 0.0, 10.0);
    NXOpen::Point *point10;
    point10 = workPart->Points()->CreatePoint(coordinates8);
    
    workPart->Points()->DeletePoint(point9);
    
    NXOpen::Point3d coordinates9(0.0, 0.0, 10.0);
    NXOpen::Point *point11;
    point11 = workPart->Points()->CreatePoint(coordinates9);
    
    workPart->Points()->DeletePoint(point10);
    
    NXOpen::Point3d coordinates10(0.0, 0.0, 10.0);
    NXOpen::Point *point12;
    point12 = workPart->Points()->CreatePoint(coordinates10);
    
    workPart->Points()->DeletePoint(point11);
    
    NXOpen::Session::UndoMarkId markId22;
    markId22 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\345\237\272\345\207\206\345\271\263\351\235\242", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId22, NULL);
    
    NXOpen::Session::UndoMarkId markId23;
    markId23 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\345\237\272\345\207\206\345\271\263\351\235\242", NXOpen::NXString::UTF8));
    
    plane2->RemoveOffsetData();
    
    plane2->Evaluate();
    
    NXOpen::Point3d corner1_2(-94.5, -94.5, 10.0);
    NXOpen::Point3d corner2_2(94.5, -94.5, 10.0);
    NXOpen::Point3d corner3_2(94.5, 94.5, 10.0);
    NXOpen::Point3d corner4_2(-94.5, 94.5, 10.0);
    datumPlaneBuilder2->SetCornerPoints(corner1_2, corner2_2, corner3_2, corner4_2);
    
    datumPlaneBuilder2->SetResizeDuringUpdate(true);
    
    NXOpen::Features::Feature *feature5;
    feature5 = datumPlaneBuilder2->CommitFeature();
    
    NXOpen::Features::DatumPlaneFeature *datumPlaneFeature2(dynamic_cast<NXOpen::Features::DatumPlaneFeature *>(feature5));
    NXOpen::DatumPlane *datumPlane3;
    datumPlane3 = datumPlaneFeature2->DatumPlane();
    
    datumPlane3->SetReverseSection(false);
    
    theSession->DeleteUndoMark(markId23, NULL);
    
    theSession->SetUndoMarkName(markId21, NXOpen::NXString("\345\237\272\345\207\206\345\271\263\351\235\242", NXOpen::NXString::UTF8));
    
    datumPlaneBuilder2->Destroy();
    
    try
    {
        // 表达式仍然在使用中。
        workPart->Expressions()->Delete(expression17);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }
    
    try
    {
        // 表达式仍然在使用中。
        workPart->Expressions()->Delete(expression16);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }
    
    // ----------------------------------------------
    //   Menu: 插入(S)->草图曲线(S)->圆(C)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId24;
    markId24 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Profile short list");
    
    NXOpen::Session::UndoMarkId markId25;
    markId25 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    NXOpen::Point3d coordinates11(0.0, 0.0, 0.0);
    NXOpen::Point *point13;
    point13 = workPart->Points()->CreatePoint(coordinates11);
    
    NXOpen::Direction *direction3;
    direction3 = workPart->Directions()->CreateDirection(datumAxis1, NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Xform *xform2;
    xform2 = workPart->Xforms()->CreateXformByPlaneXDirPoint(datumPlane2, direction3, point13, NXOpen::SmartObject::UpdateOptionWithinModeling, 0.625, false, false);
    
    NXOpen::CartesianCoordinateSystem *cartesianCoordinateSystem2;
    cartesianCoordinateSystem2 = workPart->CoordinateSystems()->CreateCoordinateSystem(xform2, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Features::DatumCsysBuilder *datumCsysBuilder2;
    datumCsysBuilder2 = workPart->Features()->CreateDatumCsysBuilder(nullNXOpen_Features_Feature);
    
    datumCsysBuilder2->SetCsys(cartesianCoordinateSystem2);
    
    datumCsysBuilder2->SetDisplayScaleFactor(1.25);
    
    NXOpen::Features::Feature *feature6;
    feature6 = datumCsysBuilder2->CommitFeature();
    
    datumCsysBuilder2->Destroy();
    
    NXOpen::SketchInPlaceBuilder *sketchInPlaceBuilder2;
    sketchInPlaceBuilder2 = workPart->Sketches()->CreateSketchInPlaceBuilder2(nullNXOpen_Sketch);
    
    sketchInPlaceBuilder2->SetCsystem(cartesianCoordinateSystem2);
    
    sketchInPlaceBuilder2->SetPlaneOption(NXOpen::Sketch::PlaneOptionInferred);
    
    theSession->Preferences()->Sketch()->SetCreateInferredConstraints(true);
    
    theSession->Preferences()->Sketch()->SetContinuousAutoDimensioning(true);
    
    theSession->Preferences()->Sketch()->SetDimensionLabel(NXOpen::Preferences::SketchPreferences::DimensionLabelTypeExpression);
    
    theSession->Preferences()->Sketch()->SetTextSizeFixed(true);
    
    theSession->Preferences()->Sketch()->SetFixedTextSize(3.0);
    
    theSession->Preferences()->Sketch()->SetDisplayParenthesesOnReferenceDimensions(true);
    
    theSession->Preferences()->Sketch()->SetDisplayReferenceGeometry(false);
    
    theSession->Preferences()->Sketch()->SetConstraintSymbolSize(3.0);
    
    theSession->Preferences()->Sketch()->SetDisplayObjectColor(false);
    
    theSession->Preferences()->Sketch()->SetDisplayObjectName(true);
    
    NXOpen::NXObject *nXObject2;
    nXObject2 = sketchInPlaceBuilder2->Commit();
    
    sketchInPlaceBuilder2->Destroy();
    
    NXOpen::Sketch *sketch2(dynamic_cast<NXOpen::Sketch *>(nXObject2));
    sketch2->Activate(NXOpen::Sketch::ViewReorientFalse);
    
    NXOpen::Session::UndoMarkId markId26;
    markId26 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Deactivate Sketch");
    
    theSession->ActiveSketch()->Deactivate(NXOpen::Sketch::ViewReorientFalse, NXOpen::Sketch::UpdateLevelModel);
    
    NXOpen::Session::UndoMarkId markId27;
    markId27 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "");
    
    int nErrs1;
    nErrs1 = theSession->UpdateManager()->AddToDeleteList(sketch2);
    
    NXOpen::Features::DatumCsys *datumCsys3(dynamic_cast<NXOpen::Features::DatumCsys *>(feature6));
    int nErrs2;
    nErrs2 = theSession->UpdateManager()->AddToDeleteList(datumCsys3);
    
    int nErrs3;
    nErrs3 = theSession->UpdateManager()->AddToDeleteList(point13);
    
    int nErrs4;
    nErrs4 = theSession->UpdateManager()->DoUpdate(markId27);
    
    theSession->DeleteUndoMark(markId27, "");
    
    NXOpen::Edge *edge1(dynamic_cast<NXOpen::Edge *>(extrude1->FindObject("EDGE * 130 * 150 {(-35,60.6217782649107,10)(70,0,10)(-35,-60.6217782649107,10) EXTRUDE(3)}")));
    NXOpen::Point *point14;
    point14 = workPart->Points()->CreatePoint(edge1, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Direction *direction4;
    direction4 = workPart->Directions()->CreateDirection(datumAxis1, NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Xform *xform3;
    xform3 = workPart->Xforms()->CreateXformByPlaneXDirPoint(face1, direction4, point14, NXOpen::SmartObject::UpdateOptionWithinModeling, 0.625, false, false);
    
    NXOpen::CartesianCoordinateSystem *cartesianCoordinateSystem3;
    cartesianCoordinateSystem3 = workPart->CoordinateSystems()->CreateCoordinateSystem(xform3, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    NXOpen::Features::DatumCsysBuilder *datumCsysBuilder3;
    datumCsysBuilder3 = workPart->Features()->CreateDatumCsysBuilder(nullNXOpen_Features_Feature);
    
    datumCsysBuilder3->SetCsys(cartesianCoordinateSystem3);
    
    datumCsysBuilder3->SetDisplayScaleFactor(1.25);
    
    NXOpen::Features::Feature *feature7;
    feature7 = datumCsysBuilder3->CommitFeature();
    
    datumCsysBuilder3->Destroy();
    
    NXOpen::SketchInPlaceBuilder *sketchInPlaceBuilder3;
    sketchInPlaceBuilder3 = workPart->Sketches()->CreateSketchInPlaceBuilder2(nullNXOpen_Sketch);
    
    sketchInPlaceBuilder3->SetCsystem(cartesianCoordinateSystem3);
    
    sketchInPlaceBuilder3->SetPlaneOption(NXOpen::Sketch::PlaneOptionInferred);
    
    theSession->Preferences()->Sketch()->SetCreateInferredConstraints(true);
    
    theSession->Preferences()->Sketch()->SetContinuousAutoDimensioning(true);
    
    theSession->Preferences()->Sketch()->SetDimensionLabel(NXOpen::Preferences::SketchPreferences::DimensionLabelTypeExpression);
    
    theSession->Preferences()->Sketch()->SetTextSizeFixed(true);
    
    theSession->Preferences()->Sketch()->SetFixedTextSize(3.0);
    
    theSession->Preferences()->Sketch()->SetDisplayParenthesesOnReferenceDimensions(true);
    
    theSession->Preferences()->Sketch()->SetDisplayReferenceGeometry(false);
    
    theSession->Preferences()->Sketch()->SetConstraintSymbolSize(3.0);
    
    theSession->Preferences()->Sketch()->SetDisplayObjectColor(false);
    
    theSession->Preferences()->Sketch()->SetDisplayObjectName(true);
    
    NXOpen::NXObject *nXObject3;
    nXObject3 = sketchInPlaceBuilder3->Commit();
    
    sketchInPlaceBuilder3->Destroy();
    
    NXOpen::Sketch *sketch3(dynamic_cast<NXOpen::Sketch *>(nXObject3));
    sketch3->Activate(NXOpen::Sketch::ViewReorientFalse);
    
    NXOpen::Session::UndoMarkId markId28;
    markId28 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    NXOpen::Expression *expression20;
    expression20 = workPart->Expressions()->CreateSystemExpression("160");
    
    theSession->SetUndoMarkVisibility(markId28, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::NXMatrix *nXMatrix3;
    nXMatrix3 = theSession->ActiveSketch()->Orientation();
    
    NXOpen::Point3d center3(0.0, 0.0, 10.0);
    NXOpen::Arc *arc3;
    arc3 = workPart->Curves()->CreateArc(center3, nXMatrix3, 80.0, 0.0, ( 360.0 * DEGRA ));
    
    theSession->ActiveSketch()->AddGeometry(arc3, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    NXOpen::Sketch::ConstraintGeometry geom1_3;
    geom1_3.Geometry = arc3;
    geom1_3.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
    geom1_3.SplineDefiningPointIndex = 0;
    NXOpen::Sketch::ConstraintGeometry geom2_3;
    NXOpen::Features::DatumCsys *datumCsys4(dynamic_cast<NXOpen::Features::DatumCsys *>(feature7));
    NXOpen::Point *point15(dynamic_cast<NXOpen::Point *>(datumCsys4->FindObject("POINT 1")));
    geom2_3.Geometry = point15;
    geom2_3.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
    geom2_3.SplineDefiningPointIndex = 0;
    NXOpen::SketchGeometricConstraint *sketchGeometricConstraint3;
    sketchGeometricConstraint3 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_3, geom2_3);
    
    NXOpen::Sketch::ConstraintGeometry geom1_4;
    geom1_4.Geometry = arc3;
    geom1_4.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
    geom1_4.SplineDefiningPointIndex = 0;
    NXOpen::Sketch::ConstraintGeometryHelp geom1Help1;
    geom1Help1.Type = NXOpen::Sketch::ConstraintGeometryHelpTypePoint;
    geom1Help1.Point.X = 70.0;
    geom1Help1.Point.Y = 0.0;
    geom1Help1.Point.Z = 10.0;
    geom1Help1.Parameter = 0.0;
    NXOpen::Sketch::ConstraintGeometry geom2_4;
    geom2_4.Geometry = edge1;
    geom2_4.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
    geom2_4.SplineDefiningPointIndex = 0;
    NXOpen::Sketch::ConstraintGeometryHelp geom2Help1;
    geom2Help1.Type = NXOpen::Sketch::ConstraintGeometryHelpTypePoint;
    geom2Help1.Point.X = 70.0;
    geom2Help1.Point.Y = 0.0;
    geom2Help1.Point.Z = 10.0;
    geom2Help1.Parameter = 0.0;
    NXOpen::SketchTangentConstraint *sketchTangentConstraint1;
    sketchTangentConstraint1 = theSession->ActiveSketch()->CreateTangentConstraint(geom1_4, geom1Help1, geom2_4, geom2Help1);
    
    NXOpen::Sketch::ConstraintGeometry geom1_5;
    geom1_5.Geometry = arc3;
    geom1_5.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
    geom1_5.SplineDefiningPointIndex = 0;
    NXOpen::Sketch::ConstraintGeometryHelp geom1Help2;
    geom1Help2.Type = NXOpen::Sketch::ConstraintGeometryHelpTypePoint;
    geom1Help2.Point.X = 70.0;
    geom1Help2.Point.Y = 0.0;
    geom1Help2.Point.Z = 10.0;
    geom1Help2.Parameter = 0.0;
    NXOpen::Sketch::ConstraintGeometry geom2_5;
    geom2_5.Geometry = arc1;
    geom2_5.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
    geom2_5.SplineDefiningPointIndex = 0;
    NXOpen::Sketch::ConstraintGeometryHelp geom2Help2;
    geom2Help2.Type = NXOpen::Sketch::ConstraintGeometryHelpTypePoint;
    geom2Help2.Point.X = 70.0;
    geom2Help2.Point.Y = 0.0;
    geom2Help2.Point.Z = 10.0;
    geom2Help2.Parameter = 0.0;
    NXOpen::SketchTangentConstraint *sketchTangentConstraint2;
    sketchTangentConstraint2 = theSession->ActiveSketch()->CreateTangentConstraint(geom1_5, geom1Help2, geom2_5, geom2Help2);
    
    NXOpen::Sketch::ConstraintGeometry geom1_6;
    geom1_6.Geometry = arc3;
    geom1_6.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
    geom1_6.SplineDefiningPointIndex = 0;
    NXOpen::Sketch::ConstraintGeometryHelp geom1Help3;
    geom1Help3.Type = NXOpen::Sketch::ConstraintGeometryHelpTypePoint;
    geom1Help3.Point.X = 70.0;
    geom1Help3.Point.Y = 0.0;
    geom1Help3.Point.Z = 10.0;
    geom1Help3.Parameter = 0.0;
    NXOpen::Sketch::ConstraintGeometry geom2_6;
    NXOpen::Edge *edge2(dynamic_cast<NXOpen::Edge *>(extrude1->FindObject("EDGE * 120 * 150 {(-35,60.6217782649107,0)(70,0,0)(-35,-60.6217782649107,0) EXTRUDE(3)}")));
    geom2_6.Geometry = edge2;
    geom2_6.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
    geom2_6.SplineDefiningPointIndex = 0;
    NXOpen::Sketch::ConstraintGeometryHelp geom2Help3;
    geom2Help3.Type = NXOpen::Sketch::ConstraintGeometryHelpTypePoint;
    geom2Help3.Point.X = 70.0;
    geom2Help3.Point.Y = 0.0;
    geom2Help3.Point.Z = 10.0;
    geom2Help3.Parameter = 0.0;
    NXOpen::SketchTangentConstraint *sketchTangentConstraint3;
    sketchTangentConstraint3 = theSession->ActiveSketch()->CreateTangentConstraint(geom1_6, geom1Help3, geom2_6, geom2Help3);
    
    NXOpen::Sketch::DimensionGeometry dimObject1_3;
    dimObject1_3.Geometry = arc3;
    dimObject1_3.AssocType = NXOpen::Sketch::AssocTypeNone;
    dimObject1_3.AssocValue = 0;
    dimObject1_3.HelpPoint.X = 0.0;
    dimObject1_3.HelpPoint.Y = 0.0;
    dimObject1_3.HelpPoint.Z = 0.0;
    dimObject1_3.View = nullNXOpen_NXObject;
    NXOpen::Point3d dimOrigin3(0.0, 4.1225432347977202, 10.0);
    NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint3;
    sketchDimensionalConstraint3 = theSession->ActiveSketch()->CreateDiameterDimension(dimObject1_3, dimOrigin3, expression20, NXOpen::Sketch::DimensionOptionCreateAsDriving);
    
    NXOpen::Annotations::Dimension *dimension3;
    dimension3 = sketchDimensionalConstraint3->AssociatedDimension();
    
    theSession->ActiveSketch()->Update();
    
    NXOpen::Session::UndoMarkId markId29;
    markId29 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->DeleteUndoMark(markId29, "Curve");
    
    // ----------------------------------------------
    //   Menu: 插入(S)->设计特征(E)->拉伸(X)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId30;
    markId30 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\345\274\200\345\247\213", NXOpen::NXString::UTF8));
    
    NXOpen::Features::ExtrudeBuilder *extrudeBuilder2;
    extrudeBuilder2 = workPart->Features()->CreateExtrudeBuilder(nullNXOpen_Features_Feature);
    
    NXOpen::Section *section3;
    section3 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);
    
    extrudeBuilder2->SetSection(section3);
    
    extrudeBuilder2->AllowSelfIntersectingSection(true);
    
    NXOpen::Expression *expression21;
    expression21 = workPart->Expressions()->CreateSystemExpressionWithUnits("2.00", unit2);
    
    extrudeBuilder2->SetDistanceTolerance(0.001);
    
    extrudeBuilder2->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);
    
    std::vector<NXOpen::Body *> targetBodies2(1);
    targetBodies2[0] = nullNXOpen_Body;
    extrudeBuilder2->BooleanOperation()->SetTargetBodies(targetBodies2);
    
    extrudeBuilder2->Limits()->StartExtend()->Value()->SetRightHandSide("0");
    
    extrudeBuilder2->Limits()->EndExtend()->Value()->SetRightHandSide("10");
    
    extrudeBuilder2->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);
    
    std::vector<NXOpen::Body *> targetBodies3(1);
    targetBodies3[0] = nullNXOpen_Body;
    extrudeBuilder2->BooleanOperation()->SetTargetBodies(targetBodies3);
    
    extrudeBuilder2->Draft()->FrontDraftAngle()->SetRightHandSide("2");
    
    extrudeBuilder2->Draft()->BackDraftAngle()->SetRightHandSide("2");
    
    extrudeBuilder2->Offset()->StartOffset()->SetRightHandSide("0");
    
    extrudeBuilder2->Offset()->EndOffset()->SetRightHandSide("5");
    
    NXOpen::GeometricUtilities::SmartVolumeProfileBuilder *smartVolumeProfileBuilder2;
    smartVolumeProfileBuilder2 = extrudeBuilder2->SmartVolumeProfile();
    
    smartVolumeProfileBuilder2->SetOpenProfileSmartVolumeOption(false);
    
    smartVolumeProfileBuilder2->SetCloseProfileRule(NXOpen::GeometricUtilities::SmartVolumeProfileBuilder::CloseProfileRuleTypeFci);
    
    theSession->SetUndoMarkName(markId30, NXOpen::NXString("\346\213\211\344\274\270 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    section3->SetDistanceTolerance(0.001);
    
    section3->SetChainingTolerance(0.00095);
    
    section3->SetAllowedEntityTypes(NXOpen::Section::AllowTypesOnlyCurves);
    
    NXOpen::Session::UndoMarkId markId31;
    markId31 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NULL);
    
    std::vector<NXOpen::ICurve *> curves2(1);
    curves2[0] = arc3;
    NXOpen::Point3d seedPoint2(47.094518483172756, 17.14100292497438, 10.0);
    NXOpen::RegionBoundaryRule *regionBoundaryRule2;
    regionBoundaryRule2 = workPart->ScRuleFactory()->CreateRuleRegionBoundary(theSession->ActiveSketch(), curves2, seedPoint2, 0.001);
    
    section3->AllowSelfIntersection(true);
    
    std::vector<NXOpen::SelectionIntentRule *> rules2(1);
    rules2[0] = regionBoundaryRule2;
    NXOpen::Point3d helpPoint2(0.0, 0.0, 0.0);
    section3->AddToSection(rules2, nullNXOpen_NXObject, nullNXOpen_NXObject, nullNXOpen_NXObject, helpPoint2, NXOpen::Section::ModeCreate, false);
    
    theSession->DeleteUndoMark(markId31, NULL);
    
    NXOpen::Session::UndoMarkId markId32;
    markId32 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "section mark");
    
    NXOpen::Session::UndoMarkId markId33;
    markId33 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NULL);
    
    theSession->DeleteUndoMark(markId33, NULL);
    
    NXOpen::Direction *direction5;
    direction5 = workPart->Directions()->CreateDirection(theSession->ActiveSketch(), NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    extrudeBuilder2->SetDirection(direction5);
    
    std::vector<NXOpen::Body *> targetBodies4(1);
    NXOpen::Body *body1(dynamic_cast<NXOpen::Body *>(workPart->Bodies()->FindObject("EXTRUDE(3)")));
    targetBodies4[0] = body1;
    extrudeBuilder2->BooleanOperation()->SetTargetBodies(targetBodies4);
    
    extrudeBuilder2->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeUnite);
    
    std::vector<NXOpen::Body *> targetBodies5(1);
    targetBodies5[0] = body1;
    extrudeBuilder2->BooleanOperation()->SetTargetBodies(targetBodies5);
    
    NXOpen::Expression *expression22;
    expression22 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    theSession->DeleteUndoMark(markId32, NULL);
    
    extrudeBuilder2->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeUnite);
    
    std::vector<NXOpen::Body *> targetBodies6(1);
    targetBodies6[0] = body1;
    extrudeBuilder2->BooleanOperation()->SetTargetBodies(targetBodies6);
    
    extrudeBuilder2->Destroy();
    
    section3->Destroy();
    
    workPart->Expressions()->Delete(expression21);
    
    workPart->Expressions()->Delete(expression22);
    
    theSession->UndoToMark(markId30, NULL);
    
    theSession->DeleteUndoMark(markId30, NULL);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->草图曲线(S)->圆(C)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId34;
    markId34 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Profile short list");
    
    NXOpen::Session::UndoMarkId markId35;
    markId35 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    NXOpen::Expression *expression23;
    expression23 = workPart->Expressions()->CreateSystemExpression("140");
    
    theSession->SetUndoMarkVisibility(markId35, "Curve", NXOpen::Session::MarkVisibilityVisible);
    
    NXOpen::NXMatrix *nXMatrix4;
    nXMatrix4 = theSession->ActiveSketch()->Orientation();
    
    NXOpen::Point3d center4(0.0, 0.0, 10.0);
    NXOpen::Arc *arc4;
    arc4 = workPart->Curves()->CreateArc(center4, nXMatrix4, 70.0, 0.0, ( 360.0 * DEGRA ));
    
    theSession->ActiveSketch()->AddGeometry(arc4, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);
    
    NXOpen::Sketch::ConstraintGeometry geom1_7;
    geom1_7.Geometry = arc4;
    geom1_7.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
    geom1_7.SplineDefiningPointIndex = 0;
    NXOpen::Sketch::ConstraintGeometry geom2_7;
    geom2_7.Geometry = arc3;
    geom2_7.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
    geom2_7.SplineDefiningPointIndex = 0;
    NXOpen::SketchGeometricConstraint *sketchGeometricConstraint4;
    sketchGeometricConstraint4 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_7, geom2_7);
    
    NXOpen::Sketch::DimensionGeometry dimObject1_4;
    dimObject1_4.Geometry = arc4;
    dimObject1_4.AssocType = NXOpen::Sketch::AssocTypeNone;
    dimObject1_4.AssocValue = 0;
    dimObject1_4.HelpPoint.X = 0.0;
    dimObject1_4.HelpPoint.Y = 0.0;
    dimObject1_4.HelpPoint.Z = 0.0;
    dimObject1_4.View = nullNXOpen_NXObject;
    NXOpen::Point3d dimOrigin4(0.0, 4.1225432347977202, 10.0);
    NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint4;
    sketchDimensionalConstraint4 = theSession->ActiveSketch()->CreateDiameterDimension(dimObject1_4, dimOrigin4, expression23, NXOpen::Sketch::DimensionOptionCreateAsDriving);
    
    NXOpen::Annotations::Dimension *dimension4;
    dimension4 = sketchDimensionalConstraint4->AssociatedDimension();
    
    theSession->ActiveSketch()->Update();
    
    NXOpen::Session::UndoMarkId markId36;
    markId36 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Curve");
    
    theSession->DeleteUndoMark(markId36, "Curve");
    
    // ----------------------------------------------
    //   Menu: 插入(S)->设计特征(E)->拉伸(X)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId37;
    markId37 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\345\274\200\345\247\213", NXOpen::NXString::UTF8));
    
    NXOpen::Features::ExtrudeBuilder *extrudeBuilder3;
    extrudeBuilder3 = workPart->Features()->CreateExtrudeBuilder(nullNXOpen_Features_Feature);
    
    NXOpen::Section *section4;
    section4 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);
    
    extrudeBuilder3->SetSection(section4);
    
    extrudeBuilder3->AllowSelfIntersectingSection(true);
    
    NXOpen::Expression *expression24;
    expression24 = workPart->Expressions()->CreateSystemExpressionWithUnits("2.00", unit2);
    
    extrudeBuilder3->SetDistanceTolerance(0.001);
    
    extrudeBuilder3->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);
    
    std::vector<NXOpen::Body *> targetBodies7(1);
    targetBodies7[0] = nullNXOpen_Body;
    extrudeBuilder3->BooleanOperation()->SetTargetBodies(targetBodies7);
    
    extrudeBuilder3->Limits()->StartExtend()->Value()->SetRightHandSide("0");
    
    extrudeBuilder3->Limits()->EndExtend()->Value()->SetRightHandSide("10");
    
    extrudeBuilder3->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);
    
    std::vector<NXOpen::Body *> targetBodies8(1);
    targetBodies8[0] = nullNXOpen_Body;
    extrudeBuilder3->BooleanOperation()->SetTargetBodies(targetBodies8);
    
    extrudeBuilder3->Draft()->FrontDraftAngle()->SetRightHandSide("2");
    
    extrudeBuilder3->Draft()->BackDraftAngle()->SetRightHandSide("2");
    
    extrudeBuilder3->Offset()->StartOffset()->SetRightHandSide("0");
    
    extrudeBuilder3->Offset()->EndOffset()->SetRightHandSide("5");
    
    NXOpen::GeometricUtilities::SmartVolumeProfileBuilder *smartVolumeProfileBuilder3;
    smartVolumeProfileBuilder3 = extrudeBuilder3->SmartVolumeProfile();
    
    smartVolumeProfileBuilder3->SetOpenProfileSmartVolumeOption(false);
    
    smartVolumeProfileBuilder3->SetCloseProfileRule(NXOpen::GeometricUtilities::SmartVolumeProfileBuilder::CloseProfileRuleTypeFci);
    
    theSession->SetUndoMarkName(markId37, NXOpen::NXString("\346\213\211\344\274\270 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    section4->SetDistanceTolerance(0.001);
    
    section4->SetChainingTolerance(0.00095);
    
    section4->SetAllowedEntityTypes(NXOpen::Section::AllowTypesOnlyCurves);
    
    NXOpen::Session::UndoMarkId markId38;
    markId38 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NULL);
    
    std::vector<NXOpen::ICurve *> curves3(2);
    curves3[0] = arc4;
    curves3[1] = arc3;
    NXOpen::Point3d seedPoint3(42.932840227067054, 58.400920564652516, 10.0);
    NXOpen::RegionBoundaryRule *regionBoundaryRule3;
    regionBoundaryRule3 = workPart->ScRuleFactory()->CreateRuleRegionBoundary(theSession->ActiveSketch(), curves3, seedPoint3, 0.001);
    
    section4->AllowSelfIntersection(true);
    
    std::vector<NXOpen::SelectionIntentRule *> rules3(1);
    rules3[0] = regionBoundaryRule3;
    NXOpen::Point3d helpPoint3(0.0, 0.0, 0.0);
    section4->AddToSection(rules3, nullNXOpen_NXObject, nullNXOpen_NXObject, nullNXOpen_NXObject, helpPoint3, NXOpen::Section::ModeCreate, false);
    
    theSession->DeleteUndoMark(markId38, NULL);
    
    NXOpen::Session::UndoMarkId markId39;
    markId39 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "section mark");
    
    NXOpen::Session::UndoMarkId markId40;
    markId40 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NULL);
    
    theSession->DeleteUndoMark(markId40, NULL);
    
    NXOpen::Direction *direction6;
    direction6 = workPart->Directions()->CreateDirection(theSession->ActiveSketch(), NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);
    
    extrudeBuilder3->SetDirection(direction6);
    
    std::vector<NXOpen::Body *> targetBodies9(1);
    targetBodies9[0] = body1;
    extrudeBuilder3->BooleanOperation()->SetTargetBodies(targetBodies9);
    
    extrudeBuilder3->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeUnite);
    
    std::vector<NXOpen::Body *> targetBodies10(1);
    targetBodies10[0] = body1;
    extrudeBuilder3->BooleanOperation()->SetTargetBodies(targetBodies10);
    
    NXOpen::Expression *expression25;
    expression25 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    NXOpen::Expression *expression26;
    expression26 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);
    
    theSession->DeleteUndoMark(markId39, NULL);
    
    extrudeBuilder3->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeUnite);
    
    std::vector<NXOpen::Body *> targetBodies11(1);
    targetBodies11[0] = body1;
    extrudeBuilder3->BooleanOperation()->SetTargetBodies(targetBodies11);
    
    NXOpen::Session::UndoMarkId markId41;
    markId41 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId41, NULL);
    
    NXOpen::Session::UndoMarkId markId42;
    markId42 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    extrudeBuilder3->SetParentFeatureInternal(false);
    
    NXOpen::Session::UndoMarkId markId43;
    markId43 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Deactivate Sketch");
    
    NXOpen::Features::Feature *feature8;
    feature8 = extrudeBuilder3->CommitFeature();
    
    theSession->DeleteUndoMark(markId42, NULL);
    
    theSession->SetUndoMarkName(markId37, NXOpen::NXString("\346\213\211\344\274\270", NXOpen::NXString::UTF8));
    
    NXOpen::Expression *expression27(extrudeBuilder3->Limits()->StartExtend()->Value());
    NXOpen::Expression *expression28(extrudeBuilder3->Limits()->EndExtend()->Value());
    extrudeBuilder3->Destroy();
    
    workPart->Expressions()->Delete(expression24);
    
    workPart->Expressions()->Delete(expression25);
    
    workPart->Expressions()->Delete(expression26);
    
    NXOpen::Matrix3x3 rotMatrix1;
    rotMatrix1.Xx = 0.27843211114027211;
    rotMatrix1.Xy = 0.92534907505196895;
    rotMatrix1.Xz = -0.25730264045756979;
    rotMatrix1.Yx = -0.20270132120705453;
    rotMatrix1.Yy = 0.31847660132252215;
    rotMatrix1.Yz = 0.92600476715347779;
    rotMatrix1.Zx = 0.93882252522342169;
    rotMatrix1.Zy = -0.20567387707368537;
    rotMatrix1.Zz = 0.2762435925457693;
    NXOpen::Point3d translation1(1.857463634387388, 0.29843769583581015, 0.087709229386665033);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix1, translation1, 0.72770613408671758);
    
    // ----------------------------------------------
    //   Menu: 插入(S)->细节特征(L)->倒斜角(M)...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId44;
    markId44 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXOpen::NXString("\345\274\200\345\247\213", NXOpen::NXString::UTF8));
    
    NXOpen::Features::ChamferBuilder *chamferBuilder1;
    chamferBuilder1 = workPart->Features()->CreateChamferBuilder(nullNXOpen_Features_Feature);
    
    chamferBuilder1->FirstOffsetExp()->SetRightHandSide("0.5");
    
    chamferBuilder1->SecondOffsetExp()->SetRightHandSide("0.5");
    
    chamferBuilder1->AngleExp()->SetRightHandSide("45");
    
    chamferBuilder1->SetOption(NXOpen::Features::ChamferBuilder::ChamferOptionSymmetricOffsets);
    
    chamferBuilder1->SetMethod(NXOpen::Features::ChamferBuilder::OffsetMethodEdgesAlongFaces);
    
    chamferBuilder1->SetFirstOffset("0.5");
    
    chamferBuilder1->SetSecondOffset("0.5");
    
    chamferBuilder1->SetAngle("45");
    
    chamferBuilder1->SetTolerance(0.001);
    
    theSession->SetUndoMarkName(markId44, NXOpen::NXString("\345\200\222\346\226\234\350\247\222 \345\257\271\350\257\235\346\241\206", NXOpen::NXString::UTF8));
    
    NXOpen::ScCollector *scCollector1;
    scCollector1 = workPart->ScCollectors()->CreateCollector();
    
    NXOpen::Features::Extrude *extrude2(dynamic_cast<NXOpen::Features::Extrude *>(feature8));
    NXOpen::Edge *edge3(dynamic_cast<NXOpen::Edge *>(extrude2->FindObject("EDGE * 130 * 140 {(-40,69.2820323027551,20)(80,0,20)(-40,-69.2820323027551,20) EXTRUDE(3)}")));
    NXOpen::Edge *nullNXOpen_Edge(NULL);
    NXOpen::EdgeTangentRule *edgeTangentRule1;
    edgeTangentRule1 = workPart->ScRuleFactory()->CreateRuleEdgeTangent(edge3, nullNXOpen_Edge, false, 0.050000000000000003, true, false);
    
    std::vector<NXOpen::SelectionIntentRule *> rules4(1);
    rules4[0] = edgeTangentRule1;
    scCollector1->ReplaceRules(rules4, false);
    
    chamferBuilder1->SetSmartCollector(scCollector1);
    
    NXOpen::EdgeTangentRule *edgeTangentRule2;
    edgeTangentRule2 = workPart->ScRuleFactory()->CreateRuleEdgeTangent(edge3, nullNXOpen_Edge, false, 0.050000000000000003, true, false);
    
    NXOpen::Edge *edge4(dynamic_cast<NXOpen::Edge *>(extrude1->FindObject("EDGE * 150 EXTRUDE(6) 130 {(-35,60.6217782649107,20)(70,0,20)(-35,-60.6217782649107,20) EXTRUDE(3)}")));
    NXOpen::EdgeTangentRule *edgeTangentRule3;
    edgeTangentRule3 = workPart->ScRuleFactory()->CreateRuleEdgeTangent(edge4, nullNXOpen_Edge, false, 0.050000000000000003, true, false);
    
    std::vector<NXOpen::SelectionIntentRule *> rules5(2);
    rules5[0] = edgeTangentRule2;
    rules5[1] = edgeTangentRule3;
    scCollector1->ReplaceRules(rules5, false);
    
    chamferBuilder1->SetSmartCollector(scCollector1);
    
    NXOpen::EdgeTangentRule *edgeTangentRule4;
    edgeTangentRule4 = workPart->ScRuleFactory()->CreateRuleEdgeTangent(edge3, nullNXOpen_Edge, false, 0.050000000000000003, true, false);
    
    NXOpen::EdgeTangentRule *edgeTangentRule5;
    edgeTangentRule5 = workPart->ScRuleFactory()->CreateRuleEdgeTangent(edge4, nullNXOpen_Edge, false, 0.050000000000000003, true, false);
    
    NXOpen::Edge *edge5(dynamic_cast<NXOpen::Edge *>(extrude1->FindObject("EDGE * 130 * 140 {(-45,77.9422863405995,10)(90,0,10)(-45,-77.9422863405995,10) EXTRUDE(3)}")));
    NXOpen::EdgeTangentRule *edgeTangentRule6;
    edgeTangentRule6 = workPart->ScRuleFactory()->CreateRuleEdgeTangent(edge5, nullNXOpen_Edge, false, 0.050000000000000003, true, false);
    
    std::vector<NXOpen::SelectionIntentRule *> rules6(3);
    rules6[0] = edgeTangentRule4;
    rules6[1] = edgeTangentRule5;
    rules6[2] = edgeTangentRule6;
    scCollector1->ReplaceRules(rules6, false);
    
    chamferBuilder1->SetSmartCollector(scCollector1);
    
    NXOpen::EdgeTangentRule *edgeTangentRule7;
    edgeTangentRule7 = workPart->ScRuleFactory()->CreateRuleEdgeTangent(edge3, nullNXOpen_Edge, false, 0.050000000000000003, true, false);
    
    NXOpen::EdgeTangentRule *edgeTangentRule8;
    edgeTangentRule8 = workPart->ScRuleFactory()->CreateRuleEdgeTangent(edge4, nullNXOpen_Edge, false, 0.050000000000000003, true, false);
    
    NXOpen::EdgeTangentRule *edgeTangentRule9;
    edgeTangentRule9 = workPart->ScRuleFactory()->CreateRuleEdgeTangent(edge5, nullNXOpen_Edge, false, 0.050000000000000003, true, false);
    
    NXOpen::Edge *edge6(dynamic_cast<NXOpen::Edge *>(extrude1->FindObject("EDGE * 120 * 140 {(-45,77.9422863405995,0)(90,0,0)(-45,-77.9422863405995,0) EXTRUDE(3)}")));
    NXOpen::EdgeTangentRule *edgeTangentRule10;
    edgeTangentRule10 = workPart->ScRuleFactory()->CreateRuleEdgeTangent(edge6, nullNXOpen_Edge, false, 0.050000000000000003, true, false);
    
    std::vector<NXOpen::SelectionIntentRule *> rules7(4);
    rules7[0] = edgeTangentRule7;
    rules7[1] = edgeTangentRule8;
    rules7[2] = edgeTangentRule9;
    rules7[3] = edgeTangentRule10;
    scCollector1->ReplaceRules(rules7, false);
    
    chamferBuilder1->SetSmartCollector(scCollector1);
    
    NXOpen::Matrix3x3 rotMatrix2;
    rotMatrix2.Xx = -0.83984731357343534;
    rotMatrix2.Xy = 0.51878273969090805;
    rotMatrix2.Xz = -0.15975280555369339;
    rotMatrix2.Yx = 0.19890223712553365;
    rotMatrix2.Yy = 0.56794101583396039;
    rotMatrix2.Yz = 0.79867446597468339;
    rotMatrix2.Zx = 0.50506869824800926;
    rotMatrix2.Zy = 0.63898941425682909;
    rotMatrix2.Zz = -0.58017078392295429;
    NXOpen::Point3d translation2(0.88196528534862417, 1.5717407076237544, 8.6518529940739022);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix2, translation2, 0.72770613408671758);
    
    NXOpen::EdgeTangentRule *edgeTangentRule11;
    edgeTangentRule11 = workPart->ScRuleFactory()->CreateRuleEdgeTangent(edge3, nullNXOpen_Edge, false, 0.050000000000000003, true, false);
    
    NXOpen::EdgeTangentRule *edgeTangentRule12;
    edgeTangentRule12 = workPart->ScRuleFactory()->CreateRuleEdgeTangent(edge4, nullNXOpen_Edge, false, 0.050000000000000003, true, false);
    
    NXOpen::EdgeTangentRule *edgeTangentRule13;
    edgeTangentRule13 = workPart->ScRuleFactory()->CreateRuleEdgeTangent(edge5, nullNXOpen_Edge, false, 0.050000000000000003, true, false);
    
    NXOpen::EdgeTangentRule *edgeTangentRule14;
    edgeTangentRule14 = workPart->ScRuleFactory()->CreateRuleEdgeTangent(edge6, nullNXOpen_Edge, false, 0.050000000000000003, true, false);
    
    NXOpen::EdgeTangentRule *edgeTangentRule15;
    edgeTangentRule15 = workPart->ScRuleFactory()->CreateRuleEdgeTangent(edge2, nullNXOpen_Edge, false, 0.050000000000000003, true, false);
    
    std::vector<NXOpen::SelectionIntentRule *> rules8(5);
    rules8[0] = edgeTangentRule11;
    rules8[1] = edgeTangentRule12;
    rules8[2] = edgeTangentRule13;
    rules8[3] = edgeTangentRule14;
    rules8[4] = edgeTangentRule15;
    scCollector1->ReplaceRules(rules8, false);
    
    chamferBuilder1->SetSmartCollector(scCollector1);
    
    NXOpen::Matrix3x3 rotMatrix3;
    rotMatrix3.Xx = -0.43580774916442838;
    rotMatrix3.Xy = 0.89269731699406396;
    rotMatrix3.Xz = 0.11473058005533168;
    rotMatrix3.Yx = -0.66839438629679826;
    rotMatrix3.Yy = -0.40637172002817945;
    rotMatrix3.Yz = 0.62298552914836136;
    rotMatrix3.Zx = 0.60276077355378577;
    rotMatrix3.Zy = 0.19481664557459982;
    rotMatrix3.Zz = 0.77377381997060413;
    NXOpen::Point3d translation3(-1.8628685707416266, 3.3286300758869745, -4.8875930448616822);
    workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix3, translation3, 0.72770613408671758);
    
    chamferBuilder1->FirstOffsetExp()->SetRightHandSide("1");
    
    chamferBuilder1->SecondOffsetExp()->SetRightHandSide("1");
    
    NXOpen::Session::UndoMarkId markId45;
    markId45 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\345\200\222\346\226\234\350\247\222", NXOpen::NXString::UTF8));
    
    theSession->DeleteUndoMark(markId45, NULL);
    
    NXOpen::Session::UndoMarkId markId46;
    markId46 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXOpen::NXString("\345\200\222\346\226\234\350\247\222", NXOpen::NXString::UTF8));
    
    NXOpen::Features::Feature *feature9;
    feature9 = chamferBuilder1->CommitFeature();
    
    theSession->DeleteUndoMark(markId46, NULL);
    
    theSession->SetUndoMarkName(markId44, NXOpen::NXString("\345\200\222\346\226\234\350\247\222", NXOpen::NXString::UTF8));
    
    NXOpen::Expression *expression29(chamferBuilder1->FirstOffsetExp());
    chamferBuilder1->Destroy();
    
    // ----------------------------------------------
    //   Menu: 工具(T)->操作记录(J)->停止录制(S)
    // ----------------------------------------------
}
