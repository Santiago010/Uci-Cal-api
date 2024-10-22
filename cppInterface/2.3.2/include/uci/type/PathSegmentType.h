/** @file PathSegmentType.h
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

#ifndef UCI_TYPE_PATHSEGMENTTYPE_H
#define UCI_TYPE_PATHSEGMENTTYPE_H

#include "../base/Accessor.h"
#include "../base/BooleanAccessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "AccelerationType.h"
#include "AngleType.h"
#include "CivilPathTerminatorType.h"
#include "ClimbType.h"
#include "ConditionalPathSegmentType.h"
#include "DistanceType.h"
#include "EndPointType.h"
#include "ForeignKeyType.h"
#include "InertialStateRelativeType.h"
#include "NextPathSegmentType.h"
#include "PathSegmentSourceEnum.h"
#include "PathSegmentSpeedType.h"
#include "RemarksType.h"
#include "SegmentID_Type.h"
#include "TimeWindowType.h"

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

/** See annotations in child elements and messages/elements that use this type for details. */
class PathSegmentType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PathSegmentType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PathSegmentType.
    */
  static UCI_EXPORT PathSegmentType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PathSegmentType initializing the data accessed by the new PathSegmentType using the data
    * accessed by the specified PathSegmentType (cloning).
    *
    * @param accessor The PathSegmentType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created PathSegmentType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PathSegmentType.
    */
  static UCI_EXPORT PathSegmentType& create(const PathSegmentType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PathSegmentType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The PathSegmentType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PathSegmentType& accessor);

  /** Returns this accessor's type constant, i.e. pathSegmentType.
    *
    * @return This accessor's type constant, i.e. pathSegmentType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::pathSegmentType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PathSegmentType.
    *
    * @return The version that was initialized from the uci:version attribute of PathSegmentType.
    */
  static std::string getUCITypeVersion() {
    return "003.001.003.002";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PathSegmentType& accessor) = 0;

  /** This element is used to specify one or more conditional PathSegment. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::ConditionalPathSegmentType, uci::type::accessorType::conditionalPathSegmentType> ConditionalPathSegment;

  /** This element is intended to provide detailed inertial state information at user defined increments within a path
    * segment. This element provides data which may be required for pre-mission analysis of a Route. Position data may be
    * specified as either a geospatial point or relative to a separately defined reference frame. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::InertialStateRelativeType, uci::type::accessorType::inertialStateRelativeType> InertialState;

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
  virtual uci::type::PathSegmentType& setPathSegmentID(const uci::type::SegmentID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by Source.
    *
    * @return A const reference to the value of the enumeration identified by Source.
    */
  virtual const uci::type::PathSegmentSourceEnum& getSource() const = 0;

  /** Returns a reference to the value of the enumeration identified by Source.
    *
    * @return A reference to the value of the enumeration identified by Source.
    */
  virtual uci::type::PathSegmentSourceEnum& getSource() = 0;

  /** Sets the value of the enumeration identified by Source.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setSource(const uci::type::PathSegmentSourceEnum& value) = 0;

  /** Sets the value of the enumeration identified by Source.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setSource(uci::type::PathSegmentSourceEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by EndPoint.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by EndPoint.
    */
  virtual const uci::type::EndPointType& getEndPoint() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by EndPoint.
    *
    * @return A reference to the accessor that provides access to the complex content identified by EndPoint.
    */
  virtual uci::type::EndPointType& getEndPoint() = 0;

  /** Sets the complex content identified by EndPoint to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by EndPoint.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setEndPoint(const uci::type::EndPointType& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Locked.
    *
    * @return The value of the simple primitive data type identified by Locked.
    */
  virtual xs::Boolean getLocked() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Locked.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setLocked(xs::Boolean value) = 0;

  /** Returns whether the Element identified by Locked exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Locked is enabled or not.
    */
  virtual bool hasLocked() const = 0;

  /** Clears (disabled) the Element identified by Locked.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& clearLocked() = 0;

  /** Returns the value of the SimplePrimitive data type identified by Modified.
    *
    * @return The value of the simple primitive data type identified by Modified.
    */
  virtual xs::Boolean getModified() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Modified.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setModified(xs::Boolean value) = 0;

  /** Returns whether the Element identified by Modified exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Modified is enabled or not.
    */
  virtual bool hasModified() const = 0;

  /** Clears (disabled) the Element identified by Modified.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& clearModified() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Speed.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Speed.
    */
  virtual const uci::type::PathSegmentSpeedType& getSpeed() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Speed.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Speed.
    */
  virtual uci::type::PathSegmentSpeedType& getSpeed() = 0;

  /** Sets the complex content identified by Speed to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Speed.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setSpeed(const uci::type::PathSegmentSpeedType& value) = 0;

  /** Returns whether the Element identified by Speed exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Speed is enabled or not.
    */
  virtual bool hasSpeed() const = 0;

  /** Enables the Element identified by Speed.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Speed.
    */
  virtual uci::type::PathSegmentSpeedType& enableSpeed(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Speed.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& clearSpeed() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * CivilPathTerminator.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      CivilPathTerminator.
    */
  virtual const uci::type::CivilPathTerminatorType& getCivilPathTerminator() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by CivilPathTerminator.
    *
    * @return A reference to the accessor that provides access to the complex content identified by CivilPathTerminator.
    */
  virtual uci::type::CivilPathTerminatorType& getCivilPathTerminator() = 0;

  /** Sets the complex content identified by CivilPathTerminator to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CivilPathTerminator.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setCivilPathTerminator(const uci::type::CivilPathTerminatorType& value) = 0;

  /** Returns whether the Element identified by CivilPathTerminator exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CivilPathTerminator is enabled or not.
    */
  virtual bool hasCivilPathTerminator() const = 0;

  /** Enables the Element identified by CivilPathTerminator.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by CivilPathTerminator.
    */
  virtual uci::type::CivilPathTerminatorType& enableCivilPathTerminator(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by CivilPathTerminator.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& clearCivilPathTerminator() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Climb.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Climb.
    */
  virtual const uci::type::ClimbType& getClimb() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Climb.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Climb.
    */
  virtual uci::type::ClimbType& getClimb() = 0;

  /** Sets the complex content identified by Climb to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Climb.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setClimb(const uci::type::ClimbType& value) = 0;

  /** Returns whether the Element identified by Climb exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Climb is enabled or not.
    */
  virtual bool hasClimb() const = 0;

  /** Enables the Element identified by Climb.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Climb.
    */
  virtual uci::type::ClimbType& enableClimb(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Climb.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& clearClimb() = 0;

  /** Returns the value of the SimplePrimitive data type identified by MaximumRoll.
    *
    * @return The value of the simple primitive data type identified by MaximumRoll.
    */
  virtual uci::type::AngleTypeValue getMaximumRoll() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by MaximumRoll.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setMaximumRoll(uci::type::AngleTypeValue value) = 0;

  /** Returns whether the Element identified by MaximumRoll exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by MaximumRoll is enabled or not.
    */
  virtual bool hasMaximumRoll() const = 0;

  /** Clears (disabled) the Element identified by MaximumRoll.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& clearMaximumRoll() = 0;

  /** Returns the value of the SimplePrimitive data type identified by Acceleration.
    *
    * @return The value of the simple primitive data type identified by Acceleration.
    */
  virtual uci::type::AccelerationTypeValue getAcceleration() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Acceleration.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setAcceleration(uci::type::AccelerationTypeValue value) = 0;

  /** Returns whether the Element identified by Acceleration exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Acceleration is enabled or not.
    */
  virtual bool hasAcceleration() const = 0;

  /** Clears (disabled) the Element identified by Acceleration.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& clearAcceleration() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by NextPathSegment.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by NextPathSegment.
    */
  virtual const uci::type::NextPathSegmentType& getNextPathSegment() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by NextPathSegment.
    *
    * @return A reference to the accessor that provides access to the complex content identified by NextPathSegment.
    */
  virtual uci::type::NextPathSegmentType& getNextPathSegment() = 0;

  /** Sets the complex content identified by NextPathSegment to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by NextPathSegment.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setNextPathSegment(const uci::type::NextPathSegmentType& value) = 0;

  /** Returns whether the Element identified by NextPathSegment exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by NextPathSegment is enabled or not.
    */
  virtual bool hasNextPathSegment() const = 0;

  /** Enables the Element identified by NextPathSegment.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by NextPathSegment.
    */
  virtual uci::type::NextPathSegmentType& enableNextPathSegment(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by NextPathSegment.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& clearNextPathSegment() = 0;

  /** Returns a const reference to the bounded list identified by ConditionalPathSegment.
    *
    * @return A const reference to the bounded list identified by ConditionalPathSegment.
    */
  virtual const uci::type::PathSegmentType::ConditionalPathSegment& getConditionalPathSegment() const = 0;

  /** Returns a reference to the bounded list identified by ConditionalPathSegment.
    *
    * @return A reference to the bounded list identified by ConditionalPathSegment.
    */
  virtual uci::type::PathSegmentType::ConditionalPathSegment& getConditionalPathSegment() = 0;

  /** Sets the bounded list identified by ConditionalPathSegment.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setConditionalPathSegment(const uci::type::PathSegmentType::ConditionalPathSegment& value) = 0;

  /** Returns a const reference to the bounded list identified by InertialState.
    *
    * @return A const reference to the bounded list identified by InertialState.
    */
  virtual const uci::type::PathSegmentType::InertialState& getInertialState() const = 0;

  /** Returns a reference to the bounded list identified by InertialState.
    *
    * @return A reference to the bounded list identified by InertialState.
    */
  virtual uci::type::PathSegmentType::InertialState& getInertialState() = 0;

  /** Sets the bounded list identified by InertialState.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setInertialState(const uci::type::PathSegmentType::InertialState& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * RequiredTimeOfArrival.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      RequiredTimeOfArrival.
    */
  virtual const uci::type::TimeWindowType& getRequiredTimeOfArrival() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by RequiredTimeOfArrival.
    *
    * @return A reference to the accessor that provides access to the complex content identified by RequiredTimeOfArrival.
    */
  virtual uci::type::TimeWindowType& getRequiredTimeOfArrival() = 0;

  /** Sets the complex content identified by RequiredTimeOfArrival to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by RequiredTimeOfArrival.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setRequiredTimeOfArrival(const uci::type::TimeWindowType& value) = 0;

  /** Returns whether the Element identified by RequiredTimeOfArrival exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RequiredTimeOfArrival is enabled or not.
    */
  virtual bool hasRequiredTimeOfArrival() const = 0;

  /** Enables the Element identified by RequiredTimeOfArrival.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by RequiredTimeOfArrival.
    */
  virtual uci::type::TimeWindowType& enableRequiredTimeOfArrival(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by RequiredTimeOfArrival.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& clearRequiredTimeOfArrival() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Remarks.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Remarks.
    */
  virtual const uci::type::RemarksType& getRemarks() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Remarks.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Remarks.
    */
  virtual uci::type::RemarksType& getRemarks() = 0;

  /** Sets the complex content identified by Remarks to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Remarks.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setRemarks(const uci::type::RemarksType& value) = 0;

  /** Returns whether the Element identified by Remarks exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Remarks is enabled or not.
    */
  virtual bool hasRemarks() const = 0;

  /** Enables the Element identified by Remarks.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Remarks.
    */
  virtual uci::type::RemarksType& enableRemarks(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Remarks.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& clearRemarks() = 0;

  /** Returns the value of the SimplePrimitive data type identified by RequiredNavigationPerformanceInMeters.
    *
    * @return The value of the simple primitive data type identified by RequiredNavigationPerformanceInMeters.
    */
  virtual uci::type::DistanceTypeValue getRequiredNavigationPerformanceInMeters() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by RequiredNavigationPerformanceInMeters.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setRequiredNavigationPerformanceInMeters(uci::type::DistanceTypeValue value) = 0;

  /** Returns whether the Element identified by RequiredNavigationPerformanceInMeters exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RequiredNavigationPerformanceInMeters is enabled or
    *      not.
    */
  virtual bool hasRequiredNavigationPerformanceInMeters() const = 0;

  /** Clears (disabled) the Element identified by RequiredNavigationPerformanceInMeters.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& clearRequiredNavigationPerformanceInMeters() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Fix_Identifier.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Fix_Identifier.
    */
  virtual const uci::type::ForeignKeyType& getFix_Identifier() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Fix_Identifier.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Fix_Identifier.
    */
  virtual uci::type::ForeignKeyType& getFix_Identifier() = 0;

  /** Sets the complex content identified by Fix_Identifier to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Fix_Identifier.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& setFix_Identifier(const uci::type::ForeignKeyType& value) = 0;

  /** Returns whether the Element identified by Fix_Identifier exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Fix_Identifier is enabled or not.
    */
  virtual bool hasFix_Identifier() const = 0;

  /** Enables the Element identified by Fix_Identifier.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Fix_Identifier.
    */
  virtual uci::type::ForeignKeyType& enableFix_Identifier(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Fix_Identifier.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathSegmentType& clearFix_Identifier() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PathSegmentType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PathSegmentType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PathSegmentType to copy from.
    */
  PathSegmentType(const PathSegmentType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PathSegmentType to the contents of the PathSegmentType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The PathSegmentType on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this PathSegmentType.
    * @return A reference to this PathSegmentType.
    */
  PathSegmentType& operator=(const PathSegmentType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PATHSEGMENTTYPE_H

