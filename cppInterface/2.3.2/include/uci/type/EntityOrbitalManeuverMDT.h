/** @file EntityOrbitalManeuverMDT.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:07 PM
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

#ifndef UCI_TYPE_ENTITYORBITALMANEUVERMDT_H
#define UCI_TYPE_ENTITYORBITALMANEUVERMDT_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/UnsignedIntAccessor.h"
#include "../base/export.h"
#include "CapabilityID_Type.h"
#include "ConfidenceLevelEnum.h"
#include "DateTimeRangeType.h"
#include "EntityID_Type.h"
#include "ManeuverSummaryType.h"
#include "NotificationSourceType.h"
#include "ObservationMeasurementReportID_Type.h"
#include "OrbitalManeuverID_Type.h"
#include "OrbitalManeuverStateEnum.h"

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

/** This type indicates all of the message data associated with the EntityOrbitalManeuver message. */
class EntityOrbitalManeuverMDT : public virtual uci::base::Accessor {
public:

  /** This method constructs a new EntityOrbitalManeuverMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityOrbitalManeuverMDT.
    */
  static UCI_EXPORT EntityOrbitalManeuverMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EntityOrbitalManeuverMDT initializing the data accessed by the new
    * EntityOrbitalManeuverMDT using the data accessed by the specified EntityOrbitalManeuverMDT (cloning).
    *
    * @param accessor The EntityOrbitalManeuverMDT that provides access to the data that is to be used to initialize the
    *      data accessed by the new created EntityOrbitalManeuverMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityOrbitalManeuverMDT.
    */
  static UCI_EXPORT EntityOrbitalManeuverMDT& create(const EntityOrbitalManeuverMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EntityOrbitalManeuverMDT. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The EntityOrbitalManeuverMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EntityOrbitalManeuverMDT& accessor);

