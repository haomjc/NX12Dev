// NX 12.0.0.27
// Journal created by haomjc on Tue Jan 15 17:35:48 2019 中国标准时间

//
#include <uf_defs.h>
#include <NXOpen/NXException.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Annotations_Dimension.hxx>
#include <NXOpen/Arc.hxx>
#include <NXOpen/Axis.hxx>
#include <NXOpen/AxisCollection.hxx>
#include <NXOpen/BasePart.hxx>
#include <NXOpen/Body.hxx>
#include <NXOpen/BodyCollection.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/CartesianCoordinateSystem.hxx>
#include <NXOpen/ConvertToFromReferenceBuilder.hxx>
#include <NXOpen/CoordinateSystem.hxx>
#include <NXOpen/CoordinateSystemCollection.hxx>
#include <NXOpen/Curve.hxx>
#include <NXOpen/CurveCollection.hxx>
#include <NXOpen/CurveFeatureRule.hxx>
#include <NXOpen/DatumAxis.hxx>
#include <NXOpen/DatumCollection.hxx>
#include <NXOpen/DatumPlane.hxx>
#include <NXOpen/Direction.hxx>
#include <NXOpen/DirectionCollection.hxx>
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/ExpressionCollection.hxx>
#include <NXOpen/Features_DatumCsys.hxx>
#include <NXOpen/Features_Extrude.hxx>
#include <NXOpen/Features_ExtrudeBuilder.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/Features_LawCurve.hxx>
#include <NXOpen/Features_LawCurveBuilder.hxx>
#include <NXOpen/Features_PatternFeatureBuilder.hxx>
#include <NXOpen/Features_RevolveBuilder.hxx>
#include <NXOpen/Features_SelectFeatureList.hxx>
#include <NXOpen/GeometricUtilities_AlongPathPattern.hxx>
#include <NXOpen/GeometricUtilities_AlongSpineBuilder.hxx>
#include <NXOpen/GeometricUtilities_AngularPatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_BooleanOperation.hxx>
#include <NXOpen/GeometricUtilities_CircularPattern.hxx>
#include <NXOpen/GeometricUtilities_DistancePatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_Extend.hxx>
#include <NXOpen/GeometricUtilities_FeatureOffset.hxx>
#include <NXOpen/GeometricUtilities_FeatureOptions.hxx>
#include <NXOpen/GeometricUtilities_GeneralPattern.hxx>
#include <NXOpen/GeometricUtilities_HelixPattern.hxx>
#include <NXOpen/GeometricUtilities_HorizontalReference.hxx>
#include <NXOpen/GeometricUtilities_LawBuilder.hxx>
#include <NXOpen/GeometricUtilities_Limits.hxx>
#include <NXOpen/GeometricUtilities_MirrorPattern.hxx>
#include <NXOpen/GeometricUtilities_MultiDraft.hxx>
#include <NXOpen/GeometricUtilities_MultiTransitionLawBuilder.hxx>
#include <NXOpen/GeometricUtilities_NonInflectingLawBuilder.hxx>
#include <NXOpen/GeometricUtilities_OnPathDimensionBuilder.hxx>
#include <NXOpen/GeometricUtilities_OnPathDistancePatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_PatternDefinition.hxx>
#include <NXOpen/GeometricUtilities_PatternFill.hxx>
#include <NXOpen/GeometricUtilities_PatternIncrementItem.hxx>
#include <NXOpen/GeometricUtilities_PatternIncrementItemList.hxx>
#include <NXOpen/GeometricUtilities_PatternIncrementsBuilder.hxx>
#include <NXOpen/GeometricUtilities_PatternIncrementsList.hxx>
#include <NXOpen/GeometricUtilities_PatternOrientation.hxx>
#include <NXOpen/GeometricUtilities_PatternReferencePointServiceBuilder.hxx>
#include <NXOpen/GeometricUtilities_PatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_PatternSpacingsList.hxx>
#include <NXOpen/GeometricUtilities_PatternSpacingsListItem.hxx>
#include <NXOpen/GeometricUtilities_PatternSpacingsListItemList.hxx>
#include <NXOpen/GeometricUtilities_PolygonPattern.hxx>
#include <NXOpen/GeometricUtilities_PolygonPatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_RectangularPattern.hxx>
#include <NXOpen/GeometricUtilities_ReferencePattern.hxx>
#include <NXOpen/GeometricUtilities_SShapedLawBuilder.hxx>
#include <NXOpen/GeometricUtilities_SimpleDraft.hxx>
#include <NXOpen/GeometricUtilities_SmartVolumeProfileBuilder.hxx>
#include <NXOpen/GeometricUtilities_SpiralPattern.hxx>
#include <NXOpen/ICurve.hxx>
#include <NXOpen/IPlane.hxx>
#include <NXOpen/IReferenceAxis.hxx>
#include <NXOpen/ISurface.hxx>
#include <NXOpen/Line.hxx>
#include <NXOpen/ModelingView.hxx>
#include <NXOpen/ModelingViewCollection.hxx>
#include <NXOpen/NXMatrix.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/ObjectList.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Plane.hxx>
#include <NXOpen/PlaneCollection.hxx>
#include <NXOpen/PlaneTypes.hxx>
#include <NXOpen/Point.hxx>
#include <NXOpen/PointCollection.hxx>
#include <NXOpen/Preferences_SessionModeling.hxx>
#include <NXOpen/Preferences_SessionPreferences.hxx>
#include <NXOpen/Preferences_SessionSketch.hxx>
#include <NXOpen/Preferences_SketchPreferences.hxx>
#include <NXOpen/RegionBoundaryRule.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/ScRuleFactory.hxx>
#include <NXOpen/Scalar.hxx>
#include <NXOpen/ScalarCollection.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SectionCollection.hxx>
#include <NXOpen/SelectCoordinateSystemList.hxx>
#include <NXOpen/SelectCurveList.hxx>
#include <NXOpen/SelectDisplayableObjectList.hxx>
#include <NXOpen/SelectIReferenceAxis.hxx>
#include <NXOpen/SelectISurface.hxx>
#include <NXOpen/SelectLine.hxx>
#include <NXOpen/SelectNXObject.hxx>
#include <NXOpen/SelectNXObjectList.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/SelectionIntentRule.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Sketch.hxx>
#include <NXOpen/SketchAlongPathBuilder.hxx>
#include <NXOpen/SketchChamferBuilder.hxx>
#include <NXOpen/SketchCollection.hxx>
#include <NXOpen/SketchConstraint.hxx>
#include <NXOpen/SketchDimensionalConstraint.hxx>
#include <NXOpen/SketchGeometricConstraint.hxx>
#include <NXOpen/SketchHelpedDimensionalConstraint.hxx>
#include <NXOpen/SketchHelpedGeometricConstraint.hxx>
#include <NXOpen/SketchInPlaceBuilder.hxx>
#include <NXOpen/SketchQuickTrimBuilder.hxx>
#include <NXOpen/SketchTangentConstraint.hxx>
#include <NXOpen/SmartObject.hxx>
#include <NXOpen/TaggedObject.hxx>
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
	//    工具(T)->表达式(X)...
	// ----------------------------------------------
	theSession->Preferences()->Modeling()->SetUpdatePending(false);


	NXOpen::Unit *nullNXOpen_Unit(NULL);
	NXOpen::Expression *expression1;
	expression1 = workPart->Expressions()->CreateWithUnits("zc=39", nullNXOpen_Unit);


	std::vector<NXOpen::NXObject *> objects1(1);
	objects1[0] = expression1;

	expression1->EditComment("");


	NXOpen::Expression *expression2;
	expression2 = workPart->Expressions()->CreateWithUnits("e=1.5", nullNXOpen_Unit);

	std::vector<NXOpen::NXObject *> objects2(1);
	objects2[0] = expression2;

	expression2->EditComment("");


	NXOpen::Expression *expression3;
	expression3 = workPart->Expressions()->CreateWithUnits("rp=82.5", nullNXOpen_Unit);

	std::vector<NXOpen::NXObject *> objects3(1);
	objects3[0] = expression3;

	expression3->EditComment("");


	NXOpen::Expression *expression4;
	expression4 = workPart->Expressions()->CreateWithUnits("rrp=3.5", nullNXOpen_Unit);


	std::vector<NXOpen::NXObject *> objects4(1);
	objects4[0] = expression4;
	expression4->EditComment("");

	NXOpen::Expression *expression5;
	expression5 = workPart->Expressions()->CreateWithUnits("t=0", nullNXOpen_Unit);


	std::vector<NXOpen::NXObject *> objects5(1);
	objects5[0] = expression5;

	expression5->EditComment("");


	NXOpen::Expression *expression6;
	expression6 = workPart->Expressions()->CreateWithUnits("zt=0", nullNXOpen_Unit);


	std::vector<NXOpen::NXObject *> objects6(1);
	objects6[0] = expression6;

	expression6->EditComment("");

	NXOpen::Expression *expression7;
	expression7 = workPart->Expressions()->CreateWithUnits("a1=360*t*zc", nullNXOpen_Unit);


	std::vector<NXOpen::NXObject *> objects7(1);
	objects7[0] = expression7;
	
	expression7->EditComment("");

	NXOpen::Expression *expression8;
	try
	{
		// 数据类型错误匹配（二元运算）
		expression8 = workPart->Expressions()->CreateWithUnits("f=1/sqrt(1+k1*k1-2*k1*cos(a1))", nullNXOpen_Unit);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(3270018);
	}


	NXOpen::Expression *expression9;
	expression9 = workPart->Expressions()->CreateWithUnits("zp=zc+1", nullNXOpen_Unit);


	std::vector<NXOpen::NXObject *> objects8(1);
	objects8[0] = expression9;

	expression9->EditComment("");

	NXOpen::Expression *expression10;
	expression10 = workPart->Expressions()->CreateWithUnits("i=zp/zc", nullNXOpen_Unit);

	std::vector<NXOpen::NXObject *> objects9(1);
	objects9[0] = expression10;

	expression10->EditComment("");

	NXOpen::Expression *expression11;
	expression11 = workPart->Expressions()->CreateWithUnits("k1=e*zc/rp", nullNXOpen_Unit);

	std::vector<NXOpen::NXObject *> objects10(1);
	objects10[0] = expression11;
	expression11->EditComment("");

	NXOpen::Expression *expression12;
	try
	{
		// 指定的表达式变量不存在。
		expression12 = workPart->Expressions()->CreateWithUnits("xt=(rp-rrp*f)*cos((1-i)*a1)-(e-k1*rrp*f)*cos(i*a1)", nullNXOpen_Unit);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050007);
	}


	NXOpen::Expression *expression13;
	try
	{
		// 指定的表达式变量不存在。
		expression13 = workPart->Expressions()->CreateWithUnits("yt=(rp-rrp*f)*sin((1-i)*a1)+(e-k1*rrp*f)*sin(i*a1)", nullNXOpen_Unit);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050007);
	}

	NXOpen::Expression *expression14;
	expression14 = workPart->Expressions()->CreateWithUnits("f=1/sqrt(1+k1*k1-2*k1*cos(a1))", nullNXOpen_Unit);


	std::vector<NXOpen::NXObject *> objects11(1);
	objects11[0] = expression14;

	expression14->EditComment("");

	NXOpen::Expression *expression15;
	expression15 = workPart->Expressions()->CreateWithUnits("xt=(rp-rrp*f)*cos((1-i)*a1)-(e-k1*rrp*f)*cos(i*a1)", nullNXOpen_Unit);

	std::vector<NXOpen::NXObject *> objects12(1);
	objects12[0] = expression15;

	expression15->EditComment("");

	NXOpen::Expression *expression16;
	expression16 = workPart->Expressions()->CreateWithUnits("yt=(rp-rrp*f)*sin((1-i)*a1)+(e-k1*rrp*f)*sin(i*a1)", nullNXOpen_Unit);

	std::vector<NXOpen::NXObject *> objects13(1);
	objects13[0] = expression16;

	expression16->EditComment("");

	std::vector<NXOpen::NXObject *> objects14(13);
	objects14[0] = expression1;
	objects14[1] = expression2;
	objects14[2] = expression3;
	objects14[3] = expression4;
	objects14[4] = expression5;
	objects14[5] = expression6;
	objects14[6] = expression7;
	objects14[7] = expression9;
	objects14[8] = expression10;
	objects14[9] = expression11;
	objects14[10] = expression14;
	objects14[11] = expression15;
	objects14[12] = expression16;


	// ----------------------------------------------
	//   插入(S)->草图(H)...
	// ----------------------------------------------

	NXOpen::Sketch *nullNXOpen_Sketch(NULL);
	NXOpen::SketchInPlaceBuilder *sketchInPlaceBuilder1;
	sketchInPlaceBuilder1 = workPart->Sketches()->CreateSketchInPlaceBuilder2(nullNXOpen_Sketch);

	NXOpen::Point3d origin1(0.0, 0.0, 0.0);
	NXOpen::Vector3d normal1(0.0, 0.0, 1.0);
	NXOpen::Plane *plane1;
	plane1 = workPart->Planes()->CreatePlane(origin1, normal1, NXOpen::SmartObject::UpdateOptionWithinModeling);

	sketchInPlaceBuilder1->SetPlaneReference(plane1);

	NXOpen::Unit *unit1(dynamic_cast<NXOpen::Unit *>(workPart->UnitCollection()->FindObject("MilliMeter")));
	NXOpen::Expression *expression17;
	expression17 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression18;
	expression18 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::SketchAlongPathBuilder *sketchAlongPathBuilder1;
	sketchAlongPathBuilder1 = workPart->Sketches()->CreateSketchAlongPathBuilder(nullNXOpen_Sketch);

	sketchAlongPathBuilder1->PlaneLocation()->Expression()->SetRightHandSide("0");

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

	NXOpen::Sketch *sketch1(dynamic_cast<NXOpen::Sketch *>(nXObject1));
	NXOpen::Features::Feature *feature1;
	feature1 = sketch1->Feature();

	sketch1->Activate(NXOpen::Sketch::ViewReorientTrue);

	sketchInPlaceBuilder1->Destroy();

	sketchAlongPathBuilder1->Destroy();

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression18);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression17);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	plane1->DestroyPlane();

	// ----------------------------------------------
	//   插入(S)->草图曲线(S)->点(T)...
	// ----------------------------------------------

	NXOpen::Expression *expression19;
	expression19 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression20;
	expression20 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression21;
	expression21 = workPart->Expressions()->CreateSystemExpressionWithUnits("p14_x=0.00000000000", unit1);

	NXOpen::Expression *expression22;
	expression22 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_y=0.00000000000", unit1);

	NXOpen::Expression *expression23;
	expression23 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_z=0.00000000000", unit1);

	NXOpen::Expression *expression24;
	expression24 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_xdelta=0.00000000000", unit1);

	NXOpen::Expression *expression25;
	expression25 = workPart->Expressions()->CreateSystemExpressionWithUnits("p18_ydelta=0.00000000000", unit1);

	NXOpen::Expression *expression26;
	expression26 = workPart->Expressions()->CreateSystemExpressionWithUnits("p19_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression27;
	expression27 = workPart->Expressions()->CreateSystemExpressionWithUnits("p20_radius=0.00000000000", unit1);

	NXOpen::Unit *unit2(dynamic_cast<NXOpen::Unit *>(workPart->UnitCollection()->FindObject("Degrees")));
	NXOpen::Expression *expression28;
	expression28 = workPart->Expressions()->CreateSystemExpressionWithUnits("p21_angle=0.00000000000", unit2);

	NXOpen::Expression *expression29;
	expression29 = workPart->Expressions()->CreateSystemExpressionWithUnits("p22_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression30;
	expression30 = workPart->Expressions()->CreateSystemExpressionWithUnits("p23_radius=0.00000000000", unit1);

	NXOpen::Expression *expression31;
	expression31 = workPart->Expressions()->CreateSystemExpressionWithUnits("p24_angle1=0.00000000000", unit2);

	NXOpen::Expression *expression32;
	expression32 = workPart->Expressions()->CreateSystemExpressionWithUnits("p25_angle2=0.00000000000", unit2);

	NXOpen::Expression *expression33;
	expression33 = workPart->Expressions()->CreateSystemExpressionWithUnits("p26_distance=0", unit1);

	NXOpen::Expression *expression34;
	expression34 = workPart->Expressions()->CreateSystemExpressionWithUnits("p27_arclen=0", unit1);

	NXOpen::Expression *expression35;
	expression35 = workPart->Expressions()->CreateSystemExpressionWithUnits("p28_percent=0", nullNXOpen_Unit);

	expression21->SetRightHandSide("11");

	expression22->SetRightHandSide("19.5");

	expression23->SetRightHandSide("0");

	expression24->SetRightHandSide("0");

	expression25->SetRightHandSide("0");

	expression26->SetRightHandSide("0");

	expression27->SetRightHandSide("0");

	expression28->SetRightHandSide("0");

	expression29->SetRightHandSide("0");

	expression30->SetRightHandSide("0");

	expression31->SetRightHandSide("0");

	expression32->SetRightHandSide("0");

	expression33->SetRightHandSide("0");

	expression35->SetRightHandSide("100");

	expression34->SetRightHandSide("0");

	NXOpen::Expression *expression36;
	expression36 = workPart->Expressions()->CreateSystemExpressionWithUnits("p29_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar1;
	scalar1 = workPart->Scalars()->CreateScalarExpression(expression36, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression37;
	expression37 = workPart->Expressions()->CreateSystemExpressionWithUnits("p30_y=0.00000000000", unit1);

	NXOpen::Scalar *scalar2;
	scalar2 = workPart->Scalars()->CreateScalarExpression(expression37, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression38;
	expression38 = workPart->Expressions()->CreateSystemExpressionWithUnits("p31_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar3;
	scalar3 = workPart->Scalars()->CreateScalarExpression(expression38, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point1;
	point1 = workPart->Points()->CreatePoint(scalar1, scalar2, scalar3, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression21->SetRightHandSide("0.00000000000");

	expression22->SetRightHandSide("0.00000000000");

	expression23->SetRightHandSide("0.00000000000");

	expression24->SetRightHandSide("0.00000000000");

	expression25->SetRightHandSide("0.00000000000");

	expression26->SetRightHandSide("0.00000000000");

	expression27->SetRightHandSide("0.00000000000");

	expression28->SetRightHandSide("0.00000000000");

	expression29->SetRightHandSide("0.00000000000");

	expression30->SetRightHandSide("0.00000000000");

	expression31->SetRightHandSide("0.00000000000");

	expression32->SetRightHandSide("0.00000000000");

	expression35->SetRightHandSide("100.00000000000");

	// ----------------------------------------------
	//   Dialog Begin Point
	// ----------------------------------------------
	expression22->SetRightHandSide("19.5");

	expression21->SetRightHandSide("0.00000000000");

	expression22->SetRightHandSide("19.5");

	expression23->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point1);

	NXOpen::Expression *expression39;
	expression39 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar4;
	scalar4 = workPart->Scalars()->CreateScalarExpression(expression39, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression40;
	expression40 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=19.5", unit1);

	NXOpen::Scalar *scalar5;
	scalar5 = workPart->Scalars()->CreateScalarExpression(expression40, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression41;
	expression41 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar6;
	scalar6 = workPart->Scalars()->CreateScalarExpression(expression41, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point2;
	point2 = workPart->Points()->CreatePoint(scalar4, scalar5, scalar6, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression21->SetRightHandSide("0.00000000000");

	expression22->SetRightHandSide("19.5");

	expression23->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point2);

	NXOpen::Expression *expression42;
	expression42 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar7;
	scalar7 = workPart->Scalars()->CreateScalarExpression(expression42, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression43;
	expression43 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=19.5", unit1);

	NXOpen::Scalar *scalar8;
	scalar8 = workPart->Scalars()->CreateScalarExpression(expression43, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression44;
	expression44 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar9;
	scalar9 = workPart->Scalars()->CreateScalarExpression(expression44, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point3;
	point3 = workPart->Points()->CreatePoint(scalar7, scalar8, scalar9, NXOpen::SmartObject::UpdateOptionWithinModeling);


	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression21);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression22);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression23);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression24);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression25);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression26);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression27);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression28);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression29);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression30);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression31);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression32);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression33);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression34);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression35);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	workPart->Expressions()->Delete(expression20);

	NXOpen::Scalar *scalar10;
	scalar10 = workPart->Scalars()->CreateScalarExpression(expression42, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar11;
	scalar11 = workPart->Scalars()->CreateScalarExpression(expression43, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar12;
	scalar12 = workPart->Scalars()->CreateScalarExpression(expression44, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point4;
	point4 = workPart->Points()->CreatePoint(scalar10, scalar11, scalar12, NXOpen::SmartObject::UpdateOptionWithinModeling);

	point3->RemoveParameters();

	NXOpen::Point3d coordinates1(0.0, 19.5, 0.0);
	point3->SetCoordinates(coordinates1);

	theSession->ActiveSketch()->AddGeometry(point3, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->Update();

	workPart->Points()->DeletePoint(point4);

	workPart->Expressions()->Delete(expression19);

	NXOpen::Expression *expression45;
	expression45 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression46;
	expression46 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression47;
	expression47 = workPart->Expressions()->CreateSystemExpressionWithUnits("p14_x=0.00000000000", unit1);

	NXOpen::Expression *expression48;
	expression48 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_y=0.00000000000", unit1);

	NXOpen::Expression *expression49;
	expression49 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_z=0.00000000000", unit1);

	NXOpen::Expression *expression50;
	expression50 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_xdelta=0.00000000000", unit1);

	NXOpen::Expression *expression51;
	expression51 = workPart->Expressions()->CreateSystemExpressionWithUnits("p18_ydelta=0.00000000000", unit1);

	NXOpen::Expression *expression52;
	expression52 = workPart->Expressions()->CreateSystemExpressionWithUnits("p19_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression53;
	expression53 = workPart->Expressions()->CreateSystemExpressionWithUnits("p20_radius=0.00000000000", unit1);

	NXOpen::Expression *expression54;
	expression54 = workPart->Expressions()->CreateSystemExpressionWithUnits("p21_angle=0.00000000000", unit2);

	NXOpen::Expression *expression55;
	expression55 = workPart->Expressions()->CreateSystemExpressionWithUnits("p22_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression56;
	expression56 = workPart->Expressions()->CreateSystemExpressionWithUnits("p23_radius=0.00000000000", unit1);

	NXOpen::Expression *expression57;
	expression57 = workPart->Expressions()->CreateSystemExpressionWithUnits("p24_angle1=0.00000000000", unit2);

	NXOpen::Expression *expression58;
	expression58 = workPart->Expressions()->CreateSystemExpressionWithUnits("p25_angle2=0.00000000000", unit2);

	NXOpen::Expression *expression59;
	expression59 = workPart->Expressions()->CreateSystemExpressionWithUnits("p26_distance=0", unit1);

	NXOpen::Expression *expression60;
	expression60 = workPart->Expressions()->CreateSystemExpressionWithUnits("p27_arclen=0", unit1);

	NXOpen::Expression *expression61;
	expression61 = workPart->Expressions()->CreateSystemExpressionWithUnits("p28_percent=0", nullNXOpen_Unit);

	expression47->SetRightHandSide("0");

	expression48->SetRightHandSide("19.5");

	expression49->SetRightHandSide("0");

	expression50->SetRightHandSide("0");

	expression51->SetRightHandSide("0");

	expression52->SetRightHandSide("0");

	expression53->SetRightHandSide("0");

	expression54->SetRightHandSide("0");

	expression55->SetRightHandSide("0");

	expression56->SetRightHandSide("0");

	expression57->SetRightHandSide("0");

	expression58->SetRightHandSide("0");

	expression59->SetRightHandSide("0");

	expression61->SetRightHandSide("100");

	expression60->SetRightHandSide("0");

	NXOpen::Expression *expression62;
	expression62 = workPart->Expressions()->CreateSystemExpressionWithUnits("p29_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar13;
	scalar13 = workPart->Scalars()->CreateScalarExpression(expression62, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression63;
	expression63 = workPart->Expressions()->CreateSystemExpressionWithUnits("p30_y=0.00000000000", unit1);

	NXOpen::Scalar *scalar14;
	scalar14 = workPart->Scalars()->CreateScalarExpression(expression63, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression64;
	expression64 = workPart->Expressions()->CreateSystemExpressionWithUnits("p31_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar15;
	scalar15 = workPart->Scalars()->CreateScalarExpression(expression64, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point5;
	point5 = workPart->Points()->CreatePoint(scalar13, scalar14, scalar15, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression47->SetRightHandSide("0.00000000000");

	expression48->SetRightHandSide("0.00000000000");

	expression49->SetRightHandSide("0.00000000000");

	expression50->SetRightHandSide("0.00000000000");

	expression51->SetRightHandSide("0.00000000000");

	expression52->SetRightHandSide("0.00000000000");

	expression53->SetRightHandSide("0.00000000000");

	expression54->SetRightHandSide("0.00000000000");

	expression55->SetRightHandSide("0.00000000000");

	expression56->SetRightHandSide("0.00000000000");

	expression57->SetRightHandSide("0.00000000000");

	expression58->SetRightHandSide("0.00000000000");

	expression61->SetRightHandSide("100.00000000000");

	// ----------------------------------------------
	//   Dialog Begin Point
	// ----------------------------------------------
	expression48->SetRightHandSide("76.3");

	expression47->SetRightHandSide("0.00000000000");

	expression48->SetRightHandSide("76.3");

	expression49->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point5);

	NXOpen::Expression *expression65;
	expression65 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar16;
	scalar16 = workPart->Scalars()->CreateScalarExpression(expression65, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression66;
	expression66 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=76.3", unit1);

	NXOpen::Scalar *scalar17;
	scalar17 = workPart->Scalars()->CreateScalarExpression(expression66, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression67;
	expression67 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar18;
	scalar18 = workPart->Scalars()->CreateScalarExpression(expression67, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point6;
	point6 = workPart->Points()->CreatePoint(scalar16, scalar17, scalar18, NXOpen::SmartObject::UpdateOptionWithinModeling);


	expression47->SetRightHandSide("0.00000000000");

	expression48->SetRightHandSide("76.3");

	expression49->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point6);

	NXOpen::Expression *expression68;
	expression68 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar19;
	scalar19 = workPart->Scalars()->CreateScalarExpression(expression68, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression69;
	expression69 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=76.3", unit1);

	NXOpen::Scalar *scalar20;
	scalar20 = workPart->Scalars()->CreateScalarExpression(expression69, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression70;
	expression70 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar21;
	scalar21 = workPart->Scalars()->CreateScalarExpression(expression70, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point7;
	point7 = workPart->Points()->CreatePoint(scalar19, scalar20, scalar21, NXOpen::SmartObject::UpdateOptionWithinModeling);


	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression47);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression48);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression49);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression50);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression51);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression52);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression53);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression54);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression55);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression56);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression57);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression58);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression59);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression60);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression61);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	workPart->Expressions()->Delete(expression46);

	NXOpen::Scalar *scalar22;
	scalar22 = workPart->Scalars()->CreateScalarExpression(expression68, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar23;
	scalar23 = workPart->Scalars()->CreateScalarExpression(expression69, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar24;
	scalar24 = workPart->Scalars()->CreateScalarExpression(expression70, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point8;
	point8 = workPart->Points()->CreatePoint(scalar22, scalar23, scalar24, NXOpen::SmartObject::UpdateOptionWithinModeling);

	point7->RemoveParameters();

	NXOpen::Point3d coordinates2(0.0, 76.299999999999997, 0.0);
	point7->SetCoordinates(coordinates2);

	theSession->ActiveSketch()->AddGeometry(point7, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->Update();


	workPart->Points()->DeletePoint(point8);

	workPart->Expressions()->Delete(expression45);


	NXOpen::Expression *expression71;
	expression71 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression72;
	expression72 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression73;
	expression73 = workPart->Expressions()->CreateSystemExpressionWithUnits("p14_x=0.00000000000", unit1);

	NXOpen::Expression *expression74;
	expression74 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_y=0.00000000000", unit1);

	NXOpen::Expression *expression75;
	expression75 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_z=0.00000000000", unit1);

	NXOpen::Expression *expression76;
	expression76 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_xdelta=0.00000000000", unit1);

	NXOpen::Expression *expression77;
	expression77 = workPart->Expressions()->CreateSystemExpressionWithUnits("p18_ydelta=0.00000000000", unit1);

	NXOpen::Expression *expression78;
	expression78 = workPart->Expressions()->CreateSystemExpressionWithUnits("p19_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression79;
	expression79 = workPart->Expressions()->CreateSystemExpressionWithUnits("p20_radius=0.00000000000", unit1);

	NXOpen::Expression *expression80;
	expression80 = workPart->Expressions()->CreateSystemExpressionWithUnits("p21_angle=0.00000000000", unit2);

	NXOpen::Expression *expression81;
	expression81 = workPart->Expressions()->CreateSystemExpressionWithUnits("p22_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression82;
	expression82 = workPart->Expressions()->CreateSystemExpressionWithUnits("p23_radius=0.00000000000", unit1);

	NXOpen::Expression *expression83;
	expression83 = workPart->Expressions()->CreateSystemExpressionWithUnits("p24_angle1=0.00000000000", unit2);

	NXOpen::Expression *expression84;
	expression84 = workPart->Expressions()->CreateSystemExpressionWithUnits("p25_angle2=0.00000000000", unit2);

	NXOpen::Expression *expression85;
	expression85 = workPart->Expressions()->CreateSystemExpressionWithUnits("p26_distance=0", unit1);

	NXOpen::Expression *expression86;
	expression86 = workPart->Expressions()->CreateSystemExpressionWithUnits("p27_arclen=0", unit1);

	NXOpen::Expression *expression87;
	expression87 = workPart->Expressions()->CreateSystemExpressionWithUnits("p28_percent=0", nullNXOpen_Unit);

	expression73->SetRightHandSide("0");

	expression74->SetRightHandSide("76.3");

	expression75->SetRightHandSide("0");

	expression76->SetRightHandSide("0");

	expression77->SetRightHandSide("0");

	expression78->SetRightHandSide("0");

	expression79->SetRightHandSide("0");

	expression80->SetRightHandSide("0");

	expression81->SetRightHandSide("0");

	expression82->SetRightHandSide("0");

	expression83->SetRightHandSide("0");

	expression84->SetRightHandSide("0");

	expression85->SetRightHandSide("0");

	expression87->SetRightHandSide("100");

	expression86->SetRightHandSide("0");

	NXOpen::Expression *expression88;
	expression88 = workPart->Expressions()->CreateSystemExpressionWithUnits("p29_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar25;
	scalar25 = workPart->Scalars()->CreateScalarExpression(expression88, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression89;
	expression89 = workPart->Expressions()->CreateSystemExpressionWithUnits("p30_y=0.00000000000", unit1);

	NXOpen::Scalar *scalar26;
	scalar26 = workPart->Scalars()->CreateScalarExpression(expression89, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression90;
	expression90 = workPart->Expressions()->CreateSystemExpressionWithUnits("p31_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar27;
	scalar27 = workPart->Scalars()->CreateScalarExpression(expression90, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point9;
	point9 = workPart->Points()->CreatePoint(scalar25, scalar26, scalar27, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression73->SetRightHandSide("0.00000000000");

	expression74->SetRightHandSide("0.00000000000");

	expression75->SetRightHandSide("0.00000000000");

	expression76->SetRightHandSide("0.00000000000");

	expression77->SetRightHandSide("0.00000000000");

	expression78->SetRightHandSide("0.00000000000");

	expression79->SetRightHandSide("0.00000000000");

	expression80->SetRightHandSide("0.00000000000");

	expression81->SetRightHandSide("0.00000000000");

	expression82->SetRightHandSide("0.00000000000");

	expression83->SetRightHandSide("0.00000000000");

	expression84->SetRightHandSide("0.00000000000");

	expression87->SetRightHandSide("100.00000000000");

	// ----------------------------------------------
	//   Dialog Begin Point
	// ----------------------------------------------
	expression73->SetRightHandSide("-2");

	expression73->SetRightHandSide("-2");

	expression74->SetRightHandSide("0.00000000000");

	expression75->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point9);

	NXOpen::Expression *expression91;
	expression91 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=-2", unit1);

	NXOpen::Scalar *scalar28;
	scalar28 = workPart->Scalars()->CreateScalarExpression(expression91, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression92;
	expression92 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=0.00000000000", unit1);

	NXOpen::Scalar *scalar29;
	scalar29 = workPart->Scalars()->CreateScalarExpression(expression92, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression93;
	expression93 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar30;
	scalar30 = workPart->Scalars()->CreateScalarExpression(expression93, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point10;
	point10 = workPart->Points()->CreatePoint(scalar28, scalar29, scalar30, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression74->SetRightHandSide("76.3");

	expression73->SetRightHandSide("-2");

	expression74->SetRightHandSide("76.3");

	expression75->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point10);

	NXOpen::Expression *expression94;
	expression94 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=-2", unit1);

	NXOpen::Scalar *scalar31;
	scalar31 = workPart->Scalars()->CreateScalarExpression(expression94, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression95;
	expression95 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=76.3", unit1);

	NXOpen::Scalar *scalar32;
	scalar32 = workPart->Scalars()->CreateScalarExpression(expression95, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression96;
	expression96 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar33;
	scalar33 = workPart->Scalars()->CreateScalarExpression(expression96, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point11;
	point11 = workPart->Points()->CreatePoint(scalar31, scalar32, scalar33, NXOpen::SmartObject::UpdateOptionWithinModeling);


	expression73->SetRightHandSide("-2");

	expression74->SetRightHandSide("76.3");

	expression75->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point11);

	NXOpen::Expression *expression97;
	expression97 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=-2", unit1);

	NXOpen::Scalar *scalar34;
	scalar34 = workPart->Scalars()->CreateScalarExpression(expression97, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression98;
	expression98 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=76.3", unit1);

	NXOpen::Scalar *scalar35;
	scalar35 = workPart->Scalars()->CreateScalarExpression(expression98, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression99;
	expression99 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar36;
	scalar36 = workPart->Scalars()->CreateScalarExpression(expression99, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point12;
	point12 = workPart->Points()->CreatePoint(scalar34, scalar35, scalar36, NXOpen::SmartObject::UpdateOptionWithinModeling);


	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression73);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression74);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression75);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression76);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression77);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression78);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression79);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression80);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression81);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression82);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression83);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression84);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression85);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression86);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression87);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	workPart->Expressions()->Delete(expression72);

	NXOpen::Scalar *scalar37;
	scalar37 = workPart->Scalars()->CreateScalarExpression(expression97, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar38;
	scalar38 = workPart->Scalars()->CreateScalarExpression(expression98, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar39;
	scalar39 = workPart->Scalars()->CreateScalarExpression(expression99, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point13;
	point13 = workPart->Points()->CreatePoint(scalar37, scalar38, scalar39, NXOpen::SmartObject::UpdateOptionWithinModeling);

	point12->RemoveParameters();

	NXOpen::Point3d coordinates3(-2.0, 76.299999999999997, 0.0);
	point12->SetCoordinates(coordinates3);

	theSession->ActiveSketch()->AddGeometry(point12, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->Update();

	workPart->Points()->DeletePoint(point13);

	workPart->Expressions()->Delete(expression71);


	NXOpen::Expression *expression100;
	expression100 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression101;
	expression101 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression102;
	expression102 = workPart->Expressions()->CreateSystemExpressionWithUnits("p14_x=0.00000000000", unit1);

	NXOpen::Expression *expression103;
	expression103 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_y=0.00000000000", unit1);

	NXOpen::Expression *expression104;
	expression104 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_z=0.00000000000", unit1);

	NXOpen::Expression *expression105;
	expression105 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_xdelta=0.00000000000", unit1);

	NXOpen::Expression *expression106;
	expression106 = workPart->Expressions()->CreateSystemExpressionWithUnits("p18_ydelta=0.00000000000", unit1);

	NXOpen::Expression *expression107;
	expression107 = workPart->Expressions()->CreateSystemExpressionWithUnits("p19_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression108;
	expression108 = workPart->Expressions()->CreateSystemExpressionWithUnits("p20_radius=0.00000000000", unit1);

	NXOpen::Expression *expression109;
	expression109 = workPart->Expressions()->CreateSystemExpressionWithUnits("p21_angle=0.00000000000", unit2);

	NXOpen::Expression *expression110;
	expression110 = workPart->Expressions()->CreateSystemExpressionWithUnits("p22_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression111;
	expression111 = workPart->Expressions()->CreateSystemExpressionWithUnits("p23_radius=0.00000000000", unit1);

	NXOpen::Expression *expression112;
	expression112 = workPart->Expressions()->CreateSystemExpressionWithUnits("p24_angle1=0.00000000000", unit2);

	NXOpen::Expression *expression113;
	expression113 = workPart->Expressions()->CreateSystemExpressionWithUnits("p25_angle2=0.00000000000", unit2);

	NXOpen::Expression *expression114;
	expression114 = workPart->Expressions()->CreateSystemExpressionWithUnits("p26_distance=0", unit1);

	NXOpen::Expression *expression115;
	expression115 = workPart->Expressions()->CreateSystemExpressionWithUnits("p27_arclen=0", unit1);

	NXOpen::Expression *expression116;
	expression116 = workPart->Expressions()->CreateSystemExpressionWithUnits("p28_percent=0", nullNXOpen_Unit);

	expression102->SetRightHandSide("-2");

	expression103->SetRightHandSide("76.3");

	expression104->SetRightHandSide("0");

	expression105->SetRightHandSide("0");

	expression106->SetRightHandSide("0");

	expression107->SetRightHandSide("0");

	expression108->SetRightHandSide("0");

	expression109->SetRightHandSide("0");

	expression110->SetRightHandSide("0");

	expression111->SetRightHandSide("0");

	expression112->SetRightHandSide("0");

	expression113->SetRightHandSide("0");

	expression114->SetRightHandSide("0");

	expression116->SetRightHandSide("100");

	expression115->SetRightHandSide("0");

	NXOpen::Expression *expression117;
	expression117 = workPart->Expressions()->CreateSystemExpressionWithUnits("p29_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar40;
	scalar40 = workPart->Scalars()->CreateScalarExpression(expression117, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression118;
	expression118 = workPart->Expressions()->CreateSystemExpressionWithUnits("p30_y=0.00000000000", unit1);

	NXOpen::Scalar *scalar41;
	scalar41 = workPart->Scalars()->CreateScalarExpression(expression118, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression119;
	expression119 = workPart->Expressions()->CreateSystemExpressionWithUnits("p31_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar42;
	scalar42 = workPart->Scalars()->CreateScalarExpression(expression119, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point14;
	point14 = workPart->Points()->CreatePoint(scalar40, scalar41, scalar42, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression102->SetRightHandSide("0.00000000000");

	expression103->SetRightHandSide("0.00000000000");

	expression104->SetRightHandSide("0.00000000000");

	expression105->SetRightHandSide("0.00000000000");

	expression106->SetRightHandSide("0.00000000000");

	expression107->SetRightHandSide("0.00000000000");

	expression108->SetRightHandSide("0.00000000000");

	expression109->SetRightHandSide("0.00000000000");

	expression110->SetRightHandSide("0.00000000000");

	expression111->SetRightHandSide("0.00000000000");

	expression112->SetRightHandSide("0.00000000000");

	expression113->SetRightHandSide("0.00000000000");

	expression116->SetRightHandSide("100.00000000000");

	// ----------------------------------------------
	//   Dialog Begin Point
	// ----------------------------------------------
	expression103->SetRightHandSide("80.5");

	expression102->SetRightHandSide("0.00000000000");

	expression103->SetRightHandSide("80.5");

	expression104->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point14);

	NXOpen::Expression *expression120;
	expression120 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar43;
	scalar43 = workPart->Scalars()->CreateScalarExpression(expression120, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression121;
	expression121 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=80.5", unit1);

	NXOpen::Scalar *scalar44;
	scalar44 = workPart->Scalars()->CreateScalarExpression(expression121, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression122;
	expression122 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar45;
	scalar45 = workPart->Scalars()->CreateScalarExpression(expression122, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point15;
	point15 = workPart->Points()->CreatePoint(scalar43, scalar44, scalar45, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression102->SetRightHandSide("-2");

	expression102->SetRightHandSide("-2");

	expression103->SetRightHandSide("80.5");

	expression104->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point15);

	NXOpen::Expression *expression123;
	expression123 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=-2", unit1);

	NXOpen::Scalar *scalar46;
	scalar46 = workPart->Scalars()->CreateScalarExpression(expression123, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression124;
	expression124 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=80.5", unit1);

	NXOpen::Scalar *scalar47;
	scalar47 = workPart->Scalars()->CreateScalarExpression(expression124, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression125;
	expression125 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar48;
	scalar48 = workPart->Scalars()->CreateScalarExpression(expression125, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point16;
	point16 = workPart->Points()->CreatePoint(scalar46, scalar47, scalar48, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression102->SetRightHandSide("-2");

	expression103->SetRightHandSide("80.5");

	expression104->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point16);

	NXOpen::Expression *expression126;
	expression126 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=-2", unit1);

	NXOpen::Scalar *scalar49;
	scalar49 = workPart->Scalars()->CreateScalarExpression(expression126, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression127;
	expression127 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=80.5", unit1);

	NXOpen::Scalar *scalar50;
	scalar50 = workPart->Scalars()->CreateScalarExpression(expression127, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression128;
	expression128 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar51;
	scalar51 = workPart->Scalars()->CreateScalarExpression(expression128, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point17;
	point17 = workPart->Points()->CreatePoint(scalar49, scalar50, scalar51, NXOpen::SmartObject::UpdateOptionWithinModeling);


	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression102);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression103);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression104);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression105);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression106);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression107);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression108);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression109);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression110);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression111);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression112);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression113);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression114);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression115);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression116);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	workPart->Expressions()->Delete(expression101);

	NXOpen::Scalar *scalar52;
	scalar52 = workPart->Scalars()->CreateScalarExpression(expression126, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar53;
	scalar53 = workPart->Scalars()->CreateScalarExpression(expression127, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar54;
	scalar54 = workPart->Scalars()->CreateScalarExpression(expression128, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point18;
	point18 = workPart->Points()->CreatePoint(scalar52, scalar53, scalar54, NXOpen::SmartObject::UpdateOptionWithinModeling);

	point17->RemoveParameters();

	NXOpen::Point3d coordinates4(-2.0, 80.5, 0.0);
	point17->SetCoordinates(coordinates4);

	theSession->ActiveSketch()->AddGeometry(point17, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->Update();

	workPart->Points()->DeletePoint(point18);

	workPart->Expressions()->Delete(expression100);

	NXOpen::Expression *expression129;
	expression129 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression130;
	expression130 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression131;
	expression131 = workPart->Expressions()->CreateSystemExpressionWithUnits("p14_x=0.00000000000", unit1);

	NXOpen::Expression *expression132;
	expression132 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_y=0.00000000000", unit1);

	NXOpen::Expression *expression133;
	expression133 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_z=0.00000000000", unit1);

	NXOpen::Expression *expression134;
	expression134 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_xdelta=0.00000000000", unit1);

	NXOpen::Expression *expression135;
	expression135 = workPart->Expressions()->CreateSystemExpressionWithUnits("p18_ydelta=0.00000000000", unit1);

	NXOpen::Expression *expression136;
	expression136 = workPart->Expressions()->CreateSystemExpressionWithUnits("p19_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression137;
	expression137 = workPart->Expressions()->CreateSystemExpressionWithUnits("p20_radius=0.00000000000", unit1);

	NXOpen::Expression *expression138;
	expression138 = workPart->Expressions()->CreateSystemExpressionWithUnits("p21_angle=0.00000000000", unit2);

	NXOpen::Expression *expression139;
	expression139 = workPart->Expressions()->CreateSystemExpressionWithUnits("p22_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression140;
	expression140 = workPart->Expressions()->CreateSystemExpressionWithUnits("p23_radius=0.00000000000", unit1);

	NXOpen::Expression *expression141;
	expression141 = workPart->Expressions()->CreateSystemExpressionWithUnits("p24_angle1=0.00000000000", unit2);

	NXOpen::Expression *expression142;
	expression142 = workPart->Expressions()->CreateSystemExpressionWithUnits("p25_angle2=0.00000000000", unit2);

	NXOpen::Expression *expression143;
	expression143 = workPart->Expressions()->CreateSystemExpressionWithUnits("p26_distance=0", unit1);

	NXOpen::Expression *expression144;
	expression144 = workPart->Expressions()->CreateSystemExpressionWithUnits("p27_arclen=0", unit1);

	NXOpen::Expression *expression145;
	expression145 = workPart->Expressions()->CreateSystemExpressionWithUnits("p28_percent=0", nullNXOpen_Unit);

	expression131->SetRightHandSide("-2");

	expression132->SetRightHandSide("80.5");

	expression133->SetRightHandSide("0");

	expression134->SetRightHandSide("0");

	expression135->SetRightHandSide("0");

	expression136->SetRightHandSide("0");

	expression137->SetRightHandSide("0");

	expression138->SetRightHandSide("0");

	expression139->SetRightHandSide("0");

	expression140->SetRightHandSide("0");

	expression141->SetRightHandSide("0");

	expression142->SetRightHandSide("0");

	expression143->SetRightHandSide("0");

	expression145->SetRightHandSide("100");

	expression144->SetRightHandSide("0");

	NXOpen::Expression *expression146;
	expression146 = workPart->Expressions()->CreateSystemExpressionWithUnits("p29_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar55;
	scalar55 = workPart->Scalars()->CreateScalarExpression(expression146, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression147;
	expression147 = workPart->Expressions()->CreateSystemExpressionWithUnits("p30_y=0.00000000000", unit1);

	NXOpen::Scalar *scalar56;
	scalar56 = workPart->Scalars()->CreateScalarExpression(expression147, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression148;
	expression148 = workPart->Expressions()->CreateSystemExpressionWithUnits("p31_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar57;
	scalar57 = workPart->Scalars()->CreateScalarExpression(expression148, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point19;
	point19 = workPart->Points()->CreatePoint(scalar55, scalar56, scalar57, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression131->SetRightHandSide("0.00000000000");

	expression132->SetRightHandSide("0.00000000000");

	expression133->SetRightHandSide("0.00000000000");

	expression134->SetRightHandSide("0.00000000000");

	expression135->SetRightHandSide("0.00000000000");

	expression136->SetRightHandSide("0.00000000000");

	expression137->SetRightHandSide("0.00000000000");

	expression138->SetRightHandSide("0.00000000000");

	expression139->SetRightHandSide("0.00000000000");

	expression140->SetRightHandSide("0.00000000000");

	expression141->SetRightHandSide("0.00000000000");

	expression142->SetRightHandSide("0.00000000000");

	expression145->SetRightHandSide("100.00000000000");

	// ----------------------------------------------
	//   Dialog Begin Point
	// ----------------------------------------------
	expression132->SetRightHandSide("80.5");

	expression131->SetRightHandSide("0.00000000000");

	expression132->SetRightHandSide("80.5");

	expression133->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point19);

	NXOpen::Expression *expression149;
	expression149 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar58;
	scalar58 = workPart->Scalars()->CreateScalarExpression(expression149, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression150;
	expression150 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=80.5", unit1);

	NXOpen::Scalar *scalar59;
	scalar59 = workPart->Scalars()->CreateScalarExpression(expression150, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression151;
	expression151 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar60;
	scalar60 = workPart->Scalars()->CreateScalarExpression(expression151, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point20;
	point20 = workPart->Points()->CreatePoint(scalar58, scalar59, scalar60, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression131->SetRightHandSide("12");

	expression131->SetRightHandSide("12");

	expression132->SetRightHandSide("80.5");

	expression133->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point20);

	NXOpen::Expression *expression152;
	expression152 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=12", unit1);

	NXOpen::Scalar *scalar61;
	scalar61 = workPart->Scalars()->CreateScalarExpression(expression152, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression153;
	expression153 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=80.5", unit1);

	NXOpen::Scalar *scalar62;
	scalar62 = workPart->Scalars()->CreateScalarExpression(expression153, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression154;
	expression154 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar63;
	scalar63 = workPart->Scalars()->CreateScalarExpression(expression154, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point21;
	point21 = workPart->Points()->CreatePoint(scalar61, scalar62, scalar63, NXOpen::SmartObject::UpdateOptionWithinModeling);


	expression131->SetRightHandSide("12");

	expression132->SetRightHandSide("80.5");

	expression133->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point21);

	NXOpen::Expression *expression155;
	expression155 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=12", unit1);

	NXOpen::Scalar *scalar64;
	scalar64 = workPart->Scalars()->CreateScalarExpression(expression155, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression156;
	expression156 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=80.5", unit1);

	NXOpen::Scalar *scalar65;
	scalar65 = workPart->Scalars()->CreateScalarExpression(expression156, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression157;
	expression157 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar66;
	scalar66 = workPart->Scalars()->CreateScalarExpression(expression157, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point22;
	point22 = workPart->Points()->CreatePoint(scalar64, scalar65, scalar66, NXOpen::SmartObject::UpdateOptionWithinModeling);

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression131);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression132);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression133);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression134);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression135);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression136);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression137);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression138);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression139);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression140);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression141);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression142);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression143);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression144);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression145);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	workPart->Expressions()->Delete(expression130);

	NXOpen::Scalar *scalar67;
	scalar67 = workPart->Scalars()->CreateScalarExpression(expression155, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar68;
	scalar68 = workPart->Scalars()->CreateScalarExpression(expression156, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar69;
	scalar69 = workPart->Scalars()->CreateScalarExpression(expression157, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point23;
	point23 = workPart->Points()->CreatePoint(scalar67, scalar68, scalar69, NXOpen::SmartObject::UpdateOptionWithinModeling);

	point22->RemoveParameters();

	NXOpen::Point3d coordinates5(12.0, 80.5, 0.0);
	point22->SetCoordinates(coordinates5);

	theSession->ActiveSketch()->AddGeometry(point22, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->Update();


	workPart->Points()->DeletePoint(point23);

	workPart->Expressions()->Delete(expression129);


	NXOpen::Expression *expression158;
	expression158 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression159;
	expression159 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression160;
	expression160 = workPart->Expressions()->CreateSystemExpressionWithUnits("p14_x=0.00000000000", unit1);

	NXOpen::Expression *expression161;
	expression161 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_y=0.00000000000", unit1);

	NXOpen::Expression *expression162;
	expression162 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_z=0.00000000000", unit1);

	NXOpen::Expression *expression163;
	expression163 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_xdelta=0.00000000000", unit1);

	NXOpen::Expression *expression164;
	expression164 = workPart->Expressions()->CreateSystemExpressionWithUnits("p18_ydelta=0.00000000000", unit1);

	NXOpen::Expression *expression165;
	expression165 = workPart->Expressions()->CreateSystemExpressionWithUnits("p19_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression166;
	expression166 = workPart->Expressions()->CreateSystemExpressionWithUnits("p20_radius=0.00000000000", unit1);

	NXOpen::Expression *expression167;
	expression167 = workPart->Expressions()->CreateSystemExpressionWithUnits("p21_angle=0.00000000000", unit2);

	NXOpen::Expression *expression168;
	expression168 = workPart->Expressions()->CreateSystemExpressionWithUnits("p22_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression169;
	expression169 = workPart->Expressions()->CreateSystemExpressionWithUnits("p23_radius=0.00000000000", unit1);

	NXOpen::Expression *expression170;
	expression170 = workPart->Expressions()->CreateSystemExpressionWithUnits("p24_angle1=0.00000000000", unit2);

	NXOpen::Expression *expression171;
	expression171 = workPart->Expressions()->CreateSystemExpressionWithUnits("p25_angle2=0.00000000000", unit2);

	NXOpen::Expression *expression172;
	expression172 = workPart->Expressions()->CreateSystemExpressionWithUnits("p26_distance=0", unit1);

	NXOpen::Expression *expression173;
	expression173 = workPart->Expressions()->CreateSystemExpressionWithUnits("p27_arclen=0", unit1);

	NXOpen::Expression *expression174;
	expression174 = workPart->Expressions()->CreateSystemExpressionWithUnits("p28_percent=0", nullNXOpen_Unit);

	expression160->SetRightHandSide("12");

	expression161->SetRightHandSide("80.5");

	expression162->SetRightHandSide("0");

	expression163->SetRightHandSide("0");

	expression164->SetRightHandSide("0");

	expression165->SetRightHandSide("0");

	expression166->SetRightHandSide("0");

	expression167->SetRightHandSide("0");

	expression168->SetRightHandSide("0");

	expression169->SetRightHandSide("0");

	expression170->SetRightHandSide("0");

	expression171->SetRightHandSide("0");

	expression172->SetRightHandSide("0");

	expression174->SetRightHandSide("100");

	expression173->SetRightHandSide("0");

	NXOpen::Expression *expression175;
	expression175 = workPart->Expressions()->CreateSystemExpressionWithUnits("p29_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar70;
	scalar70 = workPart->Scalars()->CreateScalarExpression(expression175, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression176;
	expression176 = workPart->Expressions()->CreateSystemExpressionWithUnits("p30_y=0.00000000000", unit1);

	NXOpen::Scalar *scalar71;
	scalar71 = workPart->Scalars()->CreateScalarExpression(expression176, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression177;
	expression177 = workPart->Expressions()->CreateSystemExpressionWithUnits("p31_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar72;
	scalar72 = workPart->Scalars()->CreateScalarExpression(expression177, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point24;
	point24 = workPart->Points()->CreatePoint(scalar70, scalar71, scalar72, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression160->SetRightHandSide("0.00000000000");

	expression161->SetRightHandSide("0.00000000000");

	expression162->SetRightHandSide("0.00000000000");

	expression163->SetRightHandSide("0.00000000000");

	expression164->SetRightHandSide("0.00000000000");

	expression165->SetRightHandSide("0.00000000000");

	expression166->SetRightHandSide("0.00000000000");

	expression167->SetRightHandSide("0.00000000000");

	expression168->SetRightHandSide("0.00000000000");

	expression169->SetRightHandSide("0.00000000000");

	expression170->SetRightHandSide("0.00000000000");

	expression171->SetRightHandSide("0.00000000000");

	expression174->SetRightHandSide("100.00000000000");

	// ----------------------------------------------
	//   Dialog Begin Point
	// ----------------------------------------------
	expression160->SetRightHandSide("12");

	expression160->SetRightHandSide("12");

	expression161->SetRightHandSide("0.00000000000");

	expression162->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point24);

	NXOpen::Expression *expression178;
	expression178 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=12", unit1);

	NXOpen::Scalar *scalar73;
	scalar73 = workPart->Scalars()->CreateScalarExpression(expression178, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression179;
	expression179 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=0.00000000000", unit1);

	NXOpen::Scalar *scalar74;
	scalar74 = workPart->Scalars()->CreateScalarExpression(expression179, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression180;
	expression180 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar75;
	scalar75 = workPart->Scalars()->CreateScalarExpression(expression180, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point25;
	point25 = workPart->Points()->CreatePoint(scalar73, scalar74, scalar75, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression161->SetRightHandSide("76.3");

	expression160->SetRightHandSide("12");

	expression161->SetRightHandSide("76.3");

	expression162->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point25);

	NXOpen::Expression *expression181;
	expression181 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=12", unit1);

	NXOpen::Scalar *scalar76;
	scalar76 = workPart->Scalars()->CreateScalarExpression(expression181, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression182;
	expression182 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=76.3", unit1);

	NXOpen::Scalar *scalar77;
	scalar77 = workPart->Scalars()->CreateScalarExpression(expression182, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression183;
	expression183 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar78;
	scalar78 = workPart->Scalars()->CreateScalarExpression(expression183, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point26;
	point26 = workPart->Points()->CreatePoint(scalar76, scalar77, scalar78, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression160->SetRightHandSide("12");

	expression161->SetRightHandSide("76.3");

	expression162->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point26);

	NXOpen::Expression *expression184;
	expression184 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=12", unit1);

	NXOpen::Scalar *scalar79;
	scalar79 = workPart->Scalars()->CreateScalarExpression(expression184, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression185;
	expression185 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=76.3", unit1);

	NXOpen::Scalar *scalar80;
	scalar80 = workPart->Scalars()->CreateScalarExpression(expression185, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression186;
	expression186 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar81;
	scalar81 = workPart->Scalars()->CreateScalarExpression(expression186, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point27;
	point27 = workPart->Points()->CreatePoint(scalar79, scalar80, scalar81, NXOpen::SmartObject::UpdateOptionWithinModeling);

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression160);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression161);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression162);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression163);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression164);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression165);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression166);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression167);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression168);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression169);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression170);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression171);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression172);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression173);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression174);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	workPart->Expressions()->Delete(expression159);

	NXOpen::Scalar *scalar82;
	scalar82 = workPart->Scalars()->CreateScalarExpression(expression184, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar83;
	scalar83 = workPart->Scalars()->CreateScalarExpression(expression185, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar84;
	scalar84 = workPart->Scalars()->CreateScalarExpression(expression186, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point28;
	point28 = workPart->Points()->CreatePoint(scalar82, scalar83, scalar84, NXOpen::SmartObject::UpdateOptionWithinModeling);


	point27->RemoveParameters();

	NXOpen::Point3d coordinates6(12.0, 76.299999999999997, 0.0);
	point27->SetCoordinates(coordinates6);

	theSession->ActiveSketch()->AddGeometry(point27, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->Update();


	workPart->Points()->DeletePoint(point28);

	workPart->Expressions()->Delete(expression158);

	NXOpen::Expression *expression187;
	expression187 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression188;
	expression188 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression189;
	expression189 = workPart->Expressions()->CreateSystemExpressionWithUnits("p14_x=0.00000000000", unit1);

	NXOpen::Expression *expression190;
	expression190 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_y=0.00000000000", unit1);

	NXOpen::Expression *expression191;
	expression191 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_z=0.00000000000", unit1);

	NXOpen::Expression *expression192;
	expression192 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_xdelta=0.00000000000", unit1);

	NXOpen::Expression *expression193;
	expression193 = workPart->Expressions()->CreateSystemExpressionWithUnits("p18_ydelta=0.00000000000", unit1);

	NXOpen::Expression *expression194;
	expression194 = workPart->Expressions()->CreateSystemExpressionWithUnits("p19_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression195;
	expression195 = workPart->Expressions()->CreateSystemExpressionWithUnits("p20_radius=0.00000000000", unit1);

	NXOpen::Expression *expression196;
	expression196 = workPart->Expressions()->CreateSystemExpressionWithUnits("p21_angle=0.00000000000", unit2);

	NXOpen::Expression *expression197;
	expression197 = workPart->Expressions()->CreateSystemExpressionWithUnits("p22_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression198;
	expression198 = workPart->Expressions()->CreateSystemExpressionWithUnits("p23_radius=0.00000000000", unit1);

	NXOpen::Expression *expression199;
	expression199 = workPart->Expressions()->CreateSystemExpressionWithUnits("p24_angle1=0.00000000000", unit2);

	NXOpen::Expression *expression200;
	expression200 = workPart->Expressions()->CreateSystemExpressionWithUnits("p25_angle2=0.00000000000", unit2);

	NXOpen::Expression *expression201;
	expression201 = workPart->Expressions()->CreateSystemExpressionWithUnits("p26_distance=0", unit1);

	NXOpen::Expression *expression202;
	expression202 = workPart->Expressions()->CreateSystemExpressionWithUnits("p27_arclen=0", unit1);

	NXOpen::Expression *expression203;
	expression203 = workPart->Expressions()->CreateSystemExpressionWithUnits("p28_percent=0", nullNXOpen_Unit);

	expression189->SetRightHandSide("12");

	expression190->SetRightHandSide("76.3");

	expression191->SetRightHandSide("0");

	expression192->SetRightHandSide("0");

	expression193->SetRightHandSide("0");

	expression194->SetRightHandSide("0");

	expression195->SetRightHandSide("0");

	expression196->SetRightHandSide("0");

	expression197->SetRightHandSide("0");

	expression198->SetRightHandSide("0");

	expression199->SetRightHandSide("0");

	expression200->SetRightHandSide("0");

	expression201->SetRightHandSide("0");

	expression203->SetRightHandSide("100");

	expression202->SetRightHandSide("0");

	NXOpen::Expression *expression204;
	expression204 = workPart->Expressions()->CreateSystemExpressionWithUnits("p29_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar85;
	scalar85 = workPart->Scalars()->CreateScalarExpression(expression204, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression205;
	expression205 = workPart->Expressions()->CreateSystemExpressionWithUnits("p30_y=0.00000000000", unit1);

	NXOpen::Scalar *scalar86;
	scalar86 = workPart->Scalars()->CreateScalarExpression(expression205, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression206;
	expression206 = workPart->Expressions()->CreateSystemExpressionWithUnits("p31_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar87;
	scalar87 = workPart->Scalars()->CreateScalarExpression(expression206, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point29;
	point29 = workPart->Points()->CreatePoint(scalar85, scalar86, scalar87, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression189->SetRightHandSide("0.00000000000");

	expression190->SetRightHandSide("0.00000000000");

	expression191->SetRightHandSide("0.00000000000");

	expression192->SetRightHandSide("0.00000000000");

	expression193->SetRightHandSide("0.00000000000");

	expression194->SetRightHandSide("0.00000000000");

	expression195->SetRightHandSide("0.00000000000");

	expression196->SetRightHandSide("0.00000000000");

	expression197->SetRightHandSide("0.00000000000");

	expression198->SetRightHandSide("0.00000000000");

	expression199->SetRightHandSide("0.00000000000");

	expression200->SetRightHandSide("0.00000000000");

	expression203->SetRightHandSide("100.00000000000");

	// ----------------------------------------------
	//   Dialog Begin Point
	// ----------------------------------------------
	expression189->SetRightHandSide("11");

	expression189->SetRightHandSide("11");

	expression190->SetRightHandSide("0.00000000000");

	expression191->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point29);

	NXOpen::Expression *expression207;
	expression207 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=11", unit1);

	NXOpen::Scalar *scalar88;
	scalar88 = workPart->Scalars()->CreateScalarExpression(expression207, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression208;
	expression208 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=0.00000000000", unit1);

	NXOpen::Scalar *scalar89;
	scalar89 = workPart->Scalars()->CreateScalarExpression(expression208, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression209;
	expression209 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar90;
	scalar90 = workPart->Scalars()->CreateScalarExpression(expression209, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point30;
	point30 = workPart->Points()->CreatePoint(scalar88, scalar89, scalar90, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression190->SetRightHandSide("76.3");

	expression189->SetRightHandSide("11");

	expression190->SetRightHandSide("76.3");

	expression191->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point30);

	NXOpen::Expression *expression210;
	expression210 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=11", unit1);

	NXOpen::Scalar *scalar91;
	scalar91 = workPart->Scalars()->CreateScalarExpression(expression210, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression211;
	expression211 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=76.3", unit1);

	NXOpen::Scalar *scalar92;
	scalar92 = workPart->Scalars()->CreateScalarExpression(expression211, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression212;
	expression212 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar93;
	scalar93 = workPart->Scalars()->CreateScalarExpression(expression212, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point31;
	point31 = workPart->Points()->CreatePoint(scalar91, scalar92, scalar93, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression189->SetRightHandSide("11");

	expression190->SetRightHandSide("76.3");

	expression191->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point31);

	NXOpen::Expression *expression213;
	expression213 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=11", unit1);

	NXOpen::Scalar *scalar94;
	scalar94 = workPart->Scalars()->CreateScalarExpression(expression213, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression214;
	expression214 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=76.3", unit1);

	NXOpen::Scalar *scalar95;
	scalar95 = workPart->Scalars()->CreateScalarExpression(expression214, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression215;
	expression215 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar96;
	scalar96 = workPart->Scalars()->CreateScalarExpression(expression215, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point32;
	point32 = workPart->Points()->CreatePoint(scalar94, scalar95, scalar96, NXOpen::SmartObject::UpdateOptionWithinModeling);

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression189);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression190);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression191);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression192);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression193);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression194);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression195);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression196);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression197);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression198);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression199);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression200);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression201);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression202);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression203);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	workPart->Expressions()->Delete(expression188);

	NXOpen::Scalar *scalar97;
	scalar97 = workPart->Scalars()->CreateScalarExpression(expression213, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar98;
	scalar98 = workPart->Scalars()->CreateScalarExpression(expression214, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar99;
	scalar99 = workPart->Scalars()->CreateScalarExpression(expression215, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point33;
	point33 = workPart->Points()->CreatePoint(scalar97, scalar98, scalar99, NXOpen::SmartObject::UpdateOptionWithinModeling);

	point32->RemoveParameters();

	NXOpen::Point3d coordinates7(11.0, 76.299999999999997, 0.0);
	point32->SetCoordinates(coordinates7);

	theSession->ActiveSketch()->AddGeometry(point32, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->Update();

	workPart->Points()->DeletePoint(point33);

	workPart->Expressions()->Delete(expression187);


	NXOpen::Expression *expression216;
	expression216 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);


	NXOpen::Expression *expression217;
	expression217 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression218;
	expression218 = workPart->Expressions()->CreateSystemExpressionWithUnits("p14_x=0.00000000000", unit1);

	NXOpen::Expression *expression219;
	expression219 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_y=0.00000000000", unit1);

	NXOpen::Expression *expression220;
	expression220 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_z=0.00000000000", unit1);

	NXOpen::Expression *expression221;
	expression221 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_xdelta=0.00000000000", unit1);

	NXOpen::Expression *expression222;
	expression222 = workPart->Expressions()->CreateSystemExpressionWithUnits("p18_ydelta=0.00000000000", unit1);

	NXOpen::Expression *expression223;
	expression223 = workPart->Expressions()->CreateSystemExpressionWithUnits("p19_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression224;
	expression224 = workPart->Expressions()->CreateSystemExpressionWithUnits("p20_radius=0.00000000000", unit1);

	NXOpen::Expression *expression225;
	expression225 = workPart->Expressions()->CreateSystemExpressionWithUnits("p21_angle=0.00000000000", unit2);

	NXOpen::Expression *expression226;
	expression226 = workPart->Expressions()->CreateSystemExpressionWithUnits("p22_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression227;
	expression227 = workPart->Expressions()->CreateSystemExpressionWithUnits("p23_radius=0.00000000000", unit1);

	NXOpen::Expression *expression228;
	expression228 = workPart->Expressions()->CreateSystemExpressionWithUnits("p24_angle1=0.00000000000", unit2);

	NXOpen::Expression *expression229;
	expression229 = workPart->Expressions()->CreateSystemExpressionWithUnits("p25_angle2=0.00000000000", unit2);

	NXOpen::Expression *expression230;
	expression230 = workPart->Expressions()->CreateSystemExpressionWithUnits("p26_distance=0", unit1);

	NXOpen::Expression *expression231;
	expression231 = workPart->Expressions()->CreateSystemExpressionWithUnits("p27_arclen=0", unit1);

	NXOpen::Expression *expression232;
	expression232 = workPart->Expressions()->CreateSystemExpressionWithUnits("p28_percent=0", nullNXOpen_Unit);

	expression218->SetRightHandSide("11");

	expression219->SetRightHandSide("76.3");

	expression220->SetRightHandSide("0");

	expression221->SetRightHandSide("0");

	expression222->SetRightHandSide("0");

	expression223->SetRightHandSide("0");

	expression224->SetRightHandSide("0");

	expression225->SetRightHandSide("0");

	expression226->SetRightHandSide("0");

	expression227->SetRightHandSide("0");

	expression228->SetRightHandSide("0");

	expression229->SetRightHandSide("0");

	expression230->SetRightHandSide("0");

	expression232->SetRightHandSide("100");

	expression231->SetRightHandSide("0");

	NXOpen::Expression *expression233;
	expression233 = workPart->Expressions()->CreateSystemExpressionWithUnits("p29_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar100;
	scalar100 = workPart->Scalars()->CreateScalarExpression(expression233, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression234;
	expression234 = workPart->Expressions()->CreateSystemExpressionWithUnits("p30_y=0.00000000000", unit1);

	NXOpen::Scalar *scalar101;
	scalar101 = workPart->Scalars()->CreateScalarExpression(expression234, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression235;
	expression235 = workPart->Expressions()->CreateSystemExpressionWithUnits("p31_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar102;
	scalar102 = workPart->Scalars()->CreateScalarExpression(expression235, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point34;
	point34 = workPart->Points()->CreatePoint(scalar100, scalar101, scalar102, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression218->SetRightHandSide("0.00000000000");

	expression219->SetRightHandSide("0.00000000000");

	expression220->SetRightHandSide("0.00000000000");

	expression221->SetRightHandSide("0.00000000000");

	expression222->SetRightHandSide("0.00000000000");

	expression223->SetRightHandSide("0.00000000000");

	expression224->SetRightHandSide("0.00000000000");

	expression225->SetRightHandSide("0.00000000000");

	expression226->SetRightHandSide("0.00000000000");

	expression227->SetRightHandSide("0.00000000000");

	expression228->SetRightHandSide("0.00000000000");

	expression229->SetRightHandSide("0.00000000000");

	expression232->SetRightHandSide("100.00000000000");

	// ----------------------------------------------
	//   Dialog Begin Point
	// ----------------------------------------------
	expression218->SetRightHandSide("11");

	expression218->SetRightHandSide("11");

	expression219->SetRightHandSide("0.00000000000");

	expression220->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point34);

	NXOpen::Expression *expression236;
	expression236 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=11", unit1);

	NXOpen::Scalar *scalar103;
	scalar103 = workPart->Scalars()->CreateScalarExpression(expression236, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression237;
	expression237 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=0.00000000000", unit1);

	NXOpen::Scalar *scalar104;
	scalar104 = workPart->Scalars()->CreateScalarExpression(expression237, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression238;
	expression238 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar105;
	scalar105 = workPart->Scalars()->CreateScalarExpression(expression238, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point35;
	point35 = workPart->Points()->CreatePoint(scalar103, scalar104, scalar105, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression219->SetRightHandSide("19.5");

	expression218->SetRightHandSide("11");

	expression219->SetRightHandSide("19.5");

	expression220->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point35);

	NXOpen::Expression *expression239;
	expression239 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=11", unit1);

	NXOpen::Scalar *scalar106;
	scalar106 = workPart->Scalars()->CreateScalarExpression(expression239, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression240;
	expression240 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=19.5", unit1);

	NXOpen::Scalar *scalar107;
	scalar107 = workPart->Scalars()->CreateScalarExpression(expression240, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression241;
	expression241 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar108;
	scalar108 = workPart->Scalars()->CreateScalarExpression(expression241, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point36;
	point36 = workPart->Points()->CreatePoint(scalar106, scalar107, scalar108, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression218->SetRightHandSide("11");

	expression219->SetRightHandSide("19.5");

	expression220->SetRightHandSide("0.00000000000");

	workPart->Points()->DeletePoint(point36);

	NXOpen::Expression *expression242;
	expression242 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_x=11", unit1);

	NXOpen::Scalar *scalar109;
	scalar109 = workPart->Scalars()->CreateScalarExpression(expression242, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression243;
	expression243 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_y=19.5", unit1);

	NXOpen::Scalar *scalar110;
	scalar110 = workPart->Scalars()->CreateScalarExpression(expression243, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression244;
	expression244 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar111;
	scalar111 = workPart->Scalars()->CreateScalarExpression(expression244, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point37;
	point37 = workPart->Points()->CreatePoint(scalar109, scalar110, scalar111, NXOpen::SmartObject::UpdateOptionWithinModeling);

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression218);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression219);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression220);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression221);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression222);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression223);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression224);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression225);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression226);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression227);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression228);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression229);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression230);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression231);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression232);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	workPart->Expressions()->Delete(expression217);


	NXOpen::Scalar *scalar112;
	scalar112 = workPart->Scalars()->CreateScalarExpression(expression242, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar113;
	scalar113 = workPart->Scalars()->CreateScalarExpression(expression243, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar114;
	scalar114 = workPart->Scalars()->CreateScalarExpression(expression244, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point38;
	point38 = workPart->Points()->CreatePoint(scalar112, scalar113, scalar114, NXOpen::SmartObject::UpdateOptionWithinModeling);

	point37->RemoveParameters();

	NXOpen::Point3d coordinates8(11.0, 19.5, 0.0);
	point37->SetCoordinates(coordinates8);

	theSession->ActiveSketch()->AddGeometry(point37, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->Update();


	workPart->Points()->DeletePoint(point38);

	workPart->Expressions()->Delete(expression216);

	NXOpen::Expression *expression245;
	expression245 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);


	workPart->Expressions()->Delete(expression245);

	// ----------------------------------------------
	//   插入(S)->草图曲线(S)->直线(L)...
	// ----------------------------------------------

	NXOpen::Point3d startPoint1(0.0, 19.5, 0.0);
	NXOpen::Point3d endPoint1(2.8702264029062036e-14, 76.299999999999997, 0.0);
	NXOpen::Line *line1;
	line1 = workPart->Curves()->CreateLine(startPoint1, endPoint1);

	theSession->ActiveSketch()->AddGeometry(line1, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_1;
	geom1_1.Geometry = line1;
	geom1_1.PointType = NXOpen::Sketch::ConstraintPointTypeStartVertex;
	geom1_1.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_1;
	geom2_1.Geometry = point3;
	geom2_1.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_1.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint1;
	sketchGeometricConstraint1 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_1, geom2_1);

	NXOpen::Sketch::ConstraintGeometry geom1;
	geom1.Geometry = line1;
	geom1.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom1.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint2;
	sketchGeometricConstraint2 = theSession->ActiveSketch()->CreateVerticalConstraint(geom1);

	NXOpen::Sketch::ConstraintGeometry geom1_2;
	geom1_2.Geometry = line1;
	geom1_2.PointType = NXOpen::Sketch::ConstraintPointTypeEndVertex;
	geom1_2.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_2;
	geom2_2.Geometry = point7;
	geom2_2.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_2.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint3;
	sketchGeometricConstraint3 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_2, geom2_2);

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(false);

	theSession->ActiveSketch()->Update();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(true);

	// ----------------------------------------------
	//   Dialog Begin Line
	// ----------------------------------------------

	NXOpen::Point3d startPoint2(0.0, 76.299999999999997, 0.0);
	NXOpen::Point3d endPoint2(-2.0, 76.299999999999997, 0.0);
	NXOpen::Line *line2;
	line2 = workPart->Curves()->CreateLine(startPoint2, endPoint2);

	theSession->ActiveSketch()->AddGeometry(line2, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_3;
	geom1_3.Geometry = line2;
	geom1_3.PointType = NXOpen::Sketch::ConstraintPointTypeStartVertex;
	geom1_3.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_3;
	geom2_3.Geometry = point7;
	geom2_3.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_3.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint4;
	sketchGeometricConstraint4 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_3, geom2_3);

	NXOpen::Sketch::ConstraintGeometry geom2;
	geom2.Geometry = line2;
	geom2.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint5;
	sketchGeometricConstraint5 = theSession->ActiveSketch()->CreateHorizontalConstraint(geom2);

	NXOpen::Sketch::ConstraintGeometry geom1_4;
	geom1_4.Geometry = line2;
	geom1_4.PointType = NXOpen::Sketch::ConstraintPointTypeEndVertex;
	geom1_4.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_4;
	geom2_4.Geometry = point12;
	geom2_4.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_4.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint6;
	sketchGeometricConstraint6 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_4, geom2_4);

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(false);

	theSession->ActiveSketch()->Update();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(true);

	// ----------------------------------------------
	//   Dialog Begin Line
	// ----------------------------------------------

	NXOpen::Point3d startPoint3(-2.0, 76.299999999999997, 0.0);
	NXOpen::Point3d endPoint3(-1.9999999999999978, 80.5, 0.0);
	NXOpen::Line *line3;
	line3 = workPart->Curves()->CreateLine(startPoint3, endPoint3);

	theSession->ActiveSketch()->AddGeometry(line3, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_5;
	geom1_5.Geometry = line3;
	geom1_5.PointType = NXOpen::Sketch::ConstraintPointTypeStartVertex;
	geom1_5.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_5;
	geom2_5.Geometry = point12;
	geom2_5.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_5.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint7;
	sketchGeometricConstraint7 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_5, geom2_5);

	NXOpen::Sketch::ConstraintGeometry geom3;
	geom3.Geometry = line3;
	geom3.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom3.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint8;
	sketchGeometricConstraint8 = theSession->ActiveSketch()->CreateVerticalConstraint(geom3);

	NXOpen::Sketch::ConstraintGeometry geom1_6;
	geom1_6.Geometry = line3;
	geom1_6.PointType = NXOpen::Sketch::ConstraintPointTypeEndVertex;
	geom1_6.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_6;
	geom2_6.Geometry = point17;
	geom2_6.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_6.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint9;
	sketchGeometricConstraint9 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_6, geom2_6);

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(false);

	theSession->ActiveSketch()->Update();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(true);

	// ----------------------------------------------
	//   Dialog Begin Line
	// ----------------------------------------------

	NXOpen::Point3d startPoint4(-1.9999999999999978, 80.5, 0.0);
	NXOpen::Point3d endPoint4(12.0, 80.5, 0.0);
	NXOpen::Line *line4;
	line4 = workPart->Curves()->CreateLine(startPoint4, endPoint4);

	theSession->ActiveSketch()->AddGeometry(line4, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_7;
	geom1_7.Geometry = line4;
	geom1_7.PointType = NXOpen::Sketch::ConstraintPointTypeStartVertex;
	geom1_7.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_7;
	geom2_7.Geometry = line3;
	geom2_7.PointType = NXOpen::Sketch::ConstraintPointTypeEndVertex;
	geom2_7.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint10;
	sketchGeometricConstraint10 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_7, geom2_7);

	NXOpen::Sketch::ConstraintGeometry geom4;
	geom4.Geometry = line4;
	geom4.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom4.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint11;
	sketchGeometricConstraint11 = theSession->ActiveSketch()->CreateHorizontalConstraint(geom4);

	NXOpen::Sketch::ConstraintGeometry geom1_8;
	geom1_8.Geometry = line4;
	geom1_8.PointType = NXOpen::Sketch::ConstraintPointTypeEndVertex;
	geom1_8.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_8;
	geom2_8.Geometry = point22;
	geom2_8.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_8.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint12;
	sketchGeometricConstraint12 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_8, geom2_8);

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(false);

	theSession->ActiveSketch()->Update();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(true);

	// ----------------------------------------------
	//   Dialog Begin Line
	// ----------------------------------------------

	NXOpen::Point3d startPoint5(12.0, 80.5, 0.0);
	NXOpen::Point3d endPoint5(11.999999999999991, 76.299999999999997, 0.0);
	NXOpen::Line *line5;
	line5 = workPart->Curves()->CreateLine(startPoint5, endPoint5);

	theSession->ActiveSketch()->AddGeometry(line5, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_9;
	geom1_9.Geometry = line5;
	geom1_9.PointType = NXOpen::Sketch::ConstraintPointTypeStartVertex;
	geom1_9.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_9;
	geom2_9.Geometry = point22;
	geom2_9.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_9.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint13;
	sketchGeometricConstraint13 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_9, geom2_9);

	NXOpen::Sketch::ConstraintGeometry geom5;
	geom5.Geometry = line5;
	geom5.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom5.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint14;
	sketchGeometricConstraint14 = theSession->ActiveSketch()->CreateVerticalConstraint(geom5);

	NXOpen::Sketch::ConstraintGeometry geom1_10;
	geom1_10.Geometry = line5;
	geom1_10.PointType = NXOpen::Sketch::ConstraintPointTypeEndVertex;
	geom1_10.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_10;
	geom2_10.Geometry = point27;
	geom2_10.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_10.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint15;
	sketchGeometricConstraint15 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_10, geom2_10);

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(false);

	theSession->ActiveSketch()->Update();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(true);

	// ----------------------------------------------
	//   Dialog Begin Line
	// ----------------------------------------------

	NXOpen::Point3d startPoint6(12.0, 76.299999999999997, 0.0);
	NXOpen::Point3d endPoint6(11.0, 76.299999999999997, 0.0);
	NXOpen::Line *line6;
	line6 = workPart->Curves()->CreateLine(startPoint6, endPoint6);

	theSession->ActiveSketch()->AddGeometry(line6, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_11;
	geom1_11.Geometry = line6;
	geom1_11.PointType = NXOpen::Sketch::ConstraintPointTypeStartVertex;
	geom1_11.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_11;
	geom2_11.Geometry = point27;
	geom2_11.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_11.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint16;
	sketchGeometricConstraint16 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_11, geom2_11);

	NXOpen::Sketch::ConstraintGeometry geom6;
	geom6.Geometry = line6;
	geom6.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom6.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint17;
	sketchGeometricConstraint17 = theSession->ActiveSketch()->CreateHorizontalConstraint(geom6);

	NXOpen::Sketch::ConstraintGeometry geom1_12;
	geom1_12.Geometry = line6;
	geom1_12.PointType = NXOpen::Sketch::ConstraintPointTypeEndVertex;
	geom1_12.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_12;
	geom2_12.Geometry = point32;
	geom2_12.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_12.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint18;
	sketchGeometricConstraint18 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_12, geom2_12);

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(false);

	theSession->ActiveSketch()->Update();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(true);

	// ----------------------------------------------
	//   Dialog Begin Line
	// ----------------------------------------------

	NXOpen::Point3d startPoint7(11.0, 76.299999999999997, 0.0);
	NXOpen::Point3d endPoint7(10.999999999999888, 19.5, 0.0);
	NXOpen::Line *line7;
	line7 = workPart->Curves()->CreateLine(startPoint7, endPoint7);

	theSession->ActiveSketch()->AddGeometry(line7, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_13;
	geom1_13.Geometry = line7;
	geom1_13.PointType = NXOpen::Sketch::ConstraintPointTypeStartVertex;
	geom1_13.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_13;
	geom2_13.Geometry = point32;
	geom2_13.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_13.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint19;
	sketchGeometricConstraint19 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_13, geom2_13);

	NXOpen::Sketch::ConstraintGeometry geom7;
	geom7.Geometry = line7;
	geom7.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom7.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint20;
	sketchGeometricConstraint20 = theSession->ActiveSketch()->CreateVerticalConstraint(geom7);

	NXOpen::Sketch::ConstraintGeometry geom1_14;
	geom1_14.Geometry = line7;
	geom1_14.PointType = NXOpen::Sketch::ConstraintPointTypeEndVertex;
	geom1_14.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_14;
	geom2_14.Geometry = point37;
	geom2_14.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_14.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint21;
	sketchGeometricConstraint21 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_14, geom2_14);

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(false);

	theSession->ActiveSketch()->Update();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(true);

	// ----------------------------------------------
	//   Dialog Begin Line
	// ----------------------------------------------

	NXOpen::Point3d startPoint8(11.0, 19.5, 0.0);
	NXOpen::Point3d endPoint8(0.0, 19.500000000000011, 0.0);
	NXOpen::Line *line8;
	line8 = workPart->Curves()->CreateLine(startPoint8, endPoint8);

	theSession->ActiveSketch()->AddGeometry(line8, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_15;
	geom1_15.Geometry = line8;
	geom1_15.PointType = NXOpen::Sketch::ConstraintPointTypeStartVertex;
	geom1_15.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_15;
	geom2_15.Geometry = point37;
	geom2_15.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_15.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint22;
	sketchGeometricConstraint22 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_15, geom2_15);

	NXOpen::Sketch::ConstraintGeometry geom8;
	geom8.Geometry = line8;
	geom8.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom8.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint23;
	sketchGeometricConstraint23 = theSession->ActiveSketch()->CreateHorizontalConstraint(geom8);

	NXOpen::Sketch::ConstraintGeometry geom1_16;
	geom1_16.Geometry = line8;
	geom1_16.PointType = NXOpen::Sketch::ConstraintPointTypeEndVertex;
	geom1_16.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_16;
	geom2_16.Geometry = point3;
	geom2_16.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_16.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint24;
	sketchGeometricConstraint24 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_16, geom2_16);

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(false);

	theSession->ActiveSketch()->Update();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(true);

	// ----------------------------------------------
	//   Dialog Begin Line
	// ----------------------------------------------
	// ----------------------------------------------
	//   Menu: 插入(S)->草图曲线(S)->倒斜角(H)...
	// ----------------------------------------------

	NXOpen::SketchChamferBuilder *sketchChamferBuilder1;
	sketchChamferBuilder1 = workPart->Sketches()->CreateSketchChamferBuilder();

	sketchChamferBuilder1->Distance1()->SetRightHandSide("1");

	sketchChamferBuilder1->Distance2()->SetRightHandSide("0.5");

	sketchChamferBuilder1->Angle()->SetRightHandSide("44");



	NXOpen::Point3d point39(-0.77720068989039248, 76.299999999999997, 0.0);
	bool added1;
	added1 = sketchChamferBuilder1->CurvesToChamfer()->Add(line2, workPart->ModelingViews()->WorkView(), point39);

	NXOpen::Point3d point40(2.7533531010703882e-14, 74.82068577624085, 0.0);
	bool added2;
	added2 = sketchChamferBuilder1->CurvesToChamfer()->Add(line1, workPart->ModelingViews()->WorkView(), point40);

	NXOpen::Expression *expression246;
	expression246 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	sketchChamferBuilder1->Distance1()->SetRightHandSide("2");

	sketchChamferBuilder1->SetCreateDistance1Dimension(true);

	NXOpen::Point3d coordinates9(-0.29774254312874238, 75.300143923002523, 0.0);
	NXOpen::Point *point41;
	point41 = workPart->Points()->CreatePoint(coordinates9);

	sketchChamferBuilder1->SetHelpPoint(point41);

	sketchChamferBuilder1->Distance2()->SetRightHandSide("1.3");

	sketchChamferBuilder1->Angle()->SetRightHandSide("45");

	NXOpen::NXObject *nXObject2;
	nXObject2 = sketchChamferBuilder1->Commit();

	NXOpen::Expression *expression247(sketchChamferBuilder1->Distance1());
	sketchChamferBuilder1->Destroy();

	workPart->Expressions()->Delete(expression246);

	NXOpen::SketchChamferBuilder *sketchChamferBuilder2;
	sketchChamferBuilder2 = workPart->Sketches()->CreateSketchChamferBuilder();

	sketchChamferBuilder2->Distance1()->SetRightHandSide("2");

	sketchChamferBuilder2->Distance2()->SetRightHandSide("1.3");

	sketchChamferBuilder2->Angle()->SetRightHandSide("45");

	NXOpen::Point3d point42(11.488936898095202, 76.299999999999997, 0.0);
	bool added3;
	added3 = sketchChamferBuilder2->CurvesToChamfer()->Add(line6, workPart->ModelingViews()->WorkView(), point42);

	NXOpen::Point3d point43(10.999999999999998, 75.300143923002523, 0.0);
	bool added4;
	added4 = sketchChamferBuilder2->CurvesToChamfer()->Add(line7, workPart->ModelingViews()->WorkView(), point43);

	NXOpen::Expression *expression248;
	expression248 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	sketchChamferBuilder2->Distance1()->SetRightHandSide("1");

	sketchChamferBuilder2->SetCreateDistance1Dimension(true);

	NXOpen::Point3d coordinates10(11.409027206968261, 75.939421452018053, 0.0);
	NXOpen::Point *point44;
	point44 = workPart->Points()->CreatePoint(coordinates10);

	sketchChamferBuilder2->SetHelpPoint(point44);

	sketchChamferBuilder2->Distance2()->SetRightHandSide("0.8");

	sketchChamferBuilder2->Angle()->SetRightHandSide("44");


	NXOpen::NXObject *nXObject3;
	nXObject3 = sketchChamferBuilder2->Commit();


	NXOpen::Expression *expression249(sketchChamferBuilder2->Distance1());
	sketchChamferBuilder2->Destroy();

	workPart->Expressions()->Delete(expression248);

	NXOpen::SketchChamferBuilder *sketchChamferBuilder3;
	sketchChamferBuilder3 = workPart->Sketches()->CreateSketchChamferBuilder();

	sketchChamferBuilder3->Distance1()->SetRightHandSide("1");

	sketchChamferBuilder3->Distance2()->SetRightHandSide("0.8");

	sketchChamferBuilder3->Angle()->SetRightHandSide("44");

	sketchChamferBuilder3->Destroy();



	NXOpen::Point3d origin2(43.948278795821942, 33.816137848040775, 0.0);
	workPart->ModelingViews()->WorkView()->SetOrigin(origin2);

	NXOpen::Point3d origin3(43.948278795821942, 33.816137848040775, 0.0);
	workPart->ModelingViews()->WorkView()->SetOrigin(origin3);

	// ----------------------------------------------
	//   插入(S)->设计特征(E)->旋转(R)...
	// ----------------------------------------------

	NXOpen::Features::Feature *nullNXOpen_Features_Feature(NULL);
	NXOpen::Features::RevolveBuilder *revolveBuilder1;
	revolveBuilder1 = workPart->Features()->CreateRevolveBuilder(nullNXOpen_Features_Feature);

	revolveBuilder1->Limits()->StartExtend()->Value()->SetRightHandSide("0");

	revolveBuilder1->Limits()->EndExtend()->Value()->SetRightHandSide("360");

	revolveBuilder1->Limits()->StartExtend()->Value()->SetRightHandSide("0");

	revolveBuilder1->Limits()->EndExtend()->Value()->SetRightHandSide("360");

	revolveBuilder1->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);

	std::vector<NXOpen::Body *> targetBodies1(1);
	NXOpen::Body *nullNXOpen_Body(NULL);
	targetBodies1[0] = nullNXOpen_Body;
	revolveBuilder1->BooleanOperation()->SetTargetBodies(targetBodies1);

	revolveBuilder1->Offset()->StartOffset()->SetRightHandSide("0");

	revolveBuilder1->Offset()->EndOffset()->SetRightHandSide("5");

	revolveBuilder1->SetTolerance(0.001);

	NXOpen::Section *section1;
	section1 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);

	revolveBuilder1->SetSection(section1);

	NXOpen::GeometricUtilities::SmartVolumeProfileBuilder *smartVolumeProfileBuilder1;
	smartVolumeProfileBuilder1 = revolveBuilder1->SmartVolumeProfile();

	smartVolumeProfileBuilder1->SetOpenProfileSmartVolumeOption(false);

	smartVolumeProfileBuilder1->SetCloseProfileRule(NXOpen::GeometricUtilities::SmartVolumeProfileBuilder::CloseProfileRuleTypeFci);

	section1->SetDistanceTolerance(0.001);

	section1->SetChainingTolerance(0.00095);

	std::vector<double> starthelperpoint1(3);
	const double starthelperpoint1_initial_values[] = {
		0.0, 0.0, 0.0
	};
	starthelperpoint1.assign(starthelperpoint1_initial_values, starthelperpoint1_initial_values + 3);
	revolveBuilder1->SetStartLimitHelperPoint(starthelperpoint1);

	std::vector<double> endhelperpoint1(3);
	const double endhelperpoint1_initial_values[] = {
		0.0, 0.0, 0.0
	};
	endhelperpoint1.assign(endhelperpoint1_initial_values, endhelperpoint1_initial_values + 3);
	revolveBuilder1->SetEndLimitHelperPoint(endhelperpoint1);

	section1->SetAllowedEntityTypes(NXOpen::Section::AllowTypesOnlyCurves);

	std::vector<NXOpen::ICurve *> curves1(10);
	curves1[0] = line2;
	curves1[1] = line8;
	NXOpen::Line *line9(dynamic_cast<NXOpen::Line *>(nXObject2));
	curves1[2] = line9;
	curves1[3] = line4;
	NXOpen::Line *line10(dynamic_cast<NXOpen::Line *>(nXObject3));
	curves1[4] = line10;
	curves1[5] = line5;
	curves1[6] = line3;
	curves1[7] = line7;
	curves1[8] = line6;
	curves1[9] = line1;
	NXOpen::Point3d seedPoint1(7.6666666666666652, 76.700000000000003, 0.0);
	NXOpen::RegionBoundaryRule *regionBoundaryRule1;
	regionBoundaryRule1 = workPart->ScRuleFactory()->CreateRuleRegionBoundary(theSession->ActiveSketch(), curves1, seedPoint1, 0.001);

	section1->AllowSelfIntersection(false);

	std::vector<NXOpen::SelectionIntentRule *> rules1(1);
	rules1[0] = regionBoundaryRule1;
	NXOpen::NXObject *nullNXOpen_NXObject(NULL);
	NXOpen::Point3d helpPoint1(0.0, 0.0, 0.0);
	section1->AddToSection(rules1, nullNXOpen_NXObject, nullNXOpen_NXObject, nullNXOpen_NXObject, helpPoint1, NXOpen::Section::ModeCreate, false);

	revolveBuilder1->SetSection(section1);

	NXOpen::Expression *expression250;
	expression250 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	revolveBuilder1->SetSection(section1);

	NXOpen::Expression *expression251;
	expression251 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Point3d origin4(0.0, 0.0, 0.0);
	NXOpen::Vector3d vector1(1.0, 0.0, 0.0);
	NXOpen::Direction *direction1;
	direction1 = workPart->Directions()->CreateDirection(origin4, vector1, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *nullNXOpen_Point(NULL);
	NXOpen::Axis *axis1;
	axis1 = workPart->Axes()->CreateAxis(nullNXOpen_Point, direction1, NXOpen::SmartObject::UpdateOptionWithinModeling);

	revolveBuilder1->SetAxis(axis1);

	NXOpen::Expression *expression252;
	expression252 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);



	NXOpen::Features::DatumCsys *datumCsys1(dynamic_cast<NXOpen::Features::DatumCsys *>(workPart->Features()->FindObject("DATUM_CSYS(0)")));
	NXOpen::Point *point45(dynamic_cast<NXOpen::Point *>(datumCsys1->FindObject("POINT 1")));
	NXOpen::Xform *nullNXOpen_Xform(NULL);
	NXOpen::Point *point46;
	point46 = workPart->Points()->CreatePoint(point45, nullNXOpen_Xform, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::NXObject *nXObject4;
	NXOpen::Xform *xform1;
	xform1 = workPart->Xforms()->CreateExtractXform(point45, NXOpen::SmartObject::UpdateOptionWithinModeling, false, &nXObject4);

	NXOpen::Point *point47(dynamic_cast<NXOpen::Point *>(nXObject4));
	NXOpen::Point *point48;
	point48 = workPart->Points()->CreatePoint(point47, nullNXOpen_Xform, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point49;
	point49 = axis1->Point();

	axis1->SetPoint(point48);

	revolveBuilder1->SetAxis(axis1);

	revolveBuilder1->SetParentFeatureInternal(false);


	NXOpen::Features::Feature *feature2;
	feature2 = revolveBuilder1->CommitFeature();


	NXOpen::Expression *expression253(revolveBuilder1->Limits()->StartExtend()->Value());
	NXOpen::Expression *expression254(revolveBuilder1->Limits()->EndExtend()->Value());
	revolveBuilder1->Destroy();

	workPart->Expressions()->Delete(expression250);

	workPart->Expressions()->Delete(expression252);

	workPart->Expressions()->Delete(expression251);

	// ----------------------------------------------
	//  插入(S)->曲线(C)->规律曲线(W)...
	// ----------------------------------------------

	NXOpen::Features::LawCurve *nullNXOpen_Features_LawCurve(NULL);
	NXOpen::Features::LawCurveBuilder *lawCurveBuilder1;
	lawCurveBuilder1 = workPart->Features()->CreateLawCurveBuilder(nullNXOpen_Features_LawCurve);

	NXOpen::Expression *expression255;
	expression255 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression256;
	expression256 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression257;
	expression257 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	lawCurveBuilder1->XLaw()->SetLawType(NXOpen::GeometricUtilities::LawBuilder::TypeByEquation);

	lawCurveBuilder1->XLaw()->Value()->SetRightHandSide("0");

	lawCurveBuilder1->XLaw()->StartValue()->SetRightHandSide("0");

	lawCurveBuilder1->XLaw()->EndValue()->SetRightHandSide("0");

	lawCurveBuilder1->XLaw()->SetFunction("zt");

	lawCurveBuilder1->YLaw()->SetLawType(NXOpen::GeometricUtilities::LawBuilder::TypeByEquation);

	lawCurveBuilder1->YLaw()->Value()->SetRightHandSide("0");

	lawCurveBuilder1->YLaw()->StartValue()->SetRightHandSide("0");

	lawCurveBuilder1->YLaw()->EndValue()->SetRightHandSide("0");

	lawCurveBuilder1->ZLaw()->SetLawType(NXOpen::GeometricUtilities::LawBuilder::TypeByEquation);

	lawCurveBuilder1->ZLaw()->Value()->SetRightHandSide("0");

	lawCurveBuilder1->ZLaw()->StartValue()->SetRightHandSide("0");

	lawCurveBuilder1->ZLaw()->EndValue()->SetRightHandSide("0");

	lawCurveBuilder1->ZLaw()->SetFunction("xt");

	lawCurveBuilder1->XLaw()->AlongSpineData()->Spine()->SetDistanceTolerance(0.001);

	lawCurveBuilder1->XLaw()->AlongSpineData()->Spine()->SetChainingTolerance(0.00095);

	lawCurveBuilder1->XLaw()->LawCurve()->SetDistanceTolerance(0.001);

	lawCurveBuilder1->XLaw()->LawCurve()->SetChainingTolerance(0.00095);

	lawCurveBuilder1->YLaw()->AlongSpineData()->Spine()->SetDistanceTolerance(0.001);

	lawCurveBuilder1->YLaw()->AlongSpineData()->Spine()->SetChainingTolerance(0.00095);

	lawCurveBuilder1->YLaw()->LawCurve()->SetDistanceTolerance(0.001);

	lawCurveBuilder1->YLaw()->LawCurve()->SetChainingTolerance(0.00095);

	lawCurveBuilder1->ZLaw()->AlongSpineData()->Spine()->SetDistanceTolerance(0.001);

	lawCurveBuilder1->ZLaw()->AlongSpineData()->Spine()->SetChainingTolerance(0.00095);

	lawCurveBuilder1->ZLaw()->LawCurve()->SetDistanceTolerance(0.001);

	lawCurveBuilder1->ZLaw()->LawCurve()->SetChainingTolerance(0.00095);


	NXOpen::NXObject *nXObject5;
	nXObject5 = lawCurveBuilder1->Commit();

	lawCurveBuilder1->Destroy();

	workPart->Expressions()->Delete(expression255);

	workPart->Expressions()->Delete(expression256);

	workPart->Expressions()->Delete(expression257);

	// ----------------------------------------------
	//    插入(S)->设计特征(E)->拉伸(X)...
	// ----------------------------------------------

	NXOpen::Features::ExtrudeBuilder *extrudeBuilder1;
	extrudeBuilder1 = workPart->Features()->CreateExtrudeBuilder(nullNXOpen_Features_Feature);

	NXOpen::Section *section2;
	section2 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);

	extrudeBuilder1->SetSection(section2);

	extrudeBuilder1->AllowSelfIntersectingSection(true);

	NXOpen::Expression *expression258;
	expression258 = workPart->Expressions()->CreateSystemExpressionWithUnits("2.00", unit2);

	extrudeBuilder1->SetDistanceTolerance(0.001);

	extrudeBuilder1->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);

	std::vector<NXOpen::Body *> targetBodies2(1);
	targetBodies2[0] = nullNXOpen_Body;
	extrudeBuilder1->BooleanOperation()->SetTargetBodies(targetBodies2);

	extrudeBuilder1->Limits()->StartExtend()->Value()->SetRightHandSide("-34");

	extrudeBuilder1->Limits()->EndExtend()->Value()->SetRightHandSide("25");

	extrudeBuilder1->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeIntersect);

	std::vector<NXOpen::Body *> targetBodies3(1);
	NXOpen::Body *body1(dynamic_cast<NXOpen::Body *>(workPart->Bodies()->FindObject("REVOLVED(2)")));
	targetBodies3[0] = body1;
	extrudeBuilder1->BooleanOperation()->SetTargetBodies(targetBodies3);

	extrudeBuilder1->Draft()->FrontDraftAngle()->SetRightHandSide("2");

	extrudeBuilder1->Draft()->BackDraftAngle()->SetRightHandSide("2");

	extrudeBuilder1->Offset()->StartOffset()->SetRightHandSide("0");

	extrudeBuilder1->Offset()->EndOffset()->SetRightHandSide("5");

	NXOpen::GeometricUtilities::SmartVolumeProfileBuilder *smartVolumeProfileBuilder2;
	smartVolumeProfileBuilder2 = extrudeBuilder1->SmartVolumeProfile();

	smartVolumeProfileBuilder2->SetOpenProfileSmartVolumeOption(false);

	smartVolumeProfileBuilder2->SetCloseProfileRule(NXOpen::GeometricUtilities::SmartVolumeProfileBuilder::CloseProfileRuleTypeFci);

	section2->SetDistanceTolerance(0.001);

	section2->SetChainingTolerance(0.00095);

	section2->SetAllowedEntityTypes(NXOpen::Section::AllowTypesOnlyCurves);

	std::vector<NXOpen::Features::Feature *> features1(1);
	NXOpen::Features::LawCurve *lawCurve1(dynamic_cast<NXOpen::Features::LawCurve *>(nXObject5));
	features1[0] = lawCurve1;
	NXOpen::CurveFeatureRule *curveFeatureRule1;
	curveFeatureRule1 = workPart->ScRuleFactory()->CreateRuleCurveFeature(features1);

	section2->AllowSelfIntersection(true);

	std::vector<NXOpen::SelectionIntentRule *> rules2(1);
	rules2[0] = curveFeatureRule1;
	NXOpen::Point3d helpPoint2(0.0, 0.0, 0.0);
	section2->AddToSection(rules2, nullNXOpen_NXObject, nullNXOpen_NXObject, nullNXOpen_NXObject, helpPoint2, NXOpen::Section::ModeCreate, false);

	NXOpen::Point3d origin5(0.0, -1.4772378572539916e-05, -0.0001206284823401423);
	NXOpen::Vector3d vector2(1.0, 0.0, 0.0);
	NXOpen::Direction *direction2;
	direction2 = workPart->Directions()->CreateDirection(origin5, vector2, NXOpen::SmartObject::UpdateOptionWithinModeling);

	extrudeBuilder1->SetDirection(direction2);

	NXOpen::Expression *expression259;
	expression259 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression260;
	expression260 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);


	extrudeBuilder1->SetParentFeatureInternal(false);

	NXOpen::Features::Feature *feature3;
	feature3 = extrudeBuilder1->CommitFeature();

	NXOpen::Expression *expression261(extrudeBuilder1->Limits()->StartExtend()->Value());
	NXOpen::Expression *expression262(extrudeBuilder1->Limits()->EndExtend()->Value());
	extrudeBuilder1->Destroy();

	workPart->Expressions()->Delete(expression258);

	workPart->Expressions()->Delete(expression260);

	workPart->Expressions()->Delete(expression259);

	// ----------------------------------------------
	//   插入(S)->草图(H)...
	// ----------------------------------------------

	NXOpen::SketchInPlaceBuilder *sketchInPlaceBuilder2;
	sketchInPlaceBuilder2 = workPart->Sketches()->CreateSketchInPlaceBuilder2(nullNXOpen_Sketch);

	NXOpen::Point3d origin6(0.0, 0.0, 0.0);
	NXOpen::Vector3d normal2(0.0, 0.0, 1.0);
	NXOpen::Plane *plane2;
	plane2 = workPart->Planes()->CreatePlane(origin6, normal2, NXOpen::SmartObject::UpdateOptionWithinModeling);

	sketchInPlaceBuilder2->SetPlaneReference(plane2);

	NXOpen::Expression *expression263;
	expression263 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression264;
	expression264 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::SketchAlongPathBuilder *sketchAlongPathBuilder2;
	sketchAlongPathBuilder2 = workPart->Sketches()->CreateSketchAlongPathBuilder(nullNXOpen_Sketch);

	sketchAlongPathBuilder2->PlaneLocation()->Expression()->SetRightHandSide("0");

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

	NXOpen::NXObject *nXObject6;
	nXObject6 = sketchInPlaceBuilder2->Commit();

	NXOpen::Sketch *sketch2(dynamic_cast<NXOpen::Sketch *>(nXObject6));
	NXOpen::Features::Feature *feature4;
	feature4 = sketch2->Feature();

	sketch2->Activate(NXOpen::Sketch::ViewReorientTrue);

	sketchInPlaceBuilder2->Destroy();

	sketchAlongPathBuilder2->Destroy();

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression264);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression263);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	plane2->DestroyPlane();



	// ----------------------------------------------
	//    文件(F)->完成草图(K)
	// ----------------------------------------------
	NXOpen::Sketch *sketch3;
	sketch3 = theSession->ActiveSketch();


	theSession->ActiveSketch()->Deactivate(NXOpen::Sketch::ViewReorientTrue, NXOpen::Sketch::UpdateLevelModel);

	// ----------------------------------------------
	//    插入(S)->草图(H)...
	// ----------------------------------------------
	
	NXOpen::SketchInPlaceBuilder *sketchInPlaceBuilder3;
	sketchInPlaceBuilder3 = workPart->Sketches()->CreateSketchInPlaceBuilder2(nullNXOpen_Sketch);

	NXOpen::Point3d origin7(0.0, 0.0, 0.0);
	NXOpen::Vector3d normal3(0.0, 0.0, 1.0);
	NXOpen::Plane *plane3;
	plane3 = workPart->Planes()->CreatePlane(origin7, normal3, NXOpen::SmartObject::UpdateOptionWithinModeling);

	sketchInPlaceBuilder3->SetPlaneReference(plane3);

	NXOpen::Expression *expression265;
	expression265 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression266;
	expression266 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::SketchAlongPathBuilder *sketchAlongPathBuilder3;
	sketchAlongPathBuilder3 = workPart->Sketches()->CreateSketchAlongPathBuilder(nullNXOpen_Sketch);

	sketchAlongPathBuilder3->PlaneLocation()->Expression()->SetRightHandSide("0");

	NXOpen::DatumAxis *datumAxis1(dynamic_cast<NXOpen::DatumAxis *>(workPart->Datums()->FindObject("DATUM_CSYS(0) Y axis")));
	NXOpen::Direction *direction3;
	direction3 = workPart->Directions()->CreateDirection(datumAxis1, NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::DatumPlane *datumPlane1(dynamic_cast<NXOpen::DatumPlane *>(workPart->Datums()->FindObject("DATUM_CSYS(0) XZ plane")));
	NXOpen::Xform *xform2;
	xform2 = workPart->Xforms()->CreateXformByPlaneXDirPoint(datumPlane1, direction3, point47, NXOpen::SmartObject::UpdateOptionWithinModeling, 0.625, false, false);

	NXOpen::CartesianCoordinateSystem *cartesianCoordinateSystem1;
	cartesianCoordinateSystem1 = workPart->CoordinateSystems()->CreateCoordinateSystem(xform2, NXOpen::SmartObject::UpdateOptionWithinModeling);

	sketchInPlaceBuilder3->SetCsystem(cartesianCoordinateSystem1);

	NXOpen::Point3d origin8(0.0, 0.0, 0.0);
	NXOpen::Vector3d normal4(0.0, 0.0, 1.0);
	NXOpen::Plane *plane4;
	plane4 = workPart->Planes()->CreatePlane(origin8, normal4, NXOpen::SmartObject::UpdateOptionWithinModeling);

	plane4->SetMethod(NXOpen::PlaneTypes::MethodTypeCoincident);

	std::vector<NXOpen::NXObject *> geom9(1);
	geom9[0] = datumPlane1;
	plane4->SetGeometry(geom9);

	plane4->SetFlip(false);

	plane4->SetExpression(NULL);

	plane4->SetAlternate(NXOpen::PlaneTypes::AlternateTypeOne);

	plane4->Evaluate();

	NXOpen::Point3d origin9(0.0, 0.0, 0.0);
	NXOpen::Vector3d normal5(0.0, 0.0, 1.0);
	NXOpen::Plane *plane5;
	plane5 = workPart->Planes()->CreatePlane(origin9, normal5, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression267;
	expression267 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression268;
	expression268 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	plane5->SynchronizeToPlane(plane4);

	plane5->SetMethod(NXOpen::PlaneTypes::MethodTypeCoincident);

	std::vector<NXOpen::NXObject *> geom10(1);
	geom10[0] = datumPlane1;
	plane5->SetGeometry(geom10);

	plane5->SetAlternate(NXOpen::PlaneTypes::AlternateTypeOne);

	plane5->Evaluate();


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

	NXOpen::NXObject *nXObject7;
	nXObject7 = sketchInPlaceBuilder3->Commit();

	NXOpen::Sketch *sketch4(dynamic_cast<NXOpen::Sketch *>(nXObject7));
	NXOpen::Features::Feature *feature5;
	feature5 = sketch4->Feature();

	
	sketch4->Activate(NXOpen::Sketch::ViewReorientTrue);

	sketchInPlaceBuilder3->Destroy();

	sketchAlongPathBuilder3->Destroy();

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression266);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression265);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	plane3->DestroyPlane();

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression268);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression267);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	plane5->DestroyPlane();

	// ----------------------------------------------
	//    插入(S)->草图曲线(S)->点(T)...
	// ----------------------------------------------

	NXOpen::Expression *expression269;
	expression269 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression270;
	expression270 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression271;
	expression271 = workPart->Expressions()->CreateSystemExpressionWithUnits("p26_x=0.00000000000", unit1);

	NXOpen::Expression *expression272;
	expression272 = workPart->Expressions()->CreateSystemExpressionWithUnits("p27_y=0.00000000000", unit1);

	NXOpen::Expression *expression273;
	expression273 = workPart->Expressions()->CreateSystemExpressionWithUnits("p28_z=0.00000000000", unit1);

	NXOpen::Expression *expression274;
	expression274 = workPart->Expressions()->CreateSystemExpressionWithUnits("p29_xdelta=0.00000000000", unit1);

	NXOpen::Expression *expression275;
	expression275 = workPart->Expressions()->CreateSystemExpressionWithUnits("p30_ydelta=0.00000000000", unit1);

	NXOpen::Expression *expression276;
	expression276 = workPart->Expressions()->CreateSystemExpressionWithUnits("p31_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression277;
	expression277 = workPart->Expressions()->CreateSystemExpressionWithUnits("p32_radius=0.00000000000", unit1);

	NXOpen::Expression *expression278;
	expression278 = workPart->Expressions()->CreateSystemExpressionWithUnits("p33_angle=0.00000000000", unit2);

	NXOpen::Expression *expression279;
	expression279 = workPart->Expressions()->CreateSystemExpressionWithUnits("p34_zdelta=0.00000000000", unit1);

	NXOpen::Expression *expression280;
	expression280 = workPart->Expressions()->CreateSystemExpressionWithUnits("p35_radius=0.00000000000", unit1);

	NXOpen::Expression *expression281;
	expression281 = workPart->Expressions()->CreateSystemExpressionWithUnits("p36_angle1=0.00000000000", unit2);

	NXOpen::Expression *expression282;
	expression282 = workPart->Expressions()->CreateSystemExpressionWithUnits("p37_angle2=0.00000000000", unit2);

	NXOpen::Expression *expression283;
	expression283 = workPart->Expressions()->CreateSystemExpressionWithUnits("p38_distance=0", unit1);

	NXOpen::Expression *expression284;
	expression284 = workPart->Expressions()->CreateSystemExpressionWithUnits("p39_arclen=0", unit1);

	NXOpen::Expression *expression285;
	expression285 = workPart->Expressions()->CreateSystemExpressionWithUnits("p40_percent=0", nullNXOpen_Unit);

	expression271->SetRightHandSide("11");

	expression272->SetRightHandSide("19.5");

	expression273->SetRightHandSide("0");

	expression274->SetRightHandSide("0");

	expression275->SetRightHandSide("0");

	expression276->SetRightHandSide("0");

	expression277->SetRightHandSide("0");

	expression278->SetRightHandSide("0");

	expression279->SetRightHandSide("0");

	expression280->SetRightHandSide("0");

	expression281->SetRightHandSide("0");

	expression282->SetRightHandSide("0");

	expression283->SetRightHandSide("0");

	expression285->SetRightHandSide("100");

	expression284->SetRightHandSide("0");

	NXOpen::Expression *expression286;
	expression286 = workPart->Expressions()->CreateSystemExpressionWithUnits("p41_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar115;
	scalar115 = workPart->Scalars()->CreateScalarExpression(expression286, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression287;
	expression287 = workPart->Expressions()->CreateSystemExpressionWithUnits("p42_y=0.00000000000", unit1);

	NXOpen::Scalar *scalar116;
	scalar116 = workPart->Scalars()->CreateScalarExpression(expression287, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression288;
	expression288 = workPart->Expressions()->CreateSystemExpressionWithUnits("p43_z=0.00000000000", unit1);

	NXOpen::Scalar *scalar117;
	scalar117 = workPart->Scalars()->CreateScalarExpression(expression288, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point50;
	point50 = workPart->Points()->CreatePoint(scalar115, scalar116, scalar117, NXOpen::SmartObject::UpdateOptionWithinModeling);

	expression271->SetRightHandSide("0.00000000000");

	expression272->SetRightHandSide("0.00000000000");

	expression273->SetRightHandSide("0.00000000000");

	expression274->SetRightHandSide("0.00000000000");

	expression275->SetRightHandSide("0.00000000000");

	expression276->SetRightHandSide("0.00000000000");

	expression277->SetRightHandSide("0.00000000000");

	expression278->SetRightHandSide("0.00000000000");

	expression279->SetRightHandSide("0.00000000000");

	expression280->SetRightHandSide("0.00000000000");

	expression281->SetRightHandSide("0.00000000000");

	expression282->SetRightHandSide("0.00000000000");

	expression285->SetRightHandSide("100.00000000000");

	// ----------------------------------------------
	//   Dialog Begin Point


	expression273->SetRightHandSide("19.5");

	expression271->SetRightHandSide("0.00000000000");

	expression272->SetRightHandSide("0.00000000000");

	expression273->SetRightHandSide("19.5");

	workPart->Points()->DeletePoint(point50);

	NXOpen::Expression *expression289;
	expression289 = workPart->Expressions()->CreateSystemExpressionWithUnits("p27_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar118;
	scalar118 = workPart->Scalars()->CreateScalarExpression(expression289, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression290;
	expression290 = workPart->Expressions()->CreateSystemExpressionWithUnits("p28_y=0.00000000000", unit1);

	NXOpen::Scalar *scalar119;
	scalar119 = workPart->Scalars()->CreateScalarExpression(expression290, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression291;
	expression291 = workPart->Expressions()->CreateSystemExpressionWithUnits("p29_z=19.5", unit1);

	NXOpen::Scalar *scalar120;
	scalar120 = workPart->Scalars()->CreateScalarExpression(expression291, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point51;
	point51 = workPart->Points()->CreatePoint(scalar118, scalar119, scalar120, NXOpen::SmartObject::UpdateOptionWithinModeling);


	expression271->SetRightHandSide("0.00000000000");

	expression272->SetRightHandSide("0.00000000000");

	expression273->SetRightHandSide("19.5");

	workPart->Points()->DeletePoint(point51);

	NXOpen::Expression *expression292;
	expression292 = workPart->Expressions()->CreateSystemExpressionWithUnits("p27_x=0.00000000000", unit1);

	NXOpen::Scalar *scalar121;
	scalar121 = workPart->Scalars()->CreateScalarExpression(expression292, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression293;
	expression293 = workPart->Expressions()->CreateSystemExpressionWithUnits("p28_y=0.00000000000", unit1);

	NXOpen::Scalar *scalar122;
	scalar122 = workPart->Scalars()->CreateScalarExpression(expression293, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression294;
	expression294 = workPart->Expressions()->CreateSystemExpressionWithUnits("p29_z=19.5", unit1);

	NXOpen::Scalar *scalar123;
	scalar123 = workPart->Scalars()->CreateScalarExpression(expression294, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point52;
	point52 = workPart->Points()->CreatePoint(scalar121, scalar122, scalar123, NXOpen::SmartObject::UpdateOptionWithinModeling);


	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression271);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression272);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression273);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression274);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression275);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression276);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression277);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression278);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression279);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression280);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression281);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression282);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression283);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression284);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression285);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	workPart->Expressions()->Delete(expression270);

	NXOpen::Scalar *scalar124;
	scalar124 = workPart->Scalars()->CreateScalarExpression(expression292, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar125;
	scalar125 = workPart->Scalars()->CreateScalarExpression(expression293, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Scalar *scalar126;
	scalar126 = workPart->Scalars()->CreateScalarExpression(expression294, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point53;
	point53 = workPart->Points()->CreatePoint(scalar124, scalar125, scalar126, NXOpen::SmartObject::UpdateOptionWithinModeling);

	point52->RemoveParameters();

	NXOpen::Point3d coordinates11(0.0, 0.0, 19.5);
	point52->SetCoordinates(coordinates11);

	theSession->ActiveSketch()->AddGeometry(point52, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->Update();

	workPart->Points()->DeletePoint(point53);

	workPart->Expressions()->Delete(expression269);


	NXOpen::Expression *expression295;
	expression295 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	workPart->Expressions()->Delete(expression295);

	// ----------------------------------------------
	//    插入(S)->草图曲线(S)->直线(L)...
	// ----------------------------------------------

	NXOpen::Expression *expression296;
	expression296 = workPart->Expressions()->CreateSystemExpression("120");

	NXOpen::Expression *expression297;
	expression297 = workPart->Expressions()->CreateSystemExpression("38");

	NXOpen::Point3d startPoint9(0.0, 0.0, 19.5);
	NXOpen::Point3d endPoint9(0.0, 94.561290432806672, 93.379377039078946);
	NXOpen::Line *line11;
	line11 = workPart->Curves()->CreateLine(startPoint9, endPoint9);

	theSession->ActiveSketch()->AddGeometry(line11, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_17;
	geom1_17.Geometry = line11;
	geom1_17.PointType = NXOpen::Sketch::ConstraintPointTypeStartVertex;
	geom1_17.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_17;
	geom2_17.Geometry = point52;
	geom2_17.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_17.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint25;
	sketchGeometricConstraint25 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_17, geom2_17);

	NXOpen::Sketch::DimensionGeometry dimObject1_1;
	dimObject1_1.Geometry = line11;
	dimObject1_1.AssocType = NXOpen::Sketch::AssocTypeStartPoint;
	dimObject1_1.AssocValue = 0;
	dimObject1_1.HelpPoint.X = 0.0;
	dimObject1_1.HelpPoint.Y = 0.0;
	dimObject1_1.HelpPoint.Z = 0.0;
	dimObject1_1.View = nullNXOpen_NXObject;
	NXOpen::Sketch::DimensionGeometry dimObject2_1;
	dimObject2_1.Geometry = line11;
	dimObject2_1.AssocType = NXOpen::Sketch::AssocTypeEndPoint;
	dimObject2_1.AssocValue = 0;
	dimObject2_1.HelpPoint.X = 0.0;
	dimObject2_1.HelpPoint.Y = 0.0;
	dimObject2_1.HelpPoint.Z = 0.0;
	dimObject2_1.View = nullNXOpen_NXObject;
	NXOpen::Point3d dimOrigin1(0.0, 50.472561842775981, 52.354221542955841);
	NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint1;
	sketchDimensionalConstraint1 = theSession->ActiveSketch()->CreateDimension(NXOpen::Sketch::ConstraintTypeParallelDim, dimObject1_1, dimObject2_1, dimOrigin1, expression296, NXOpen::Sketch::DimensionOptionCreateAsDriving);

	NXOpen::SketchHelpedDimensionalConstraint *sketchHelpedDimensionalConstraint1(dynamic_cast<NXOpen::SketchHelpedDimensionalConstraint *>(sketchDimensionalConstraint1));
	NXOpen::Annotations::Dimension *dimension1;
	dimension1 = sketchHelpedDimensionalConstraint1->AssociatedDimension();

	NXOpen::Sketch::DimensionGeometry dimObject1_2;
	NXOpen::DatumAxis *datumAxis2(dynamic_cast<NXOpen::DatumAxis *>(workPart->Datums()->FindObject("SKETCH(6:1B) X axis")));
	dimObject1_2.Geometry = datumAxis2;
	dimObject1_2.AssocType = NXOpen::Sketch::AssocTypeEndPoint;
	dimObject1_2.AssocValue = 0;
	dimObject1_2.HelpPoint.X = 0.0;
	dimObject1_2.HelpPoint.Y = 28.574999999999999;
	dimObject1_2.HelpPoint.Z = 0.0;
	dimObject1_2.View = nullNXOpen_NXObject;
	NXOpen::Sketch::DimensionGeometry dimObject2_2;
	dimObject2_2.Geometry = line11;
	dimObject2_2.AssocType = NXOpen::Sketch::AssocTypeEndPoint;
	dimObject2_2.AssocValue = 0;
	dimObject2_2.HelpPoint.X = 0.0;
	dimObject2_2.HelpPoint.Y = 94.561290432806672;
	dimObject2_2.HelpPoint.Z = 93.379377039078946;
	dimObject2_2.View = nullNXOpen_NXObject;
	NXOpen::Point3d dimOrigin2(0.0, 45.433660790426359, 58.80372078035964);
	NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint2;
	sketchDimensionalConstraint2 = theSession->ActiveSketch()->CreateDimension(NXOpen::Sketch::ConstraintTypeAngularDim, dimObject1_2, dimObject2_2, dimOrigin2, expression297, NXOpen::Sketch::DimensionOptionCreateAsDriving);

	NXOpen::Annotations::Dimension *dimension2;
	dimension2 = sketchDimensionalConstraint2->AssociatedDimension();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(false);

	theSession->ActiveSketch()->Update();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(true);

	// ----------------------------------------------
	//   Dialog Begin Line
	// ----------------------------------------------

	NXOpen::Expression *expression298;
	expression298 = workPart->Expressions()->CreateSystemExpression("120");

	NXOpen::Expression *expression299;
	expression299 = workPart->Expressions()->CreateSystemExpression("128");

	NXOpen::Point3d startPoint10(0.0, 0.0, 19.5);
	NXOpen::Point3d endPoint10(0.0, -73.879377039078818, 114.06129043280677);
	NXOpen::Line *line12;
	line12 = workPart->Curves()->CreateLine(startPoint10, endPoint10);

	theSession->ActiveSketch()->AddGeometry(line12, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_18;
	geom1_18.Geometry = line12;
	geom1_18.PointType = NXOpen::Sketch::ConstraintPointTypeStartVertex;
	geom1_18.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_18;
	geom2_18.Geometry = point52;
	geom2_18.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_18.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint26;
	sketchGeometricConstraint26 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_18, geom2_18);

	NXOpen::Sketch::DimensionGeometry dimObject1_3;
	dimObject1_3.Geometry = line12;
	dimObject1_3.AssocType = NXOpen::Sketch::AssocTypeStartPoint;
	dimObject1_3.AssocValue = 0;
	dimObject1_3.HelpPoint.X = 0.0;
	dimObject1_3.HelpPoint.Y = 0.0;
	dimObject1_3.HelpPoint.Z = 0.0;
	dimObject1_3.View = nullNXOpen_NXObject;
	NXOpen::Sketch::DimensionGeometry dimObject2_3;
	dimObject2_3.Geometry = line12;
	dimObject2_3.AssocType = NXOpen::Sketch::AssocTypeEndPoint;
	dimObject2_3.AssocValue = 0;
	dimObject2_3.HelpPoint.X = 0.0;
	dimObject2_3.HelpPoint.Y = 0.0;
	dimObject2_3.HelpPoint.Z = 0.0;
	dimObject2_3.View = nullNXOpen_NXObject;
	NXOpen::Point3d dimOrigin3(0.0, -32.85422154295577, 69.972561842776031);
	NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint3;
	sketchDimensionalConstraint3 = theSession->ActiveSketch()->CreateDimension(NXOpen::Sketch::ConstraintTypeParallelDim, dimObject1_3, dimObject2_3, dimOrigin3, expression298, NXOpen::Sketch::DimensionOptionCreateAsDriving);

	NXOpen::SketchHelpedDimensionalConstraint *sketchHelpedDimensionalConstraint2(dynamic_cast<NXOpen::SketchHelpedDimensionalConstraint *>(sketchDimensionalConstraint3));
	NXOpen::Annotations::Dimension *dimension3;
	dimension3 = sketchHelpedDimensionalConstraint2->AssociatedDimension();

	NXOpen::Sketch::DimensionGeometry dimObject1_4;
	dimObject1_4.Geometry = datumAxis2;
	dimObject1_4.AssocType = NXOpen::Sketch::AssocTypeEndPoint;
	dimObject1_4.AssocValue = 0;
	dimObject1_4.HelpPoint.X = 0.0;
	dimObject1_4.HelpPoint.Y = 28.574999999999999;
	dimObject1_4.HelpPoint.Z = 0.0;
	dimObject1_4.View = nullNXOpen_NXObject;
	NXOpen::Sketch::DimensionGeometry dimObject2_4;
	dimObject2_4.Geometry = line12;
	dimObject2_4.AssocType = NXOpen::Sketch::AssocTypeEndPoint;
	dimObject2_4.AssocValue = 0;
	dimObject2_4.HelpPoint.X = 0.0;
	dimObject2_4.HelpPoint.Y = -73.879377039078818;
	dimObject2_4.HelpPoint.Z = 114.06129043280677;
	dimObject2_4.View = nullNXOpen_NXObject;
	NXOpen::Point3d dimOrigin4(0.0, -39.303720780359576, 64.933660790426416);
	NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint4;
	sketchDimensionalConstraint4 = theSession->ActiveSketch()->CreateDimension(NXOpen::Sketch::ConstraintTypeAngularDim, dimObject1_4, dimObject2_4, dimOrigin4, expression299, NXOpen::Sketch::DimensionOptionCreateAsDriving);

	NXOpen::Annotations::Dimension *dimension4;
	dimension4 = sketchDimensionalConstraint4->AssociatedDimension();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(false);

	theSession->ActiveSketch()->Update();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(true);

	// ----------------------------------------------
	//   Dialog Begin Line
	// ----------------------------------------------


	NXOpen::Point3d origin10(25.972226881290165, 30.089223128915531, 18.233336858428135);
	workPart->ModelingViews()->WorkView()->SetOrigin(origin10);

	NXOpen::Point3d origin11(25.972226881290165, 30.089223128915531, 18.233336858428135);
	workPart->ModelingViews()->WorkView()->SetOrigin(origin11);


	// ----------------------------------------------
	//   插入(S)->草图曲线(S)->圆(C)...
	// ----------------------------------------------

	NXOpen::Expression *expression300;
	expression300 = workPart->Expressions()->CreateSystemExpression("63.6");

	NXOpen::NXMatrix *nXMatrix1;
	nXMatrix1 = theSession->ActiveSketch()->Orientation();

	NXOpen::Point3d center1(0.0, 0.0, 0.0);
	NXOpen::Arc *arc1;
	arc1 = workPart->Curves()->CreateArc(center1, nXMatrix1, 31.800000000000001, 0.0, (360.0 * DEGRA));

	theSession->ActiveSketch()->AddGeometry(arc1, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_19;
	geom1_19.Geometry = arc1;
	geom1_19.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
	geom1_19.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_19;
	NXOpen::Features::DatumCsys *datumCsys2(dynamic_cast<NXOpen::Features::DatumCsys *>(workPart->Features()->FindObject("SKETCH(6:1B)")));
	NXOpen::Point *point54(dynamic_cast<NXOpen::Point *>(datumCsys2->FindObject("POINT 1")));
	geom2_19.Geometry = point54;
	geom2_19.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_19.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint27;
	sketchGeometricConstraint27 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_19, geom2_19);

	NXOpen::Sketch::DimensionGeometry dimObject1_5;
	dimObject1_5.Geometry = arc1;
	dimObject1_5.AssocType = NXOpen::Sketch::AssocTypeNone;
	dimObject1_5.AssocValue = 0;
	dimObject1_5.HelpPoint.X = 0.0;
	dimObject1_5.HelpPoint.Y = 0.0;
	dimObject1_5.HelpPoint.Z = 0.0;
	dimObject1_5.View = nullNXOpen_NXObject;
	NXOpen::Point3d dimOrigin5(0.0, 0.0, 4.2191829511410495);
	NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint5;
	sketchDimensionalConstraint5 = theSession->ActiveSketch()->CreateDiameterDimension(dimObject1_5, dimOrigin5, expression300, NXOpen::Sketch::DimensionOptionCreateAsDriving);

	NXOpen::Annotations::Dimension *dimension5;
	dimension5 = sketchDimensionalConstraint5->AssociatedDimension();

	theSession->ActiveSketch()->Update();

	NXOpen::NXMatrix *nXMatrix2;
	nXMatrix2 = theSession->ActiveSketch()->Orientation();

	NXOpen::Point3d center2(0.0, 0.0, 0.0);
	NXOpen::Arc *arc2;
	arc2 = workPart->Curves()->CreateArc(center2, nXMatrix2, 31.800000000000001, 0.0, (360.0 * DEGRA));

	theSession->ActiveSketch()->AddGeometry(arc2, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_20;
	geom1_20.Geometry = arc2;
	geom1_20.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom1_20.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometryHelp geom1Help1;
	geom1Help1.Type = NXOpen::Sketch::ConstraintGeometryHelpTypePoint;
	geom1Help1.Point.X = 0.0;
	geom1Help1.Point.Y = -31.444820273959088;
	geom1Help1.Point.Z = -4.7395440644023479;
	geom1Help1.Parameter = 0.0;
	NXOpen::Sketch::ConstraintGeometry geom2_20;
	geom2_20.Geometry = arc1;
	geom2_20.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_20.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometryHelp geom2Help1;
	geom2Help1.Type = NXOpen::Sketch::ConstraintGeometryHelpTypePoint;
	geom2Help1.Point.X = 0.0;
	geom2Help1.Point.Y = -31.444820273959088;
	geom2Help1.Point.Z = -4.7395440644023479;
	geom2Help1.Parameter = 0.0;
	NXOpen::SketchTangentConstraint *sketchTangentConstraint1;
	sketchTangentConstraint1 = theSession->ActiveSketch()->CreateTangentConstraint(geom1_20, geom1Help1, geom2_20, geom2Help1);

	NXOpen::Sketch::ConstraintGeometry geom1_21;
	geom1_21.Geometry = arc2;
	geom1_21.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
	geom1_21.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_21;
	geom2_21.Geometry = arc1;
	geom2_21.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
	geom2_21.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint28;
	sketchGeometricConstraint28 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_21, geom2_21);

	NXOpen::Sketch::DimensionGeometry dimObject1_6;
	dimObject1_6.Geometry = arc2;
	dimObject1_6.AssocType = NXOpen::Sketch::AssocTypeNone;
	dimObject1_6.AssocValue = 0;
	dimObject1_6.HelpPoint.X = 0.0;
	dimObject1_6.HelpPoint.Y = 0.0;
	dimObject1_6.HelpPoint.Z = 0.0;
	dimObject1_6.View = nullNXOpen_NXObject;
	NXOpen::Point3d dimOrigin6(0.0, 0.0, 4.2191829511410495);
	NXOpen::Expression *nullNXOpen_Expression(NULL);
	NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint6;
	sketchDimensionalConstraint6 = theSession->ActiveSketch()->CreateDiameterDimension(dimObject1_6, dimOrigin6, nullNXOpen_Expression, NXOpen::Sketch::DimensionOptionCreateAsDriving);

	NXOpen::Annotations::Dimension *dimension6;
	dimension6 = sketchDimensionalConstraint6->AssociatedDimension();

	NXOpen::Expression *expression301;
	expression301 = sketchDimensionalConstraint6->AssociatedExpression();

	theSession->ActiveSketch()->Update();

	// ----------------------------------------------
	//   插入(S)->草图曲线(S)->圆(C)...
	// ----------------------------------------------

	NXOpen::Expression *expression302;
	expression302 = workPart->Expressions()->CreateSystemExpression("144");

	NXOpen::NXMatrix *nXMatrix3;
	nXMatrix3 = theSession->ActiveSketch()->Orientation();

	NXOpen::Point3d center3(0.0, 0.0, 0.0);
	NXOpen::Arc *arc3;
	arc3 = workPart->Curves()->CreateArc(center3, nXMatrix3, 72.0, 0.0, (360.0 * DEGRA));

	theSession->ActiveSketch()->AddGeometry(arc3, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_22;
	geom1_22.Geometry = arc3;
	geom1_22.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
	geom1_22.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_22;
	geom2_22.Geometry = arc2;
	geom2_22.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
	geom2_22.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint29;
	sketchGeometricConstraint29 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_22, geom2_22);

	NXOpen::Sketch::DimensionGeometry dimObject1_7;
	dimObject1_7.Geometry = arc3;
	dimObject1_7.AssocType = NXOpen::Sketch::AssocTypeNone;
	dimObject1_7.AssocValue = 0;
	dimObject1_7.HelpPoint.X = 0.0;
	dimObject1_7.HelpPoint.Y = 0.0;
	dimObject1_7.HelpPoint.Z = 0.0;
	dimObject1_7.View = nullNXOpen_NXObject;
	NXOpen::Point3d dimOrigin7(0.0, 0.0, 4.2191829511410495);
	NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint7;
	sketchDimensionalConstraint7 = theSession->ActiveSketch()->CreateDiameterDimension(dimObject1_7, dimOrigin7, expression302, NXOpen::Sketch::DimensionOptionCreateAsDriving);

	NXOpen::Annotations::Dimension *dimension7;
	dimension7 = sketchDimensionalConstraint7->AssociatedDimension();

	theSession->ActiveSketch()->Update();

	// ----------------------------------------------
	//   Menu: 插入(S)->草图曲线(S)->圆角(F)...
	// ----------------------------------------------

	NXOpen::Point3d helpPoint1_1(0.0, -27.96750028670742, 55.296767965328833);
	NXOpen::Point3d helpPoint2_1(0.0, -24.371341040085312, 67.749817238925843);
	std::vector<NXOpen::Arc *> fillets1;
	std::vector<NXOpen::SketchConstraint *> constraints1;
	fillets1 = theSession->ActiveSketch()->Fillet(line12, arc3, helpPoint1_1, helpPoint2_1, 8.0, NXOpen::Sketch::TrimInputOptionTrue, NXOpen::Sketch::CreateDimensionOptionTrue, NXOpen::Sketch::AlternateSolutionOptionFalse, constraints1);

	theSession->ActiveSketch()->Update();


	NXOpen::Point3d helpPoint1_2(0.0, -11.722523328430162, 34.504145642412396);
	NXOpen::Point3d helpPoint2_2(0.0, -4.3293041740333944, 31.503922380692483);
	std::vector<NXOpen::Arc *> fillets2;
	std::vector<NXOpen::SketchConstraint *> constraints2;
	fillets2 = theSession->ActiveSketch()->Fillet(line12, arc2, helpPoint1_2, helpPoint2_2, 8.0, NXOpen::Sketch::TrimInputOptionTrue, NXOpen::Sketch::CreateDimensionOptionTrue, NXOpen::Sketch::AlternateSolutionOptionFalse, constraints2);

	theSession->ActiveSketch()->Update();

	NXOpen::Point3d helpPoint1_3(0.0, 8.7914998195079317, 30.560587869404472);
	NXOpen::Point3d helpPoint2_3(0.0, 15.928489689913931, 31.944700046690173);
	std::vector<NXOpen::Arc *> fillets3;
	std::vector<NXOpen::SketchConstraint *> constraints3;
	fillets3 = theSession->ActiveSketch()->Fillet(arc2, line11, helpPoint1_3, helpPoint2_3, 8.0, NXOpen::Sketch::TrimInputOptionTrue, NXOpen::Sketch::CreateDimensionOptionTrue, NXOpen::Sketch::AlternateSolutionOptionFalse, constraints3);

	theSession->ActiveSketch()->Update();

	NXOpen::Point3d helpPoint1_4(0.0, 37.490909896121302, 48.791109026497999);
	NXOpen::Point3d helpPoint2_4(0.0, 36.636320355205598, 61.982094437270739);
	std::vector<NXOpen::Arc *> fillets4;
	std::vector<NXOpen::SketchConstraint *> constraints4;
	fillets4 = theSession->ActiveSketch()->Fillet(line11, arc3, helpPoint1_4, helpPoint2_4, 8.0, NXOpen::Sketch::TrimInputOptionTrue, NXOpen::Sketch::CreateDimensionOptionTrue, NXOpen::Sketch::AlternateSolutionOptionFalse, constraints4);

	theSession->ActiveSketch()->Update();


	// ----------------------------------------------
	//    编辑(E)->草图曲线(K)...->快速修剪(Q)...
	// ----------------------------------------------

	NXOpen::SketchQuickTrimBuilder *sketchQuickTrimBuilder1;
	sketchQuickTrimBuilder1 = workPart->Sketches()->CreateQuickTrimBuilder();

	NXOpen::Point3d point55(0.0, -20.758007001614242, 24.064205332697437);
	bool added5;
	added5 = sketchQuickTrimBuilder1->TrimmedCurves()->Add(arc2, workPart->ModelingViews()->WorkView(), point55);

	bool added6;
	added6 = sketchQuickTrimBuilder1->BoundaryObjects()->Add(fillets3[0]);

	bool added7;
	added7 = sketchQuickTrimBuilder1->BoundaryObjects()->Add(fillets2[0]);

	sketchQuickTrimBuilder1->SetExtendBound(false);

	NXOpen::NXObject *nXObject8;
	nXObject8 = sketchQuickTrimBuilder1->Commit();

	sketchQuickTrimBuilder1->SetExtendBound(true);

	sketchQuickTrimBuilder1->BoundaryObjects()->Clear();

	sketchQuickTrimBuilder1->Destroy();

	NXOpen::SketchQuickTrimBuilder *sketchQuickTrimBuilder2;
	sketchQuickTrimBuilder2 = workPart->Sketches()->CreateQuickTrimBuilder();

	sketchQuickTrimBuilder2->SetExtendBound(true);

	NXOpen::Point3d point56(0.0, -46.439650141548256, 54.996731379734591);
	bool added8;
	added8 = sketchQuickTrimBuilder2->TrimmedCurves()->Add(arc3, workPart->ModelingViews()->WorkView(), point56);

	bool added9;
	added9 = sketchQuickTrimBuilder2->BoundaryObjects()->Add(fillets4[0]);

	bool added10;
	added10 = sketchQuickTrimBuilder2->BoundaryObjects()->Add(fillets1[0]);

	sketchQuickTrimBuilder2->SetExtendBound(false);

	NXOpen::NXObject *nXObject9;
	nXObject9 = sketchQuickTrimBuilder2->Commit();

	sketchQuickTrimBuilder2->SetExtendBound(true);

	sketchQuickTrimBuilder2->BoundaryObjects()->Clear();

	sketchQuickTrimBuilder2->Destroy();


	NXOpen::SketchQuickTrimBuilder *sketchQuickTrimBuilder3;
	sketchQuickTrimBuilder3 = workPart->Sketches()->CreateQuickTrimBuilder();

	sketchQuickTrimBuilder3->SetExtendBound(true);

	sketchQuickTrimBuilder3->Destroy();



	// ----------------------------------------------
	//   Menu: 插入(S)->设计特征(E)->拉伸(X)...
	// ----------------------------------------------
	
	NXOpen::Features::ExtrudeBuilder *extrudeBuilder2;
	extrudeBuilder2 = workPart->Features()->CreateExtrudeBuilder(nullNXOpen_Features_Feature);

	NXOpen::Section *section3;
	section3 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);

	extrudeBuilder2->SetSection(section3);

	extrudeBuilder2->AllowSelfIntersectingSection(true);

	NXOpen::Expression *expression303;
	expression303 = workPart->Expressions()->CreateSystemExpressionWithUnits("2.00", unit2);

	extrudeBuilder2->SetDistanceTolerance(0.001);

	extrudeBuilder2->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);

	std::vector<NXOpen::Body *> targetBodies4(1);
	targetBodies4[0] = nullNXOpen_Body;
	extrudeBuilder2->BooleanOperation()->SetTargetBodies(targetBodies4);

	extrudeBuilder2->Limits()->StartExtend()->Value()->SetRightHandSide("-34");

	extrudeBuilder2->Limits()->EndExtend()->Value()->SetRightHandSide("25");

	extrudeBuilder2->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeIntersect);

	std::vector<NXOpen::Body *> targetBodies5(1);
	targetBodies5[0] = body1;
	extrudeBuilder2->BooleanOperation()->SetTargetBodies(targetBodies5);

	extrudeBuilder2->Draft()->FrontDraftAngle()->SetRightHandSide("2");

	extrudeBuilder2->Draft()->BackDraftAngle()->SetRightHandSide("2");

	extrudeBuilder2->Offset()->StartOffset()->SetRightHandSide("0");

	extrudeBuilder2->Offset()->EndOffset()->SetRightHandSide("5");

	NXOpen::GeometricUtilities::SmartVolumeProfileBuilder *smartVolumeProfileBuilder3;
	smartVolumeProfileBuilder3 = extrudeBuilder2->SmartVolumeProfile();

	smartVolumeProfileBuilder3->SetOpenProfileSmartVolumeOption(false);

	smartVolumeProfileBuilder3->SetCloseProfileRule(NXOpen::GeometricUtilities::SmartVolumeProfileBuilder::CloseProfileRuleTypeFci);

	section3->SetDistanceTolerance(0.001);

	section3->SetChainingTolerance(0.00095);

	section3->SetAllowedEntityTypes(NXOpen::Section::AllowTypesOnlyCurves);

	std::vector<NXOpen::ICurve *> curves2(9);
	curves2[0] = line11;
	curves2[1] = arc1;
	curves2[2] = arc2;
	curves2[3] = line12;
	curves2[4] = fillets3[0];
	curves2[5] = arc3;
	curves2[6] = fillets1[0];
	curves2[7] = fillets2[0];
	curves2[8] = fillets4[0];
	NXOpen::Point3d seedPoint2(0.0, 38.225370723877425, 55.461867085637742);
	NXOpen::RegionBoundaryRule *regionBoundaryRule2;
	regionBoundaryRule2 = workPart->ScRuleFactory()->CreateRuleRegionBoundary(theSession->ActiveSketch(), curves2, seedPoint2, 0.001);

	std::vector<NXOpen::ICurve *> curves3(9);
	curves3[0] = line11;
	curves3[1] = arc1;
	curves3[2] = arc2;
	curves3[3] = line12;
	curves3[4] = fillets3[0];
	curves3[5] = arc3;
	curves3[6] = fillets1[0];
	curves3[7] = fillets2[0];
	curves3[8] = fillets4[0];
	NXOpen::Point3d seedPoint3(0.0, -11.717904068866206, 4.6009768771543955);
	NXOpen::RegionBoundaryRule *regionBoundaryRule3;
	regionBoundaryRule3 = workPart->ScRuleFactory()->CreateRuleRegionBoundary(theSession->ActiveSketch(), curves3, seedPoint3, 0.001);

	section3->AllowSelfIntersection(true);

	std::vector<NXOpen::SelectionIntentRule *> rules3(2);
	rules3[0] = regionBoundaryRule2;
	rules3[1] = regionBoundaryRule3;
	NXOpen::Point3d helpPoint3(0.0, 0.0, 0.0);
	section3->AddToSection(rules3, nullNXOpen_NXObject, nullNXOpen_NXObject, nullNXOpen_NXObject, helpPoint3, NXOpen::Section::ModeCreate, false);

	NXOpen::Direction *direction4;
	direction4 = workPart->Directions()->CreateDirection(theSession->ActiveSketch(), NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);

	extrudeBuilder2->SetDirection(direction4);

	NXOpen::Expression *expression304;
	expression304 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	extrudeBuilder2->Destroy();

	section3->Destroy();

	workPart->Expressions()->Delete(expression303);

	workPart->Expressions()->Delete(expression304);

	// ----------------------------------------------
	//   Menu: 插入(S)->草图曲线(S)->圆(C)...
	// ----------------------------------------------

	NXOpen::Expression *expression305;
	expression305 = workPart->Expressions()->CreateSystemExpression("63.6");

	NXOpen::NXMatrix *nXMatrix4;
	nXMatrix4 = theSession->ActiveSketch()->Orientation();

	NXOpen::Point3d center4(0.0, 0.0, 0.0);
	NXOpen::Arc *arc4;
	arc4 = workPart->Curves()->CreateArc(center4, nXMatrix4, 31.800000000000001, 0.0, (360.0 * DEGRA));

	theSession->ActiveSketch()->AddGeometry(arc4, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_23;
	geom1_23.Geometry = arc4;
	geom1_23.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
	geom1_23.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_23;
	geom2_23.Geometry = arc3;
	geom2_23.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
	geom2_23.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint30;
	sketchGeometricConstraint30 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_23, geom2_23);

	NXOpen::Sketch::DimensionGeometry dimObject1_8;
	dimObject1_8.Geometry = arc4;
	dimObject1_8.AssocType = NXOpen::Sketch::AssocTypeNone;
	dimObject1_8.AssocValue = 0;
	dimObject1_8.HelpPoint.X = 0.0;
	dimObject1_8.HelpPoint.Y = 0.0;
	dimObject1_8.HelpPoint.Z = 0.0;
	dimObject1_8.View = nullNXOpen_NXObject;
	NXOpen::Point3d dimOrigin8(0.0, 0.0, 1.3825418694298988);
	NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint8;
	sketchDimensionalConstraint8 = theSession->ActiveSketch()->CreateDiameterDimension(dimObject1_8, dimOrigin8, expression305, NXOpen::Sketch::DimensionOptionCreateAsDriving);

	NXOpen::Annotations::Dimension *dimension8;
	dimension8 = sketchDimensionalConstraint8->AssociatedDimension();

	theSession->ActiveSketch()->Update();


	// ----------------------------------------------
	//   编辑(E)->草图曲线(K)...->快速修剪(Q)...
	// ----------------------------------------------

	NXOpen::SketchQuickTrimBuilder *sketchQuickTrimBuilder4;
	sketchQuickTrimBuilder4 = workPart->Sketches()->CreateQuickTrimBuilder();

	NXOpen::Point3d point57(0.0, -17.978826880877872, 26.221180425380204);
	bool added11;
	added11 = sketchQuickTrimBuilder4->TrimmedCurves()->Add(arc4, workPart->ModelingViews()->WorkView(), point57);

	bool added12;
	added12 = sketchQuickTrimBuilder4->BoundaryObjects()->Add(fillets3[0]);

	bool added13;
	added13 = sketchQuickTrimBuilder4->BoundaryObjects()->Add(fillets2[0]);

	sketchQuickTrimBuilder4->SetExtendBound(false);

	NXOpen::NXObject *nXObject10;
	nXObject10 = sketchQuickTrimBuilder4->Commit();

	sketchQuickTrimBuilder4->SetExtendBound(true);

	sketchQuickTrimBuilder4->BoundaryObjects()->Clear();

	sketchQuickTrimBuilder4->Destroy();


	NXOpen::SketchQuickTrimBuilder *sketchQuickTrimBuilder5;
	sketchQuickTrimBuilder5 = workPart->Sketches()->CreateQuickTrimBuilder();

	sketchQuickTrimBuilder5->SetExtendBound(true);

	NXOpen::Point3d point58(0.0, -21.366044980472754, 23.546004747297786);
	bool added14;
	added14 = sketchQuickTrimBuilder5->TrimmedCurves()->Add(arc1, workPart->ModelingViews()->WorkView(), point58);

	bool added15;
	added15 = sketchQuickTrimBuilder5->BoundaryObjects()->Add(fillets3[0]);

	bool added16;
	added16 = sketchQuickTrimBuilder5->BoundaryObjects()->Add(fillets2[0]);

	sketchQuickTrimBuilder5->SetExtendBound(false);

	NXOpen::NXObject *nXObject11;
	nXObject11 = sketchQuickTrimBuilder5->Commit();

	sketchQuickTrimBuilder5->SetExtendBound(true);

	sketchQuickTrimBuilder5->BoundaryObjects()->Clear();

	sketchQuickTrimBuilder5->Destroy();


	NXOpen::SketchQuickTrimBuilder *sketchQuickTrimBuilder6;
	sketchQuickTrimBuilder6 = workPart->Sketches()->CreateQuickTrimBuilder();

	sketchQuickTrimBuilder6->SetExtendBound(true);

	sketchQuickTrimBuilder6->Destroy();

	// ----------------------------------------------
	//   编辑(E)->删除(D)...
	// ----------------------------------------------

	bool notifyOnDelete1;
	notifyOnDelete1 = theSession->Preferences()->Modeling()->NotifyOnDelete();

	theSession->UpdateManager()->ClearErrorList();

	std::vector<NXOpen::TaggedObject *> objects15(1);
	NXOpen::SketchTangentConstraint *sketchTangentConstraint2(dynamic_cast<NXOpen::SketchTangentConstraint *>(theSession->ActiveSketch()->FindObject("Tangent [Curve Arc2] [Curve Arc1]")));
	objects15[0] = sketchTangentConstraint2;
	int nErrs5;
	nErrs5 = theSession->UpdateManager()->AddObjectsToDeleteList(objects15);

	bool notifyOnDelete2;
	notifyOnDelete2 = theSession->Preferences()->Modeling()->NotifyOnDelete();

	

	// ----------------------------------------------
	//   Menu: 插入(S)->设计特征(E)->拉伸(X)...
	// ----------------------------------------------
	
	NXOpen::Features::ExtrudeBuilder *extrudeBuilder3;
	extrudeBuilder3 = workPart->Features()->CreateExtrudeBuilder(nullNXOpen_Features_Feature);

	NXOpen::Section *section4;
	section4 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);

	extrudeBuilder3->SetSection(section4);

	extrudeBuilder3->AllowSelfIntersectingSection(true);

	NXOpen::Expression *expression306;
	expression306 = workPart->Expressions()->CreateSystemExpressionWithUnits("2.00", unit2);

	extrudeBuilder3->SetDistanceTolerance(0.001);

	extrudeBuilder3->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);

	std::vector<NXOpen::Body *> targetBodies6(1);
	targetBodies6[0] = nullNXOpen_Body;
	extrudeBuilder3->BooleanOperation()->SetTargetBodies(targetBodies6);

	extrudeBuilder3->Limits()->StartExtend()->Value()->SetRightHandSide("-34");

	extrudeBuilder3->Limits()->EndExtend()->Value()->SetRightHandSide("25");

	extrudeBuilder3->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeIntersect);

	std::vector<NXOpen::Body *> targetBodies7(1);
	targetBodies7[0] = body1;
	extrudeBuilder3->BooleanOperation()->SetTargetBodies(targetBodies7);

	extrudeBuilder3->Draft()->FrontDraftAngle()->SetRightHandSide("2");

	extrudeBuilder3->Draft()->BackDraftAngle()->SetRightHandSide("2");

	extrudeBuilder3->Offset()->StartOffset()->SetRightHandSide("0");

	extrudeBuilder3->Offset()->EndOffset()->SetRightHandSide("5");

	NXOpen::GeometricUtilities::SmartVolumeProfileBuilder *smartVolumeProfileBuilder4;
	smartVolumeProfileBuilder4 = extrudeBuilder3->SmartVolumeProfile();

	smartVolumeProfileBuilder4->SetOpenProfileSmartVolumeOption(false);

	smartVolumeProfileBuilder4->SetCloseProfileRule(NXOpen::GeometricUtilities::SmartVolumeProfileBuilder::CloseProfileRuleTypeFci);

	section4->SetDistanceTolerance(0.001);

	section4->SetChainingTolerance(0.00095);

	section4->SetAllowedEntityTypes(NXOpen::Section::AllowTypesOnlyCurves);


	std::vector<NXOpen::ICurve *> curves4(10);
	curves4[0] = line11;
	curves4[1] = arc1;
	curves4[2] = arc2;
	curves4[3] = line12;
	curves4[4] = fillets3[0];
	curves4[5] = arc3;
	curves4[6] = fillets1[0];
	curves4[7] = arc4;
	curves4[8] = fillets2[0];
	curves4[9] = fillets4[0];
	NXOpen::Point3d seedPoint4(0.0, 38.225370723877418, 55.461867085637749);
	NXOpen::RegionBoundaryRule *regionBoundaryRule4;
	regionBoundaryRule4 = workPart->ScRuleFactory()->CreateRuleRegionBoundary(theSession->ActiveSketch(), curves4, seedPoint4, 0.001);

	section4->AllowSelfIntersection(true);

	std::vector<NXOpen::SelectionIntentRule *> rules4(1);
	rules4[0] = regionBoundaryRule4;
	NXOpen::Point3d helpPoint4(0.0, 0.0, 0.0);
	section4->AddToSection(rules4, nullNXOpen_NXObject, nullNXOpen_NXObject, nullNXOpen_NXObject, helpPoint4, NXOpen::Section::ModeCreate, false);


	NXOpen::Direction *direction5;
	direction5 = workPart->Directions()->CreateDirection(theSession->ActiveSketch(), NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);

	extrudeBuilder3->SetDirection(direction5);

	NXOpen::Expression *expression307;
	expression307 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	extrudeBuilder3->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeSubtract);

	std::vector<NXOpen::Body *> targetBodies8(1);
	targetBodies8[0] = body1;
	extrudeBuilder3->BooleanOperation()->SetTargetBodies(targetBodies8);


	extrudeBuilder3->SetParentFeatureInternal(false);


	NXOpen::Features::Feature *feature6;
	feature6 = extrudeBuilder3->CommitFeature();

	NXOpen::Expression *expression308(extrudeBuilder3->Limits()->StartExtend()->Value());
	NXOpen::Expression *expression309(extrudeBuilder3->Limits()->EndExtend()->Value());
	extrudeBuilder3->Destroy();

	workPart->Expressions()->Delete(expression306);

	workPart->Expressions()->Delete(expression307);

	// ----------------------------------------------
	//    插入(S)->关联复制(A)->阵列特征(A)...
	// ----------------------------------------------

	NXOpen::Features::PatternFeatureBuilder *patternFeatureBuilder1;
	patternFeatureBuilder1 = workPart->Features()->CreatePatternFeatureBuilder(nullNXOpen_Features_Feature);

	NXOpen::Expression *expression310;
	expression310 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression311;
	expression311 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Point3d origin12(0.0, 0.0, 0.0);
	NXOpen::Vector3d normal6(0.0, 0.0, 1.0);
	NXOpen::Plane *plane6;
	plane6 = workPart->Planes()->CreatePlane(origin12, normal6, NXOpen::SmartObject::UpdateOptionWithinModeling);

	patternFeatureBuilder1->PatternService()->MirrorDefinition()->SetNewPlane(plane6);

	NXOpen::Expression *expression312;
	expression312 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression313;
	expression313 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression314;
	expression314 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	patternFeatureBuilder1->PatternService()->SetPatternType(NXOpen::GeometricUtilities::PatternDefinition::PatternEnumCircular);

	patternFeatureBuilder1->PatternService()->PatternFill()->FillMargin()->SetRightHandSide("0");

	patternFeatureBuilder1->PatternService()->PatternOrientation()->SetCircularOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);

	patternFeatureBuilder1->PatternService()->PatternOrientation()->SetAlongOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumNormalToPath);

	patternFeatureBuilder1->PatternService()->PatternOrientation()->SetPolygonOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);

	patternFeatureBuilder1->PatternService()->PatternOrientation()->SetSpiralOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);

	patternFeatureBuilder1->PatternService()->PatternOrientation()->SetMirrorOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);

	patternFeatureBuilder1->PatternService()->PatternOrientation()->SetHelixOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);

	patternFeatureBuilder1->PatternService()->PatternOrientation()->AlongPathRotationAngle()->SetRightHandSide("0");

	patternFeatureBuilder1->PatternService()->RectangularDefinition()->XSpacing()->NCopies()->SetRightHandSide("2");

	patternFeatureBuilder1->PatternService()->RectangularDefinition()->XSpacing()->PitchDistance()->SetRightHandSide("10");

	patternFeatureBuilder1->PatternService()->RectangularDefinition()->XSpacing()->SpanDistance()->SetRightHandSide("100");

	patternFeatureBuilder1->PatternService()->RectangularDefinition()->YSpacing()->NCopies()->SetRightHandSide("1");

	patternFeatureBuilder1->PatternService()->RectangularDefinition()->YSpacing()->PitchDistance()->SetRightHandSide("10");

	patternFeatureBuilder1->PatternService()->RectangularDefinition()->YSpacing()->SpanDistance()->SetRightHandSide("100");

	patternFeatureBuilder1->PatternService()->RectangularDefinition()->HorizontalRef()->RotationAngle()->SetRightHandSide("0");

	patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->SetSpaceType(NXOpen::GeometricUtilities::PatternSpacing::SpacingTypeSpan);

	patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->NCopies()->SetRightHandSide("3");

	patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->PitchDistance()->SetRightHandSide("10");

	patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->PitchAngle()->SetRightHandSide("360");

	patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->SpanAngle()->SetRightHandSide("360");

	patternFeatureBuilder1->PatternService()->CircularDefinition()->RadialSpacing()->NCopies()->SetRightHandSide("1");

	patternFeatureBuilder1->PatternService()->CircularDefinition()->RadialSpacing()->PitchDistance()->SetRightHandSide("10");

	patternFeatureBuilder1->PatternService()->CircularDefinition()->RadialSpacing()->SpanDistance()->SetRightHandSide("100");

	patternFeatureBuilder1->PatternService()->CircularDefinition()->HorizontalRef()->RotationAngle()->SetRightHandSide("0");

	patternFeatureBuilder1->PatternService()->AlongPathDefinition()->SetXPathOption(NXOpen::GeometricUtilities::AlongPathPattern::PathOptionsOffset);

	patternFeatureBuilder1->PatternService()->AlongPathDefinition()->XOnPathSpacing()->NCopies()->SetRightHandSide("2");

	patternFeatureBuilder1->PatternService()->AlongPathDefinition()->XOnPathSpacing()->OnPathPitchDistance()->Expression()->SetRightHandSide("50");

	patternFeatureBuilder1->PatternService()->AlongPathDefinition()->XOnPathSpacing()->OnPathSpanDistance()->Expression()->SetRightHandSide("100");

	patternFeatureBuilder1->PatternService()->AlongPathDefinition()->SetYDirectionOption(NXOpen::GeometricUtilities::AlongPathPattern::YDirectionOptionsSection);

	patternFeatureBuilder1->PatternService()->AlongPathDefinition()->SetYPathOption(NXOpen::GeometricUtilities::AlongPathPattern::PathOptionsOffset);

	patternFeatureBuilder1->PatternService()->AlongPathDefinition()->YOnPathSpacing()->NCopies()->SetRightHandSide("1");

	patternFeatureBuilder1->PatternService()->AlongPathDefinition()->YOnPathSpacing()->OnPathPitchDistance()->Expression()->SetRightHandSide("50");

	patternFeatureBuilder1->PatternService()->AlongPathDefinition()->YOnPathSpacing()->OnPathSpanDistance()->Expression()->SetRightHandSide("100");

	patternFeatureBuilder1->PatternService()->AlongPathDefinition()->YSpacing()->NCopies()->SetRightHandSide("1");

	patternFeatureBuilder1->PatternService()->AlongPathDefinition()->YSpacing()->PitchDistance()->SetRightHandSide("10");

	patternFeatureBuilder1->PatternService()->AlongPathDefinition()->YSpacing()->SpanDistance()->SetRightHandSide("100");

	patternFeatureBuilder1->PatternService()->SpiralDefinition()->NumberOfTurns()->SetRightHandSide("1");

	patternFeatureBuilder1->PatternService()->SpiralDefinition()->TotalAngle()->SetRightHandSide("360");

	patternFeatureBuilder1->PatternService()->SpiralDefinition()->RadialPitch()->SetRightHandSide("50");

	patternFeatureBuilder1->PatternService()->SpiralDefinition()->PitchAlongSpiral()->NCopies()->SetRightHandSide("2");

	patternFeatureBuilder1->PatternService()->SpiralDefinition()->PitchAlongSpiral()->OnPathPitchDistance()->Expression()->SetRightHandSide("50");

	patternFeatureBuilder1->PatternService()->SpiralDefinition()->PitchAlongSpiral()->OnPathSpanDistance()->Expression()->SetRightHandSide("100");

	patternFeatureBuilder1->PatternService()->SpiralDefinition()->HorizontalRef()->RotationAngle()->SetRightHandSide("0");

	patternFeatureBuilder1->PatternService()->PolygonDefinition()->PolygonSpacing()->NCopies()->SetRightHandSide("4");

	patternFeatureBuilder1->PatternService()->PolygonDefinition()->PolygonSpacing()->PitchDistance()->SetRightHandSide("25");

	patternFeatureBuilder1->PatternService()->PolygonDefinition()->PolygonSpacing()->SpanAngle()->SetRightHandSide("360");

	patternFeatureBuilder1->PatternService()->PolygonDefinition()->NumberOfSides()->SetRightHandSide("6");

	patternFeatureBuilder1->PatternService()->PolygonDefinition()->RadialSpacing()->NCopies()->SetRightHandSide("1");

	patternFeatureBuilder1->PatternService()->PolygonDefinition()->RadialSpacing()->PitchDistance()->SetRightHandSide("10");

	patternFeatureBuilder1->PatternService()->PolygonDefinition()->RadialSpacing()->SpanDistance()->SetRightHandSide("100");

	patternFeatureBuilder1->PatternService()->PolygonDefinition()->HorizontalRef()->RotationAngle()->SetRightHandSide("0");

	patternFeatureBuilder1->PatternService()->HelixDefinition()->CountOfInstances()->SetRightHandSide("6");

	patternFeatureBuilder1->PatternService()->HelixDefinition()->NumberOfTurns()->SetRightHandSide("2");

	patternFeatureBuilder1->PatternService()->HelixDefinition()->AnglePitch()->SetRightHandSide("30");

	patternFeatureBuilder1->PatternService()->HelixDefinition()->DistancePitch()->SetRightHandSide("10");

	patternFeatureBuilder1->PatternService()->HelixDefinition()->HelixPitch()->SetRightHandSide("50");

	patternFeatureBuilder1->PatternService()->HelixDefinition()->HelixSpan()->SetRightHandSide("100");

	patternFeatureBuilder1->SetPatternMethod(NXOpen::Features::PatternFeatureBuilder::PatternMethodOptionsVariational);

	NXOpen::Point3d origin13(0.0, 0.0, 0.0);
	NXOpen::Vector3d vector3(1.0, 0.0, 0.0);
	NXOpen::Direction *direction6;
	direction6 = workPart->Directions()->CreateDirection(origin13, vector3, NXOpen::SmartObject::UpdateOptionWithinModeling);

	patternFeatureBuilder1->PatternService()->CircularDefinition()->HorizontalRef()->SetHorizontalRefVector(direction6);

	NXOpen::Expression *expression315;
	expression315 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	std::vector<NXOpen::Features::Feature *> objects16(1);
	NXOpen::Features::Extrude *extrude1(dynamic_cast<NXOpen::Features::Extrude *>(feature6));
	objects16[0] = extrude1;
	bool added17;
	added17 = patternFeatureBuilder1->FeatureList()->Add(objects16);

	// 参考点 (39.275865, 20.259289, -5.500127) 从选定特征自动判断。
	NXOpen::Point3d coordinates12(5.5000000000000133, 4.8767635477113904, 53.168118845901716);
	NXOpen::Point *point59;
	point59 = workPart->Points()->CreatePoint(coordinates12);

	patternFeatureBuilder1->ReferencePointService()->SetPoint(point59);

	NXOpen::Expression *expression316;
	expression316 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Point3d origin14(0.0, 0.0, 0.0);
	NXOpen::Vector3d vector4(1.0, 0.0, 0.0);
	NXOpen::Direction *direction7;
	direction7 = workPart->Directions()->CreateDirection(origin14, vector4, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Axis *axis2;
	axis2 = workPart->Axes()->CreateAxis(nullNXOpen_Point, direction7, NXOpen::SmartObject::UpdateOptionWithinModeling);

	patternFeatureBuilder1->PatternService()->CircularDefinition()->SetRotationAxis(axis2);

	NXOpen::Expression *expression317;
	expression317 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);




	NXOpen::Point3d origin15(0.0, 0.0, 0.0);
	NXOpen::Vector3d vector5(1.0, 0.0, 0.0);
	NXOpen::Direction *direction8;
	direction8 = workPart->Directions()->CreateDirection(origin15, vector5, NXOpen::SmartObject::UpdateOptionWithinModeling);

	axis2->SetDirection(direction8);

	NXOpen::Point *point60;
	point60 = workPart->Points()->CreatePoint(arc3, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::NXObject *nXObject12;
	NXOpen::Xform *xform3;
	xform3 = workPart->Xforms()->CreateExtractXform(arc3, NXOpen::SmartObject::UpdateOptionWithinModeling, false, &nXObject12);

	NXOpen::Arc *arc5(dynamic_cast<NXOpen::Arc *>(nXObject12));
	NXOpen::Point *point61;
	point61 = workPart->Points()->CreatePoint(arc5, NXOpen::SmartObject::UpdateOptionWithinModeling);

	point61->RemoveViewDependency();

	point61->RemoveViewDependency();

	NXOpen::Point *point62;
	point62 = axis2->Point();

	axis2->SetPoint(point61);


	patternFeatureBuilder1->SetParentFeatureInternal(false);

	NXOpen::NXObject *nXObject13;
	nXObject13 = patternFeatureBuilder1->Commit();

	NXOpen::Expression *expression318(patternFeatureBuilder1->PatternService()->CircularDefinition()->RadialSpacing()->NCopies());
	NXOpen::Expression *expression319(patternFeatureBuilder1->PatternService()->CircularDefinition()->RadialSpacing()->SpanDistance());
	NXOpen::Expression *expression320(patternFeatureBuilder1->PatternService()->CircularDefinition()->RadialSpacing()->PitchDistance());
	NXOpen::Expression *expression321(patternFeatureBuilder1->PatternService()->CircularDefinition()->HorizontalRef()->RotationAngle());
	NXOpen::Expression *expression322(patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->NCopies());
	NXOpen::Expression *expression323(patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->SpanAngle());
	NXOpen::Expression *expression324(patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->PitchDistance());
	NXOpen::Expression *expression325(patternFeatureBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->PitchAngle());
	patternFeatureBuilder1->Destroy();

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression313);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	workPart->Expressions()->Delete(expression317);

	workPart->Expressions()->Delete(expression310);

	workPart->Expressions()->Delete(expression311);

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression312);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	workPart->Expressions()->Delete(expression314);

	workPart->Expressions()->Delete(expression316);

	workPart->Expressions()->Delete(expression315);


	// ----------------------------------------------
	//   Menu: 插入(S)->草图(H)...
	// ----------------------------------------------

	NXOpen::SketchInPlaceBuilder *sketchInPlaceBuilder4;
	sketchInPlaceBuilder4 = workPart->Sketches()->CreateSketchInPlaceBuilder2(nullNXOpen_Sketch);

	NXOpen::Point3d origin16(0.0, 0.0, 0.0);
	NXOpen::Vector3d normal7(0.0, 0.0, 1.0);
	NXOpen::Plane *plane7;
	plane7 = workPart->Planes()->CreatePlane(origin16, normal7, NXOpen::SmartObject::UpdateOptionWithinModeling);

	sketchInPlaceBuilder4->SetPlaneReference(plane7);

	NXOpen::Expression *expression326;
	expression326 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression327;
	expression327 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::SketchAlongPathBuilder *sketchAlongPathBuilder4;
	sketchAlongPathBuilder4 = workPart->Sketches()->CreateSketchAlongPathBuilder(nullNXOpen_Sketch);

	sketchAlongPathBuilder4->PlaneLocation()->Expression()->SetRightHandSide("0");

	NXOpen::Direction *direction9;
	direction9 = workPart->Directions()->CreateDirection(datumAxis1, NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Xform *xform4;
	xform4 = workPart->Xforms()->CreateXformByPlaneXDirPoint(datumPlane1, direction9, point47, NXOpen::SmartObject::UpdateOptionWithinModeling, 0.625, false, false);

	NXOpen::CartesianCoordinateSystem *cartesianCoordinateSystem2;
	cartesianCoordinateSystem2 = workPart->CoordinateSystems()->CreateCoordinateSystem(xform4, NXOpen::SmartObject::UpdateOptionWithinModeling);

	sketchInPlaceBuilder4->SetCsystem(cartesianCoordinateSystem2);

	NXOpen::Point3d origin17(0.0, 0.0, 0.0);
	NXOpen::Vector3d normal8(0.0, 0.0, 1.0);
	NXOpen::Plane *plane8;
	plane8 = workPart->Planes()->CreatePlane(origin17, normal8, NXOpen::SmartObject::UpdateOptionWithinModeling);

	plane8->SetMethod(NXOpen::PlaneTypes::MethodTypeCoincident);

	std::vector<NXOpen::NXObject *> geom11(1);
	geom11[0] = datumPlane1;
	plane8->SetGeometry(geom11);

	plane8->SetFlip(false);

	plane8->SetExpression(NULL);

	plane8->SetAlternate(NXOpen::PlaneTypes::AlternateTypeOne);

	plane8->Evaluate();

	NXOpen::Point3d origin18(0.0, 0.0, 0.0);
	NXOpen::Vector3d normal9(0.0, 0.0, 1.0);
	NXOpen::Plane *plane9;
	plane9 = workPart->Planes()->CreatePlane(origin18, normal9, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Expression *expression328;
	expression328 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression329;
	expression329 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	plane9->SynchronizeToPlane(plane8);

	plane9->SetMethod(NXOpen::PlaneTypes::MethodTypeCoincident);

	std::vector<NXOpen::NXObject *> geom12(1);
	geom12[0] = datumPlane1;
	plane9->SetGeometry(geom12);

	plane9->SetAlternate(NXOpen::PlaneTypes::AlternateTypeOne);

	plane9->Evaluate();


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

	NXOpen::NXObject *nXObject14;
	nXObject14 = sketchInPlaceBuilder4->Commit();

	NXOpen::Sketch *sketch5(dynamic_cast<NXOpen::Sketch *>(nXObject14));
	NXOpen::Features::Feature *feature7;
	feature7 = sketch5->Feature();


	sketch5->Activate(NXOpen::Sketch::ViewReorientTrue);

	sketchInPlaceBuilder4->Destroy();

	sketchAlongPathBuilder4->Destroy();

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression327);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression326);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	plane7->DestroyPlane();

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression329);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression328);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	plane9->DestroyPlane();

	// ----------------------------------------------
	//   Menu: 插入(S)->草图曲线(S)->圆(C)...
	// ----------------------------------------------

	NXOpen::Expression *expression330;
	expression330 = workPart->Expressions()->CreateSystemExpression("95");

	NXOpen::NXMatrix *nXMatrix5;
	nXMatrix5 = theSession->ActiveSketch()->Orientation();

	NXOpen::Point3d center5(0.0, 0.0, 0.0);
	NXOpen::Arc *arc6;
	arc6 = workPart->Curves()->CreateArc(center5, nXMatrix5, 47.5, 0.0, (360.0 * DEGRA));

	theSession->ActiveSketch()->AddGeometry(arc6, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_24;
	geom1_24.Geometry = arc6;
	geom1_24.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
	geom1_24.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_24;
	NXOpen::Features::DatumCsys *datumCsys3(dynamic_cast<NXOpen::Features::DatumCsys *>(workPart->Features()->FindObject("SKETCH(9:1B)")));
	NXOpen::Point *point63(dynamic_cast<NXOpen::Point *>(datumCsys3->FindObject("POINT 1")));
	geom2_24.Geometry = point63;
	geom2_24.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	geom2_24.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint31;
	sketchGeometricConstraint31 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_24, geom2_24);

	NXOpen::Sketch::DimensionGeometry dimObject1_9;
	dimObject1_9.Geometry = arc6;
	dimObject1_9.AssocType = NXOpen::Sketch::AssocTypeNone;
	dimObject1_9.AssocValue = 0;
	dimObject1_9.HelpPoint.X = 0.0;
	dimObject1_9.HelpPoint.Y = 0.0;
	dimObject1_9.HelpPoint.Z = 0.0;
	dimObject1_9.View = nullNXOpen_NXObject;
	NXOpen::Point3d dimOrigin9(0.0, 0.0, 4.2191829511410468);
	NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint9;
	sketchDimensionalConstraint9 = theSession->ActiveSketch()->CreateDiameterDimension(dimObject1_9, dimOrigin9, expression330, NXOpen::Sketch::DimensionOptionCreateAsDriving);

	NXOpen::Annotations::Dimension *dimension9;
	dimension9 = sketchDimensionalConstraint9->AssociatedDimension();

	theSession->ActiveSketch()->Update();

	// ----------------------------------------------
	//   插入(S)->草图曲线(S)->直线(L)...
	// ----------------------------------------------

	NXOpen::Expression *expression331;
	expression331 = workPart->Expressions()->CreateSystemExpression("120");

	NXOpen::Expression *expression332;
	expression332 = workPart->Expressions()->CreateSystemExpression("30");

	NXOpen::Point3d startPoint11(0.0, 0.0, 0.0);
	NXOpen::Point3d endPoint11(0.0, 103.92304845413265, 59.999999999999957);
	NXOpen::Line *line13;
	line13 = workPart->Curves()->CreateLine(startPoint11, endPoint11);

	theSession->ActiveSketch()->AddGeometry(line13, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry geom1_25;
	geom1_25.Geometry = line13;
	geom1_25.PointType = NXOpen::Sketch::ConstraintPointTypeStartVertex;
	geom1_25.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry geom2_25;
	geom2_25.Geometry = arc6;
	geom2_25.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
	geom2_25.SplineDefiningPointIndex = 0;
	NXOpen::SketchGeometricConstraint *sketchGeometricConstraint32;
	sketchGeometricConstraint32 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_25, geom2_25);

	NXOpen::Sketch::DimensionGeometry dimObject1_10;
	dimObject1_10.Geometry = line13;
	dimObject1_10.AssocType = NXOpen::Sketch::AssocTypeStartPoint;
	dimObject1_10.AssocValue = 0;
	dimObject1_10.HelpPoint.X = 0.0;
	dimObject1_10.HelpPoint.Y = 0.0;
	dimObject1_10.HelpPoint.Z = 0.0;
	dimObject1_10.View = nullNXOpen_NXObject;
	NXOpen::Sketch::DimensionGeometry dimObject2_5;
	dimObject2_5.Geometry = line13;
	dimObject2_5.AssocType = NXOpen::Sketch::AssocTypeEndPoint;
	dimObject2_5.AssocValue = 0;
	dimObject2_5.HelpPoint.X = 0.0;
	dimObject2_5.HelpPoint.Y = 0.0;
	dimObject2_5.HelpPoint.Z = 0.0;
	dimObject2_5.View = nullNXOpen_NXObject;
	NXOpen::Point3d dimOrigin10(0.0, 58.290298653777896, 19.038241143292943);
	NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint10;
	sketchDimensionalConstraint10 = theSession->ActiveSketch()->CreateDimension(NXOpen::Sketch::ConstraintTypeParallelDim, dimObject1_10, dimObject2_5, dimOrigin10, expression331, NXOpen::Sketch::DimensionOptionCreateAsDriving);

	NXOpen::SketchHelpedDimensionalConstraint *sketchHelpedDimensionalConstraint3(dynamic_cast<NXOpen::SketchHelpedDimensionalConstraint *>(sketchDimensionalConstraint10));
	NXOpen::Annotations::Dimension *dimension10;
	dimension10 = sketchHelpedDimensionalConstraint3->AssociatedDimension();

	NXOpen::Sketch::DimensionGeometry dimObject1_11;
	NXOpen::DatumAxis *datumAxis3(dynamic_cast<NXOpen::DatumAxis *>(workPart->Datums()->FindObject("SKETCH(9:1B) X axis")));
	dimObject1_11.Geometry = datumAxis3;
	dimObject1_11.AssocType = NXOpen::Sketch::AssocTypeEndPoint;
	dimObject1_11.AssocValue = 0;
	dimObject1_11.HelpPoint.X = 0.0;
	dimObject1_11.HelpPoint.Y = 28.574999999999999;
	dimObject1_11.HelpPoint.Z = 0.0;
	dimObject1_11.View = nullNXOpen_NXObject;
	NXOpen::Sketch::DimensionGeometry dimObject2_6;
	dimObject2_6.Geometry = line13;
	dimObject2_6.AssocType = NXOpen::Sketch::AssocTypeEndPoint;
	dimObject2_6.AssocValue = 0;
	dimObject2_6.HelpPoint.X = 0.0;
	dimObject2_6.HelpPoint.Y = 103.92304845413265;
	dimObject2_6.HelpPoint.Z = 59.999999999999957;
	dimObject2_6.View = nullNXOpen_NXObject;
	NXOpen::Point3d dimOrigin11(0.0, 50.461524227066327, 32.598076211353295);
	NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint11;
	sketchDimensionalConstraint11 = theSession->ActiveSketch()->CreateDimension(NXOpen::Sketch::ConstraintTypeAngularDim, dimObject1_11, dimObject2_6, dimOrigin11, expression332, NXOpen::Sketch::DimensionOptionCreateAsDriving);

	NXOpen::Annotations::Dimension *dimension11;
	dimension11 = sketchDimensionalConstraint11->AssociatedDimension();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(false);

	theSession->ActiveSketch()->Update();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(true);

	// ----------------------------------------------
	//   Dialog Begin Line
	// ----------------------------------------------
	// ----------------------------------------------
	//   插入(S)->草图曲线(S)->圆(C)...
	// ----------------------------------------------

	NXOpen::Expression *expression333;
	expression333 = workPart->Expressions()->CreateSystemExpression("30");

	NXOpen::NXMatrix *nXMatrix6;
	nXMatrix6 = theSession->ActiveSketch()->Orientation();

	NXOpen::Point3d center6(0.0, 40.988897429615264, 24.003339090728176);
	NXOpen::Arc *arc7;
	arc7 = workPart->Curves()->CreateArc(center6, nXMatrix6, 15.0, 0.0, (360.0 * DEGRA));

	theSession->ActiveSketch()->AddGeometry(arc7, NXOpen::Sketch::InferConstraintsOptionInferNoConstraints);

	NXOpen::Sketch::ConstraintGeometry conGeom1_1;
	conGeom1_1.Geometry = arc7;
	conGeom1_1.PointType = NXOpen::Sketch::ConstraintPointTypeArcCenter;
	conGeom1_1.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometry conGeom2_1;
	conGeom2_1.Geometry = arc6;
	conGeom2_1.PointType = NXOpen::Sketch::ConstraintPointTypeNone;
	conGeom2_1.SplineDefiningPointIndex = 0;
	NXOpen::Sketch::ConstraintGeometryHelp help1;
	help1.Type = NXOpen::Sketch::ConstraintGeometryHelpTypePoint;
	help1.Point.X = 0.0;
	help1.Point.Y = 40.988897429615264;
	help1.Point.Z = 24.003339090728176;
	help1.Parameter = 0.0;
	NXOpen::SketchHelpedGeometricConstraint *sketchHelpedGeometricConstraint1;
	sketchHelpedGeometricConstraint1 = theSession->ActiveSketch()->CreatePointOnCurveConstraint(conGeom1_1, conGeom2_1, help1);

	NXOpen::Sketch::DimensionGeometry dimObject1_12;
	dimObject1_12.Geometry = arc7;
	dimObject1_12.AssocType = NXOpen::Sketch::AssocTypeNone;
	dimObject1_12.AssocValue = 0;
	dimObject1_12.HelpPoint.X = 0.0;
	dimObject1_12.HelpPoint.Y = 0.0;
	dimObject1_12.HelpPoint.Z = 0.0;
	dimObject1_12.View = nullNXOpen_NXObject;
	NXOpen::Point3d dimOrigin12(0.0, 40.988897429615264, 28.222522041869222);
	NXOpen::SketchDimensionalConstraint *sketchDimensionalConstraint12;
	sketchDimensionalConstraint12 = theSession->ActiveSketch()->CreateDiameterDimension(dimObject1_12, dimOrigin12, expression333, NXOpen::Sketch::DimensionOptionCreateAsDriving);

	NXOpen::Annotations::Dimension *dimension12;
	dimension12 = sketchDimensionalConstraint12->AssociatedDimension();

	theSession->ActiveSketch()->Update();

	
	// ----------------------------------------------
	//   文件(F)->转换为参考
	// ----------------------------------------------

	NXOpen::ConvertToFromReferenceBuilder *convertToFromReferenceBuilder1;
	convertToFromReferenceBuilder1 = workPart->Sketches()->CreateConvertToFromReferenceBuilder();

	NXOpen::SelectNXObjectList *selectNXObjectList1;
	selectNXObjectList1 = convertToFromReferenceBuilder1->InputObjects();

	bool added18;
	added18 = selectNXObjectList1->Add(arc6);

	convertToFromReferenceBuilder1->SetOutputState(NXOpen::ConvertToFromReferenceBuilder::OutputTypeReference);

	NXOpen::NXObject *nXObject15;
	nXObject15 = convertToFromReferenceBuilder1->Commit();

	convertToFromReferenceBuilder1->Destroy();

	// ----------------------------------------------
	//    文件(F)->转换为参考
	// ----------------------------------------------

	NXOpen::ConvertToFromReferenceBuilder *convertToFromReferenceBuilder2;
	convertToFromReferenceBuilder2 = workPart->Sketches()->CreateConvertToFromReferenceBuilder();

	NXOpen::SelectNXObjectList *selectNXObjectList2;
	selectNXObjectList2 = convertToFromReferenceBuilder2->InputObjects();

	bool added19;
	added19 = selectNXObjectList2->Add(line13);

	convertToFromReferenceBuilder2->SetOutputState(NXOpen::ConvertToFromReferenceBuilder::OutputTypeReference);

	NXOpen::NXObject *nXObject16;
	nXObject16 = convertToFromReferenceBuilder2->Commit();

	convertToFromReferenceBuilder2->Destroy();

	// ----------------------------------------------
	//   插入(S)->设计特征(E)->拉伸(X)...
	// ----------------------------------------------

	NXOpen::Features::ExtrudeBuilder *extrudeBuilder4;
	extrudeBuilder4 = workPart->Features()->CreateExtrudeBuilder(nullNXOpen_Features_Feature);

	NXOpen::Section *section5;
	section5 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.050000000000000003);

	extrudeBuilder4->SetSection(section5);

	extrudeBuilder4->AllowSelfIntersectingSection(true);

	NXOpen::Expression *expression334;
	expression334 = workPart->Expressions()->CreateSystemExpressionWithUnits("2.00", unit2);

	extrudeBuilder4->SetDistanceTolerance(0.001);

	extrudeBuilder4->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);

	std::vector<NXOpen::Body *> targetBodies9(1);
	targetBodies9[0] = nullNXOpen_Body;
	extrudeBuilder4->BooleanOperation()->SetTargetBodies(targetBodies9);

	extrudeBuilder4->Limits()->StartExtend()->Value()->SetRightHandSide("-34");

	extrudeBuilder4->Limits()->EndExtend()->Value()->SetRightHandSide("25");

	extrudeBuilder4->BooleanOperation()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeSubtract);

	std::vector<NXOpen::Body *> targetBodies10(1);
	targetBodies10[0] = body1;
	extrudeBuilder4->BooleanOperation()->SetTargetBodies(targetBodies10);

	extrudeBuilder4->Draft()->FrontDraftAngle()->SetRightHandSide("2");

	extrudeBuilder4->Draft()->BackDraftAngle()->SetRightHandSide("2");

	extrudeBuilder4->Offset()->StartOffset()->SetRightHandSide("0");

	extrudeBuilder4->Offset()->EndOffset()->SetRightHandSide("5");

	NXOpen::GeometricUtilities::SmartVolumeProfileBuilder *smartVolumeProfileBuilder5;
	smartVolumeProfileBuilder5 = extrudeBuilder4->SmartVolumeProfile();

	smartVolumeProfileBuilder5->SetOpenProfileSmartVolumeOption(false);

	smartVolumeProfileBuilder5->SetCloseProfileRule(NXOpen::GeometricUtilities::SmartVolumeProfileBuilder::CloseProfileRuleTypeFci);

	section5->SetDistanceTolerance(0.001);

	section5->SetChainingTolerance(0.00095);

	section5->SetAllowedEntityTypes(NXOpen::Section::AllowTypesOnlyCurves);

	std::vector<NXOpen::ICurve *> curves5(1);
	curves5[0] = arc7;
	NXOpen::Point3d seedPoint5(0.0, 45.98889742961525, 24.003339090728172);
	NXOpen::RegionBoundaryRule *regionBoundaryRule5;
	regionBoundaryRule5 = workPart->ScRuleFactory()->CreateRuleRegionBoundary(theSession->ActiveSketch(), curves5, seedPoint5, 0.001);

	section5->AllowSelfIntersection(true);

	std::vector<NXOpen::SelectionIntentRule *> rules5(1);
	rules5[0] = regionBoundaryRule5;
	NXOpen::Point3d helpPoint5(0.0, 0.0, 0.0);
	section5->AddToSection(rules5, nullNXOpen_NXObject, nullNXOpen_NXObject, nullNXOpen_NXObject, helpPoint5, NXOpen::Section::ModeCreate, false);

	NXOpen::Direction *direction10;
	direction10 = workPart->Directions()->CreateDirection(theSession->ActiveSketch(), NXOpen::SenseForward, NXOpen::SmartObject::UpdateOptionWithinModeling);

	extrudeBuilder4->SetDirection(direction10);

	NXOpen::Expression *expression335;
	expression335 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);



	extrudeBuilder4->SetParentFeatureInternal(false);


	NXOpen::Features::Feature *feature8;
	feature8 = extrudeBuilder4->CommitFeature();

	NXOpen::Expression *expression336(extrudeBuilder4->Limits()->StartExtend()->Value());
	NXOpen::Expression *expression337(extrudeBuilder4->Limits()->EndExtend()->Value());
	extrudeBuilder4->Destroy();

	workPart->Expressions()->Delete(expression334);

	workPart->Expressions()->Delete(expression335);

	// ----------------------------------------------
	//  插入(S)->关联复制(A)->阵列特征(A)...
	// ----------------------------------------------

	NXOpen::Features::PatternFeatureBuilder *patternFeatureBuilder2;
	patternFeatureBuilder2 = workPart->Features()->CreatePatternFeatureBuilder(nullNXOpen_Features_Feature);

	NXOpen::Expression *expression338;
	expression338 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression339;
	expression339 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Point3d origin19(0.0, 0.0, 0.0);
	NXOpen::Vector3d normal10(0.0, 0.0, 1.0);
	NXOpen::Plane *plane10;
	plane10 = workPart->Planes()->CreatePlane(origin19, normal10, NXOpen::SmartObject::UpdateOptionWithinModeling);

	patternFeatureBuilder2->PatternService()->MirrorDefinition()->SetNewPlane(plane10);

	NXOpen::Expression *expression340;
	expression340 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression341;
	expression341 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Expression *expression342;
	expression342 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	patternFeatureBuilder2->PatternService()->SetPatternType(NXOpen::GeometricUtilities::PatternDefinition::PatternEnumCircular);

	patternFeatureBuilder2->PatternService()->PatternFill()->FillMargin()->SetRightHandSide("0");

	patternFeatureBuilder2->PatternService()->PatternOrientation()->SetCircularOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);

	patternFeatureBuilder2->PatternService()->PatternOrientation()->SetAlongOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumNormalToPath);

	patternFeatureBuilder2->PatternService()->PatternOrientation()->SetPolygonOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);

	patternFeatureBuilder2->PatternService()->PatternOrientation()->SetSpiralOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);

	patternFeatureBuilder2->PatternService()->PatternOrientation()->SetMirrorOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);

	patternFeatureBuilder2->PatternService()->PatternOrientation()->SetHelixOrientationOption(NXOpen::GeometricUtilities::PatternOrientation::EnumFollowPattern);

	patternFeatureBuilder2->PatternService()->PatternOrientation()->AlongPathRotationAngle()->SetRightHandSide("0");

	patternFeatureBuilder2->PatternService()->RectangularDefinition()->XSpacing()->NCopies()->SetRightHandSide("2");

	patternFeatureBuilder2->PatternService()->RectangularDefinition()->XSpacing()->PitchDistance()->SetRightHandSide("10");

	patternFeatureBuilder2->PatternService()->RectangularDefinition()->XSpacing()->SpanDistance()->SetRightHandSide("100");

	patternFeatureBuilder2->PatternService()->RectangularDefinition()->YSpacing()->NCopies()->SetRightHandSide("1");

	patternFeatureBuilder2->PatternService()->RectangularDefinition()->YSpacing()->PitchDistance()->SetRightHandSide("10");

	patternFeatureBuilder2->PatternService()->RectangularDefinition()->YSpacing()->SpanDistance()->SetRightHandSide("100");

	patternFeatureBuilder2->PatternService()->RectangularDefinition()->HorizontalRef()->RotationAngle()->SetRightHandSide("0");

	patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->SetSpaceType(NXOpen::GeometricUtilities::PatternSpacing::SpacingTypeSpan);

	patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->NCopies()->SetRightHandSide("3");

	patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->PitchDistance()->SetRightHandSide("10");

	patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->PitchAngle()->SetRightHandSide("360");

	patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->SpanAngle()->SetRightHandSide("360");

	patternFeatureBuilder2->PatternService()->CircularDefinition()->RadialSpacing()->NCopies()->SetRightHandSide("1");

	patternFeatureBuilder2->PatternService()->CircularDefinition()->RadialSpacing()->PitchDistance()->SetRightHandSide("10");

	patternFeatureBuilder2->PatternService()->CircularDefinition()->RadialSpacing()->SpanDistance()->SetRightHandSide("100");

	patternFeatureBuilder2->PatternService()->CircularDefinition()->HorizontalRef()->RotationAngle()->SetRightHandSide("0");

	patternFeatureBuilder2->PatternService()->AlongPathDefinition()->SetXPathOption(NXOpen::GeometricUtilities::AlongPathPattern::PathOptionsOffset);

	patternFeatureBuilder2->PatternService()->AlongPathDefinition()->XOnPathSpacing()->NCopies()->SetRightHandSide("2");

	patternFeatureBuilder2->PatternService()->AlongPathDefinition()->XOnPathSpacing()->OnPathPitchDistance()->Expression()->SetRightHandSide("50");

	patternFeatureBuilder2->PatternService()->AlongPathDefinition()->XOnPathSpacing()->OnPathSpanDistance()->Expression()->SetRightHandSide("100");

	patternFeatureBuilder2->PatternService()->AlongPathDefinition()->SetYDirectionOption(NXOpen::GeometricUtilities::AlongPathPattern::YDirectionOptionsSection);

	patternFeatureBuilder2->PatternService()->AlongPathDefinition()->SetYPathOption(NXOpen::GeometricUtilities::AlongPathPattern::PathOptionsOffset);

	patternFeatureBuilder2->PatternService()->AlongPathDefinition()->YOnPathSpacing()->NCopies()->SetRightHandSide("1");

	patternFeatureBuilder2->PatternService()->AlongPathDefinition()->YOnPathSpacing()->OnPathPitchDistance()->Expression()->SetRightHandSide("50");

	patternFeatureBuilder2->PatternService()->AlongPathDefinition()->YOnPathSpacing()->OnPathSpanDistance()->Expression()->SetRightHandSide("100");

	patternFeatureBuilder2->PatternService()->AlongPathDefinition()->YSpacing()->NCopies()->SetRightHandSide("1");

	patternFeatureBuilder2->PatternService()->AlongPathDefinition()->YSpacing()->PitchDistance()->SetRightHandSide("10");

	patternFeatureBuilder2->PatternService()->AlongPathDefinition()->YSpacing()->SpanDistance()->SetRightHandSide("100");

	patternFeatureBuilder2->PatternService()->SpiralDefinition()->NumberOfTurns()->SetRightHandSide("1");

	patternFeatureBuilder2->PatternService()->SpiralDefinition()->TotalAngle()->SetRightHandSide("360");

	patternFeatureBuilder2->PatternService()->SpiralDefinition()->RadialPitch()->SetRightHandSide("50");

	patternFeatureBuilder2->PatternService()->SpiralDefinition()->PitchAlongSpiral()->NCopies()->SetRightHandSide("2");

	patternFeatureBuilder2->PatternService()->SpiralDefinition()->PitchAlongSpiral()->OnPathPitchDistance()->Expression()->SetRightHandSide("50");

	patternFeatureBuilder2->PatternService()->SpiralDefinition()->PitchAlongSpiral()->OnPathSpanDistance()->Expression()->SetRightHandSide("100");

	patternFeatureBuilder2->PatternService()->SpiralDefinition()->HorizontalRef()->RotationAngle()->SetRightHandSide("0");

	patternFeatureBuilder2->PatternService()->PolygonDefinition()->PolygonSpacing()->NCopies()->SetRightHandSide("4");

	patternFeatureBuilder2->PatternService()->PolygonDefinition()->PolygonSpacing()->PitchDistance()->SetRightHandSide("25");

	patternFeatureBuilder2->PatternService()->PolygonDefinition()->PolygonSpacing()->SpanAngle()->SetRightHandSide("360");

	patternFeatureBuilder2->PatternService()->PolygonDefinition()->NumberOfSides()->SetRightHandSide("6");

	patternFeatureBuilder2->PatternService()->PolygonDefinition()->RadialSpacing()->NCopies()->SetRightHandSide("1");

	patternFeatureBuilder2->PatternService()->PolygonDefinition()->RadialSpacing()->PitchDistance()->SetRightHandSide("10");

	patternFeatureBuilder2->PatternService()->PolygonDefinition()->RadialSpacing()->SpanDistance()->SetRightHandSide("100");

	patternFeatureBuilder2->PatternService()->PolygonDefinition()->HorizontalRef()->RotationAngle()->SetRightHandSide("0");

	patternFeatureBuilder2->PatternService()->HelixDefinition()->CountOfInstances()->SetRightHandSide("6");

	patternFeatureBuilder2->PatternService()->HelixDefinition()->NumberOfTurns()->SetRightHandSide("2");

	patternFeatureBuilder2->PatternService()->HelixDefinition()->AnglePitch()->SetRightHandSide("30");

	patternFeatureBuilder2->PatternService()->HelixDefinition()->DistancePitch()->SetRightHandSide("10");

	patternFeatureBuilder2->PatternService()->HelixDefinition()->HelixPitch()->SetRightHandSide("50");

	patternFeatureBuilder2->PatternService()->HelixDefinition()->HelixSpan()->SetRightHandSide("100");

	patternFeatureBuilder2->SetPatternMethod(NXOpen::Features::PatternFeatureBuilder::PatternMethodOptionsVariational);

	NXOpen::Point3d origin20(0.0, 0.0, 0.0);
	NXOpen::Vector3d vector6(1.0, 0.0, 0.0);
	NXOpen::Direction *direction11;
	direction11 = workPart->Directions()->CreateDirection(origin20, vector6, NXOpen::SmartObject::UpdateOptionWithinModeling);

	patternFeatureBuilder2->PatternService()->CircularDefinition()->HorizontalRef()->SetHorizontalRefVector(direction11);

	NXOpen::Expression *expression343;
	expression343 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);


	std::vector<NXOpen::Features::Feature *> objects17(1);
	NXOpen::Features::Extrude *extrude2(dynamic_cast<NXOpen::Features::Extrude *>(feature8));
	objects17[0] = extrude2;
	bool added20;
	added20 = patternFeatureBuilder2->FeatureList()->Add(objects17);

	// 参考点 (39.275865, 20.259289, -5.500127) 从选定特征自动判断。
	NXOpen::Point3d coordinates13(5.5000000000000053, 40.988897429615257, 24.003339090728172);
	NXOpen::Point *point64;
	point64 = workPart->Points()->CreatePoint(coordinates13);

	patternFeatureBuilder2->ReferencePointService()->SetPoint(point64);

	NXOpen::Expression *expression344;
	expression344 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Point3d origin21(0.0, 0.0, 0.0);
	NXOpen::Vector3d vector7(1.0, 0.0, 0.0);
	NXOpen::Direction *direction12;
	direction12 = workPart->Directions()->CreateDirection(origin21, vector7, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Axis *axis3;
	axis3 = workPart->Axes()->CreateAxis(nullNXOpen_Point, direction12, NXOpen::SmartObject::UpdateOptionWithinModeling);

	patternFeatureBuilder2->PatternService()->CircularDefinition()->SetRotationAxis(axis3);

	NXOpen::Expression *expression345;
	expression345 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

	NXOpen::Point *point65;
	point65 = workPart->Points()->CreatePoint(point47, nullNXOpen_Xform, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::NXObject *nXObject17;
	NXOpen::Xform *xform5;
	xform5 = workPart->Xforms()->CreateExtractXform(point47, NXOpen::SmartObject::UpdateOptionWithinModeling, false, &nXObject17);

	NXOpen::Point *point66(dynamic_cast<NXOpen::Point *>(nXObject17));
	NXOpen::Point *point67;
	point67 = workPart->Points()->CreatePoint(point66, nullNXOpen_Xform, NXOpen::SmartObject::UpdateOptionWithinModeling);

	NXOpen::Point *point68;
	point68 = axis3->Point();

	axis3->SetPoint(point67);


	patternFeatureBuilder2->SetParentFeatureInternal(false);

	NXOpen::NXObject *nXObject18;
	nXObject18 = patternFeatureBuilder2->Commit();

	NXOpen::Expression *expression346(patternFeatureBuilder2->PatternService()->CircularDefinition()->RadialSpacing()->NCopies());
	NXOpen::Expression *expression347(patternFeatureBuilder2->PatternService()->CircularDefinition()->RadialSpacing()->SpanDistance());
	NXOpen::Expression *expression348(patternFeatureBuilder2->PatternService()->CircularDefinition()->RadialSpacing()->PitchDistance());
	NXOpen::Expression *expression349(patternFeatureBuilder2->PatternService()->CircularDefinition()->HorizontalRef()->RotationAngle());
	NXOpen::Expression *expression350(patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->NCopies());
	NXOpen::Expression *expression351(patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->SpanAngle());
	NXOpen::Expression *expression352(patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->PitchDistance());
	NXOpen::Expression *expression353(patternFeatureBuilder2->PatternService()->CircularDefinition()->AngularSpacing()->PitchAngle());
	patternFeatureBuilder2->Destroy();

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression341);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	workPart->Expressions()->Delete(expression345);

	workPart->Expressions()->Delete(expression338);

	workPart->Expressions()->Delete(expression339);

	try
	{
		// 表达式仍然在使用中。
		workPart->Expressions()->Delete(expression340);
	}
	catch (const NXOpen::NXException &ex)
	{
		ex.AssertErrorCode(1050029);
	}

	workPart->Expressions()->Delete(expression342);

	workPart->Expressions()->Delete(expression344);

	workPart->Expressions()->Delete(expression343);
}
