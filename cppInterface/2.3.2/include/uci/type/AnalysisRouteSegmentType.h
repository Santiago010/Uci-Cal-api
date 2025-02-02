/** @file AnalysisRouteSegmentType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:06 PM
 *
 * <pre>
 * Unclassified               U N C L A S S I F I E D               Unclassified
 *
 * DISTRIBUTION STATEMENT D: Distribution authorized to Department of Defense
 *    and U.S. DoD contractors only, Critical Technology, Export Controlled,
 *    26 January 2023. Other requests for this document shall be referred to
 *    AFLCMC/XA (OAMO), Wright-Patterson AFB OH 45433.
 *
 * DESTRUCTION NOTICE: Destroy by any method that will prevent disclosure of
 *    contents or reconstruction of the document.
 *
 * WARNING - This document contains technical data whose export is restricted
 *    by the Arms Export Control Act (Section 2751 of Title 22, United States
 *    Code) or the Export Control Reform Act of 2018 (Chapter 58 Sections
 *    4801-4852 of Title 50, United States Code). Violations of these export
 *    laws are subject to severe criminal penalties. Disseminate in accordance
 *    with provisions of DoD Directive 5230.25 and DoD Instruction 2040.02.
 *
 * Controlled by: USAF
 * Controlled by: AFLCMC/XA (OAMO)
 * CUI Category(ies): CTI, EXPT
 * Distribution Statement D
 * POC: Wayne Artuso, 937-713-5124
 *
 * CUI//SP-CTI/SP-EXPT
 * </pre>
 *
 */

#ifndef UCI_TYPE_ANALYSISROUTESEGMENTTYPE_H
#define UCI_TYPE_ANALYSISROUTESEGMENTTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "AnalysisRouteInformationType.h"
#include "InertialStateRelativeType.h"
#include "SegmentID_Type.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all base data types are declared */
namespace base {

class AbstractServiceBusConnection;

} // namespace base
} // namespace uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** The analysis information for a segment of a RoutePlan. See annotations in child elements for details. */
class AnalysisRouteSegmentType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new AnalysisRouteSegmentType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed AnalysisRouteSegmentType.
    */
  static UCI_EXPORT AnalysisRouteSegmentType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new AnalysisRouteSegmentType initializing the data accessed by the new
    * AnalysisRouteSegmentType using the data accessed by the specified AnalysisRouteSegmentType (cloning).
    *
    * @param accessor The AnalysisRouteSegmentType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created AnalysisRouteSegmentType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed AnalysisRouteSegmentType.
    */
  static UCI_EXPORT AnalysisRouteSegmentType& create(const AnalysisRouteSegmentType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified AnalysisRouteSegmentType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The AnalysisRouteSegmentType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(AnalysisRouteSegmentType& accessor);

  /** Returns this accessor's type constant, i.e. analysisRouteSegmentType.
    *
    * @return This accessor's type constant, i.e. analysisRouteSegmentType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::analysisRouteSegmentType;
  }

  /** Returns the version that was initialized from the uci:version attribute of AnalysisRouteSegmentType.
    *
    * @return The version that was initialized from the uci:version attribute of AnalysisRouteSegmentType.
    */
  static std::string getUCITypeVersion() {
    return "002.001.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const AnalysisRouteSegmentType& accessor) = 0;

  /** Position data as would be flown for this segment starting at beginning of the segment and leading up to the end of
    * the segment. This field will be populated if an interval value is provided in the AnalysisRoute request. Position
    * data may be specified as either a geospatial point or relative to a separately defined reference frame. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::InertialStateRelativeType, uci::type::accessorType::inertialStateRelativeType> PositionalData;

  /** Returns a const reference to the accessor that provides access to the complex content identified by PathSegmentID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by PathSegmentID.
    */
  virtual const uci::type::SegmentID_Type& getPathSegmentID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by PathSegmentID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by PathSegmentID.
    */
  virtual uci::type::SegmentID_Type& getPathSegmentID() = 0;

  /** Sets the complex content identified by PathSegmentID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PathSegmentID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AnalysisRouteSegmentType& setPathSegmentID(const uci::type::SegmentID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SegmentAnalysis.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SegmentAnalysis.
    */
  virtual const uci::type::AnalysisRouteInformationType& getSegmentAnalysis() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SegmentAnalysis.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SegmentAnalysis.
    */
  virtual uci::type::AnalysisRouteInformationType& getSegmentAnalysis() = 0;

  /** Sets the complex content identified by SegmentAnalysis to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SegmentAnalysis.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AnalysisRouteSegmentType& setSegmentAnalysis(const uci::type::AnalysisRouteInformationType& value) = 0;

  /** Returns whether the Element identified by SegmentAnalysis exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SegmentAnalysis is enabled or not.
    */
  virtual bool hasSegmentAnalysis() const = 0;

  /** Enables the Element identified by SegmentAnalysis.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by SegmentAnalysis.
    */
  virtual uci::type::AnalysisRouteInformationType& enableSegmentAnalysis(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by SegmentAnalysis.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AnalysisRouteSegmentType& clearSegmentAnalysis() = 0;

  /** Returns a const reference to the bounded list identified by PositionalData.
    *
    * @return A const reference to the bounded list identified by PositionalData.
    */
  virtual const uci::type::AnalysisRouteSegmentType::PositionalData& getPositionalData() const = 0;

  /** Returns a reference to the bounded list identified by PositionalData.
    *
    * @return A reference to the bounded list identified by PositionalData.
    */
  virtual uci::type::AnalysisRouteSegmentType::PositionalData& getPositionalData() = 0;

  /** Sets the bounded list identified by PositionalData.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AnalysisRouteSegmentType& setPositionalData(const uci::type::AnalysisRouteSegmentType::PositionalData& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  AnalysisRouteSegmentType() {
  }

  /** The destructor [only available to derived classes]. */
  ~AnalysisRouteSegmentType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The AnalysisRouteSegmentType to copy from.
    */
  AnalysisRouteSegmentType(const AnalysisRouteSegmentType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this AnalysisRouteSegmentType to the contents of the
    * AnalysisRouteSegmentType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The AnalysisRouteSegmentType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this AnalysisRouteSegmentType.
    * @return A reference to this AnalysisRouteSegmentType.
    */
  AnalysisRouteSegmentType& operator=(const AnalysisRouteSegmentType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ANALYSISROUTESEGMENTTYPE_H