  /** Returns this accessor's type constant, i.e. entityOrbitalManeuverMDT.
    *
    * @return This accessor's type constant, i.e. entityOrbitalManeuverMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::entityOrbitalManeuverMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of EntityOrbitalManeuverMDT.
    *
    * @return The version that was initialized from the uci:version attribute of EntityOrbitalManeuverMDT.
    */
  static std::string getUCITypeVersion() {
    return "002.000.001.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EntityOrbitalManeuverMDT& accessor) = 0;

  /** Indicates the unique ID of an ObservationMeasurementReport associated with the maneuver. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ObservationMeasurementReportID_Type, uci::type::accessorType::observationMeasurementReportID_Type> ObservationMeasurementReportID;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ManeuverID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ManeuverID.
    */
  virtual const uci::type::OrbitalManeuverID_Type& getManeuverID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ManeuverID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ManeuverID.
    */
  virtual uci::type::OrbitalManeuverID_Type& getManeuverID() = 0;

  /** Sets the complex content identified by ManeuverID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ManeuverID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& setManeuverID(const uci::type::OrbitalManeuverID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by ManeuverState.
    *
    * @return A const reference to the value of the enumeration identified by ManeuverState.
    */
  virtual const uci::type::OrbitalManeuverStateEnum& getManeuverState() const = 0;

  /** Returns a reference to the value of the enumeration identified by ManeuverState.
    *
    * @return A reference to the value of the enumeration identified by ManeuverState.
    */
  virtual uci::type::OrbitalManeuverStateEnum& getManeuverState() = 0;

  /** Sets the value of the enumeration identified by ManeuverState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& setManeuverState(const uci::type::OrbitalManeuverStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by ManeuverState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& setManeuverState(uci::type::OrbitalManeuverStateEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the value of the enumeration identified by ManeuverStateConfidence.
    *
    * @return A const reference to the value of the enumeration identified by ManeuverStateConfidence.
    */
  virtual const uci::type::ConfidenceLevelEnum& getManeuverStateConfidence() const = 0;

  /** Returns a reference to the value of the enumeration identified by ManeuverStateConfidence.
    *
    * @return A reference to the value of the enumeration identified by ManeuverStateConfidence.
    */
  virtual uci::type::ConfidenceLevelEnum& getManeuverStateConfidence() = 0;

  /** Sets the value of the enumeration identified by ManeuverStateConfidence.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& setManeuverStateConfidence(const uci::type::ConfidenceLevelEnum& value) = 0;

  /** Sets the value of the enumeration identified by ManeuverStateConfidence.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& setManeuverStateConfidence(uci::type::ConfidenceLevelEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by ManeuverStateConfidence exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ManeuverStateConfidence is enabled or not.
    */
  virtual bool hasManeuverStateConfidence() const = 0;

  /** Enables the Element identified by ManeuverStateConfidence.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by ManeuverStateConfidence.
    */
  virtual uci::type::ConfidenceLevelEnum& enableManeuverStateConfidence(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ManeuverStateConfidence.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& clearManeuverStateConfidence() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by EntityID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by EntityID.
    */
  virtual const uci::type::EntityID_Type& getEntityID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by EntityID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by EntityID.
    */
  virtual uci::type::EntityID_Type& getEntityID() = 0;

  /** Sets the complex content identified by EntityID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by EntityID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& setEntityID(const uci::type::EntityID_Type& value) = 0;

  /** Enables the Element identified by EntityID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available for the element. The use of
    *      this parameter provides support for inheritable types. This parameter defaults to uci::base::accessorType::null
    *      that is used to indicate that the access methods associated with the element shall provide access to data of the
    *      type that was specified for that element in the OMS schema, i.e. the element's base type. If specified, this
    *      field must either be a type ID associated with the element's base type or a type ID associated with a type that
    *      is derived from the element's base type.
    * @return A reference to the accessor that provides access to the complex content identified by EntityID.
    */
  virtual uci::type::EntityID_Type& enableEntityID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Source.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Source.
    */
  virtual const uci::type::NotificationSourceType& getSource() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Source.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Source.
    */
  virtual uci::type::NotificationSourceType& getSource() = 0;

  /** Sets the complex content identified by Source to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Source.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& setSource(const uci::type::NotificationSourceType& value) = 0;

  /** Returns whether the Element identified by Source exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Source is enabled or not.
    */
  virtual bool hasSource() const = 0;

  /** Enables the Element identified by Source.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Source.
    */
  virtual uci::type::NotificationSourceType& enableSource(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Source.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& clearSource() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Maneuver.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Maneuver.
    */
  virtual const uci::type::ManeuverSummaryType& getManeuver() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Maneuver.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Maneuver.
    */
  virtual uci::type::ManeuverSummaryType& getManeuver() = 0;

  /** Sets the complex content identified by Maneuver to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Maneuver.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& setManeuver(const uci::type::ManeuverSummaryType& value) = 0;

  /** Returns whether the Element identified by Maneuver exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Maneuver is enabled or not.
    */
  virtual bool hasManeuver() const = 0;

  /** Enables the Element identified by Maneuver.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Maneuver.
    */
  virtual uci::type::ManeuverSummaryType& enableManeuver(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Maneuver.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& clearManeuver() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by DetectionTime.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by DetectionTime.
    */
  virtual const uci::type::DateTimeRangeType& getDetectionTime() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by DetectionTime.
    *
    * @return A reference to the accessor that provides access to the complex content identified by DetectionTime.
    */
  virtual uci::type::DateTimeRangeType& getDetectionTime() = 0;

  /** Sets the complex content identified by DetectionTime to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DetectionTime.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& setDetectionTime(const uci::type::DateTimeRangeType& value) = 0;

  /** Returns whether the Element identified by DetectionTime exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by DetectionTime is enabled or not.
    */
  virtual bool hasDetectionTime() const = 0;

  /** Enables the Element identified by DetectionTime.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by DetectionTime.
    */
  virtual uci::type::DateTimeRangeType& enableDetectionTime(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by DetectionTime.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& clearDetectionTime() = 0;

  /** Returns the value of the SimplePrimitive data type identified by StateObservations.
    *
    * @return The value of the simple primitive data type identified by StateObservations.
    */
  virtual xs::UnsignedInt getStateObservations() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by StateObservations.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& setStateObservations(xs::UnsignedInt value) = 0;

  /** Returns whether the Element identified by StateObservations exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by StateObservations is enabled or not.
    */
  virtual bool hasStateObservations() const = 0;

  /** Clears (disabled) the Element identified by StateObservations.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& clearStateObservations() = 0;

  /** Returns a const reference to the bounded list identified by ObservationMeasurementReportID.
    *
    * @return A const reference to the bounded list identified by ObservationMeasurementReportID.
    */
  virtual const uci::type::EntityOrbitalManeuverMDT::ObservationMeasurementReportID& getObservationMeasurementReportID() const = 0;

  /** Returns a reference to the bounded list identified by ObservationMeasurementReportID.
    *
    * @return A reference to the bounded list identified by ObservationMeasurementReportID.
    */
  virtual uci::type::EntityOrbitalManeuverMDT::ObservationMeasurementReportID& getObservationMeasurementReportID() = 0;

  /** Sets the bounded list identified by ObservationMeasurementReportID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& setObservationMeasurementReportID(const uci::type::EntityOrbitalManeuverMDT::ObservationMeasurementReportID& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * DetectorCapabilityID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      DetectorCapabilityID.
    */
  virtual const uci::type::CapabilityID_Type& getDetectorCapabilityID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by DetectorCapabilityID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by DetectorCapabilityID.
    */
  virtual uci::type::CapabilityID_Type& getDetectorCapabilityID() = 0;

  /** Sets the complex content identified by DetectorCapabilityID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DetectorCapabilityID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& setDetectorCapabilityID(const uci::type::CapabilityID_Type& value) = 0;

  /** Returns whether the Element identified by DetectorCapabilityID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by DetectorCapabilityID is enabled or not.
    */
  virtual bool hasDetectorCapabilityID() const = 0;

  /** Enables the Element identified by DetectorCapabilityID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by DetectorCapabilityID.
    */
  virtual uci::type::CapabilityID_Type& enableDetectorCapabilityID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by DetectorCapabilityID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& clearDetectorCapabilityID() = 0;

  /** Returns the value of the SimplePrimitive data type identified by ManeuverSolutionIteration.
    *
    * @return The value of the simple primitive data type identified by ManeuverSolutionIteration.
    */
  virtual xs::UnsignedInt getManeuverSolutionIteration() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ManeuverSolutionIteration.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& setManeuverSolutionIteration(xs::UnsignedInt value) = 0;

  /** Returns whether the Element identified by ManeuverSolutionIteration exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ManeuverSolutionIteration is enabled or not.
    */
  virtual bool hasManeuverSolutionIteration() const = 0;

  /** Clears (disabled) the Element identified by ManeuverSolutionIteration.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityOrbitalManeuverMDT& clearManeuverSolutionIteration() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EntityOrbitalManeuverMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~EntityOrbitalManeuverMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EntityOrbitalManeuverMDT to copy from.
    */
  EntityOrbitalManeuverMDT(const EntityOrbitalManeuverMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EntityOrbitalManeuverMDT to the contents of the
    * EntityOrbitalManeuverMDT on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The EntityOrbitalManeuverMDT on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this EntityOrbitalManeuverMDT.
    * @return A reference to this EntityOrbitalManeuverMDT.
    */
  EntityOrbitalManeuverMDT& operator=(const EntityOrbitalManeuverMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ENTITYORBITALMANEUVERMDT_H

