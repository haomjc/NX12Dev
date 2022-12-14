//==============================================================================
//  WARNING!!  This file is overwritten by the Block Styler while generating
//  the automation code. Any modifications to this file will be lost after
//  generating the code again.
//
//       Filename:  F:\OneDrive\NX12Dev\Application\rollaway\rollaway\rollaway.hpp
//
//        This file was generated by the NX Block Styler
//        Created by: haomjc
//              Version: NX 12
//              Date: 01-03-2019  (Format: mm-dd-yyyy)
//              Time: 15:30
//
//==============================================================================

#ifndef ROLLAWAY_H_INCLUDED
#define ROLLAWAY_H_INCLUDED

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
#include <NXOpen/BlockStyler_Label.hxx>
#include <NXOpen/BlockStyler_LinearDimension.hxx>
#include <NXOpen/BlockStyler_Group.hxx>
#include <NXOpen/Sketch.hxx>

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

#include <uf_defs.h>
#include <NXOpen/NXException.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Arc.hxx>
#include <NXOpen/BasePart.hxx>
#include <NXOpen/Body.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/CurveFeatureRule.hxx>
#include <NXOpen/Direction.hxx>
#include <NXOpen/DirectionCollection.hxx>
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/ExpressionCollection.hxx>
#include <NXOpen/Features_ExtrudeBuilder.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/Features_SketchFeature.hxx>
#include <NXOpen/GeometricUtilities_BooleanOperation.hxx>
#include <NXOpen/GeometricUtilities_Extend.hxx>
#include <NXOpen/GeometricUtilities_FeatureOffset.hxx>
#include <NXOpen/GeometricUtilities_FeatureOptions.hxx>
#include <NXOpen/GeometricUtilities_Limits.hxx>
#include <NXOpen/GeometricUtilities_MultiDraft.hxx>
#include <NXOpen/GeometricUtilities_SimpleDraft.hxx>
#include <NXOpen/GeometricUtilities_SmartVolumeProfileBuilder.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/ScRuleFactory.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SectionCollection.hxx>
#include <NXOpen/SelectionIntentRule.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Sketch.hxx>
#include <NXOpen/SmartObject.hxx>
#include <NXOpen/Unit.hxx>

#include <string>
#include <sstream>
//------------------------------------------------------------------------------
// Namespaces needed for following template
//------------------------------------------------------------------------------
using namespace std;
using namespace NXOpen;
using namespace NXOpen::BlockStyler;

class DllExport rollaway
{
    // class members
public:
    static Session *theSession;
    static UI *theUI;
    rollaway();
    ~rollaway();
    int Show();
    
    //----------------------- BlockStyler Callback Prototypes ---------------------
    // The following member function prototypes define the callbacks 
    // specified in your BlockStyler dialog.  The empty implementation
    // of these prototypes is provided in the rollaway.cpp file. 
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
    NXOpen::BlockStyler::Label* label0;// Block type: Label
    NXOpen::BlockStyler::LinearDimension* linear_l;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_m;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_s;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_h;// Block type: Linear Dim
    NXOpen::BlockStyler::LinearDimension* linear_h1;// Block type: Linear Dim
    NXOpen::BlockStyler::Group* group0;// Block type: Group
    
};
#endif //ROLLAWAY_H_INCLUDED
