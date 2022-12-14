//==============================================================================
//  WARNING!!  This file is overwritten by the Block Styler while generating
//  the automation code. Any modifications to this file will be lost after
//  generating the code again.
//
//       Filename:  F:\OneDrive\NX12Dev\Application\gear_inside\gear_inside.hpp
//
//        This file was generated by the NX Block Styler
//        Created by: haomjc
//              Version: NX 12
//              Date: 01-11-2019  (Format: mm-dd-yyyy)
//              Time: 16:23
//
//==============================================================================

#ifndef GEAR_INSIDE_H_INCLUDED
#define GEAR_INSIDE_H_INCLUDED

//------------------------------------------------------------------------------
//These includes are needed for the following template code
//------------------------------------------------------------------------------
#include <uf_defs.h>
#include <uf_ui_types.h>
#include <iostream>
#include <NXOpen/Session.hxx>
#include <NXOpen/UI.hxx>
#include <NXOpen/NXMessageBox.hxx>
#include <NXOpen/Callback.hxx>
#include <NXOpen/NXException.hxx>
#include <NXOpen/BlockStyler_UIBlock.hxx>
#include <NXOpen/BlockStyler_BlockDialog.hxx>
#include <NXOpen/BlockStyler_PropertyList.hxx>
#include <NXOpen/BlockStyler_Group.hxx>
#include <NXOpen/BlockStyler_Label.hxx>
#include <NXOpen/BlockStyler_DrawingArea.hxx>
#include <NXOpen/BlockStyler_LinearDimension.hxx>
#include <NXOpen/BlockStyler_IntegerBlock.hxx>

#include <uf_defs.h>
#include <NXOpen/NXException.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Annotations_AppendedTextBuilder.hxx>
#include <NXOpen/Annotations_BaseRadialDimensionBuilder.hxx>
#include <NXOpen/Annotations_BreakSettingsBuilder.hxx>
#include <NXOpen/Annotations_DiameterDimension.hxx>
#include <NXOpen/Annotations_Dimension.hxx>
#include <NXOpen/Annotations_DimensionMeasurementBuilder.hxx>
#include <NXOpen/Annotations_DimensionStyleBuilder.hxx>
#include <NXOpen/Annotations_DisplayStyleBuilder.hxx>
#include <NXOpen/Annotations_DrivingValueBuilder.hxx>
#include <NXOpen/Annotations_ForeshorteningSymbolSettingsBuilder.hxx>
#include <NXOpen/Annotations_FrameBarElementStyleBuilder.hxx>
#include <NXOpen/Annotations_FrameBarStyleBuilder.hxx>
#include <NXOpen/Annotations_HatchStyleBuilder.hxx>
#include <NXOpen/Annotations_HoleCalloutSettingsBuilder.hxx>
#include <NXOpen/Annotations_LetteringStyleBuilder.hxx>
#include <NXOpen/Annotations_LineArrowStyleBuilder.hxx>
#include <NXOpen/Annotations_OrdinateStyleBuilder.hxx>
#include <NXOpen/Annotations_OriginBuilder.hxx>
#include <NXOpen/Annotations_PlaneBuilder.hxx>
#include <NXOpen/Annotations_RadialStyleBuilder.hxx>
#include <NXOpen/Annotations_SingleSidedDisplayBuilder.hxx>
#include <NXOpen/Annotations_StyleBuilder.hxx>
#include <NXOpen/Annotations_SymbolStyleBuilder.hxx>
#include <NXOpen/Annotations_UnitsStyleBuilder.hxx>
#include <NXOpen/Arc.hxx>
#include <NXOpen/Assemblies_Component.hxx>
#include <NXOpen/AttributeManager.hxx>
#include <NXOpen/AttributePropertiesBaseBuilder.hxx>
#include <NXOpen/AttributePropertiesBuilder.hxx>
#include <NXOpen/Axis.hxx>
#include <NXOpen/AxisCollection.hxx>
#include <NXOpen/BasePart.hxx>
#include <NXOpen/Body.hxx>
#include <NXOpen/BodyCollection.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/CartesianCoordinateSystem.hxx>
#include <NXOpen/Conic.hxx>
#include <NXOpen/CoordinateSystem.hxx>
#include <NXOpen/CoordinateSystemCollection.hxx>
#include <NXOpen/CurveCollection.hxx>
#include <NXOpen/DateBuilder.hxx>
#include <NXOpen/DateItemBuilder.hxx>
#include <NXOpen/DateItemBuilderList.hxx>
#include <NXOpen/DatumAxis.hxx>
#include <NXOpen/DatumCollection.hxx>
#include <NXOpen/DatumPlane.hxx>
#include <NXOpen/Direction.hxx>
#include <NXOpen/DirectionCollection.hxx>
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/Drawings_DraftingView.hxx>
#include <NXOpen/Drawings_SelectDraftingView.hxx>
#include <NXOpen/Edge.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/ExpressionCollection.hxx>
#include <NXOpen/Face.hxx>
#include <NXOpen/FeatureGeneralPropertiesBuilder.hxx>
#include <NXOpen/Features_DatumCsys.hxx>
#include <NXOpen/Features_DatumCsysBuilder.hxx>
#include <NXOpen/Features_Extrude.hxx>
#include <NXOpen/Features_ExtrudeBuilder.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/Features_IContainerFeature.hxx>
#include <NXOpen/Features_PatternFeatureBuilder.hxx>
#include <NXOpen/Features_Revolve.hxx>
#include <NXOpen/Features_RevolveBuilder.hxx>
#include <NXOpen/Features_SelectFeatureList.hxx>
#include <NXOpen/Features_SketchFeature.hxx>
#include <NXOpen/GeometricUtilities_AlongPathPattern.hxx>
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
#include <NXOpen/GeometricUtilities_Limits.hxx>
#include <NXOpen/GeometricUtilities_MirrorPattern.hxx>
#include <NXOpen/GeometricUtilities_MultiDraft.hxx>
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
#include <NXOpen/GeometricUtilities_SimpleDraft.hxx>
#include <NXOpen/GeometricUtilities_SmartVolumeProfileBuilder.hxx>
#include <NXOpen/GeometricUtilities_SpiralPattern.hxx>
#include <NXOpen/ICurve.hxx>
#include <NXOpen/IPlane.hxx>
#include <NXOpen/IReferenceAxis.hxx>
#include <NXOpen/ISurface.hxx>
#include <NXOpen/InferSnapType.hxx>
#include <NXOpen/Line.hxx>
#include <NXOpen/LineCollection.hxx>
#include <NXOpen/ModelingView.hxx>
#include <NXOpen/ModelingViewCollection.hxx>
#include <NXOpen/NXMatrix.hxx>
#include <NXOpen/NXObject.hxx>
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
#include <NXOpen/PropertiesManager.hxx>
#include <NXOpen/RegionBoundaryRule.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/ScRuleFactory.hxx>
#include <NXOpen/Scalar.hxx>
#include <NXOpen/ScalarCollection.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SectionCollection.hxx>
#include <NXOpen/SelectCoordinateSystemList.hxx>
#include <NXOpen/SelectDisplayableObject.hxx>
#include <NXOpen/SelectIReferenceAxis.hxx>
#include <NXOpen/SelectISurface.hxx>
#include <NXOpen/SelectNXObject.hxx>
#include <NXOpen/SelectNXObjectList.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/SelectionIntentRule.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Sketch.hxx>
#include <NXOpen/SketchAlongPathBuilder.hxx>
#include <NXOpen/SketchCollection.hxx>
#include <NXOpen/SketchDimensionalConstraint.hxx>
#include <NXOpen/SketchGeometricConstraint.hxx>
#include <NXOpen/SketchHelpedDimensionalConstraint.hxx>
#include <NXOpen/SketchHelpedGeometricConstraint.hxx>
#include <NXOpen/SketchInPlaceBuilder.hxx>
#include <NXOpen/SketchRadialDimensionBuilder.hxx>
#include <NXOpen/SketchTangentConstraint.hxx>
#include <NXOpen/SmartObject.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/Unit.hxx>
#include <NXOpen/UnitCollection.hxx>
#include <NXOpen/Update.hxx>
#include <NXOpen/View.hxx>
#include <NXOpen/Xform.hxx>
#include <NXOpen/XformCollection.hxx>

//------------------------------------------------------------------------------
// Namespaces needed for following template
//------------------------------------------------------------------------------
using namespace std;
using namespace NXOpen;
using namespace NXOpen::BlockStyler;

class DllExport gear_inside
{
    // class members
public:
    static Session *theSession;
    static UI *theUI;
    gear_inside();
    ~gear_inside();
    int Show();
    
    //----------------------- BlockStyler Callback Prototypes ---------------------
    // The following member function prototypes define the callbacks 
    // specified in your BlockStyler dialog.  The empty implementation
    // of these prototypes is provided in the gear_inside.cpp file. 
    // You are REQUIRED to write the implementation for these functions.
    //------------------------------------------------------------------------------
    void initialize_cb();
    void dialogShown_cb();
    int apply_cb();
    int ok_cb();
    int update_cb(NXOpen::BlockStyler::UIBlock* block);
    PropertyList* GetBlockProperties(const char *blockID);
    
private:
    const char* theDlxFileName;
    NXOpen::BlockStyler::BlockDialog* theDialog;
    NXOpen::BlockStyler::Group* group0;// Block type: Group
    NXOpen::BlockStyler::Label* label0;// Block type: Label
    NXOpen::BlockStyler::DrawingArea* drawingArea0;// Block type: Drawing Area
    NXOpen::BlockStyler::LinearDimension* linear_dim0;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim01;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim02;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim03;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim04;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim05;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim06;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim07;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim08;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim09;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim010;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim011;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim012;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim013;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim014;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim015;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim016;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim017;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_dim018;// Block type: Linear Dim
    NXOpen::BlockStyler::IntegerBlock* integer0;// Block type: Integer
    
};
#endif //GEAR_INSIDE_H_INCLUDED
