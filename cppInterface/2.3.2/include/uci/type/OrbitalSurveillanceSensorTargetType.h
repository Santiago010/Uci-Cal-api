/** @file OrbitalSurveillanceSensorTargetType.h
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

#ifndef UCI_TYPE_ORBITALSURVEILLANCESENSORTARGETTYPE_H
#define UCI_TYPE_ORBITALSURVEILLANCESENSORTARGETTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "ElementSetCloudType.h"
#include "OrbitalSurveillanceLocationTargetType.h"
#include "OrbitalSurveillanceObjectsType.h"
#include "SensorPointListType.h"
#include "SourceCoverageType.h"

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

/** Indicates the target of the Orbital Surveillance Sensor Task. */
class OrbitalSurveillanceSensorTargetType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new OrbitalSurveillanceSensorTargetType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitalSurveillanceSensorTargetType.
    */
  static UCI_EXPORT OrbitalSurveillanceSensorTargetType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new OrbitalSurveillanceSensorTargetType initializing the data accessed by the new
    * OrbitalSurveillanceSensorTargetType using the data accessed by the specified OrbitalSurveillanceSensorTargetType
    * (cloning).
    *
    * @param accessor The OrbitalSurveillanceSensorTargetType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created OrbitalSurveillanceSensorTargetType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitalSurveillanceSensorTargetType.
    */
  static UCI_EXPORT OrbitalSurveillanceSensorTargetType& create(const OrbitalSurveillanceSensorTargetType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified OrbitalSurveillanceSensorTargetType. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The OrbitalSurveillanceSensorTargetType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(OrbitalSurveillanceSensorTargetType& accessor);

  /** Returns this accessor's type constant, i.e. orbitalSurveillanceSensorTargetType.
    *
    * @return This accessor's type constant, i.e. orbitalSurveillanceSensorTargetType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::orbitalSurveillanceSensorTargetType;
  }

  /** Returns the version that was initialized from the uci:version attribute of OrbitalSurveillanceSensorTargetType.
    *
    * @return The version that was initialized from the uci:version attribute of OrbitalSurveillanceSensorTargetType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const OrbitalSurveillanceSensorTargetType& accessor) = 0;

  /** The following enumeration is used to identify which element of this Choice has been chosen. */
  enum OrbitalSurveillanceSensorTargetTypeChoice {
    ORBITALSURVEILLANCESENSORTARGETTYPE_CHOICE_NONE,
    ORBITALSURVEILLANCESENSORTARGETTYPE_CHOICE_POINTLIST,
    ORBITALSURVEILLANCESENSORTARGETTYPE_CHOICE_ELEMENTSETCLOUD,
    ORBITALSURVEILLANCESENSORTARGETTYPE_CHOICE_OBJECTBASED,
    ORBITALSURVEILLANCESENSORTARGETTYPE_CHOICE_LOCATIONBASED,
    ORBITALSURVEILLANCESENSORTARGETTYPE_CHOICE_SENSORCENTRICVOLUME
  };

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value.
    */
  virtual OrbitalSurveillanceSensorTargetTypeChoice getOrbitalSurveillanceSensorTargetTypeChoiceOrdinal() const = 0;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getOrbitalSurveillanceSensorTargetTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In
    * addition, the access methods associated with the chosen element will be enabled and will provide access to the chosen
    * element.
    *
    * @param chosenElementOrdinal The ordinal to set this choice's selected ordinal to.
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalSurveillanceSensorTargetType& setOrbitalSurveillanceSensorTargetTypeChoiceOrdinal(OrbitalSurveillanceSensorTargetTypeChoice chosenElementOrdinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by PointList.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by PointList.
    */
  virtual const uci::type::SensorPointListType& getPointList() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by PointList.
    *
    * @return A reference to the accessor that provides access to the complex content identified by PointList.
    */
  virtual uci::type::SensorPointListType& getPointList() = 0;

  /** Sets the complex content identified by PointList to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PointList.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalSurveillanceSensorTargetType& setPointList(const uci::type::SensorPointListType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by PointList.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by PointList, false otherwise.
    */
  virtual bool isPointList() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by PointList.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by PointList.
    */
  virtual uci::type::SensorPointListType& choosePointList(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ElementSetCloud.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ElementSetCloud.
    */
  virtual const uci::type::ElementSetCloudType& getElementSetCloud() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ElementSetCloud.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ElementSetCloud.
    */
  virtual uci::type::ElementSetCloudType& getElementSetCloud() = 0;

  /** Sets the complex content identified by ElementSetCloud to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ElementSetCloud.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalSurveillanceSensorTargetType& setElementSetCloud(const uci::type::ElementSetCloudType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by ElementSetCloud.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by ElementSetCloud, false
    *      otherwise.
    */
  virtual bool isElementSetCloud() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by ElementSetCloud.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by ElementSetCloud.
    */
  virtual uci::type::ElementSetCloudType& chooseElementSetCloud(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ObjectBased.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ObjectBased.
    */
  virtual const uci::type::OrbitalSurveillanceObjectsType& getObjectBased() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ObjectBased.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ObjectBased.
    */
  virtual uci::type::OrbitalSurveillanceObjectsType& getObjectBased() = 0;

  /** Sets the complex content identified by ObjectBased to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ObjectBased.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalSurveillanceSensorTargetType& setObjectBased(const uci::type::OrbitalSurveillanceObjectsType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by ObjectBased.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by ObjectBased, false otherwise.
    */
  virtual bool isObjectBased() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by ObjectBased.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by ObjectBased.
    */
  virtual uci::type::OrbitalSurveillanceObjectsType& chooseObjectBased(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by LocationBased.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by LocationBased.
    */
  virtual const uci::type::OrbitalSurveillanceLocationTargetType& getLocationBased() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by LocationBased.
    *
    * @return A reference to the accessor that provides access to the complex content identified by LocationBased.
    */
  virtual uci::type::OrbitalSurveillanceLocationTargetType& getLocationBased() = 0;

  /** Sets the complex content identified by LocationBased to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by LocationBased.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalSurveillanceSensorTargetType& setLocationBased(const uci::type::OrbitalSurveillanceLocationTargetType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by LocationBased.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by LocationBased, false otherwise.
    */
  virtual bool isLocationBased() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by LocationBased.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by LocationBased.
    */
  virtual uci::type::OrbitalSurveillanceLocationTargetType& chooseLocationBased(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * SensorCentricVolume.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      SensorCentricVolume.
    */
  virtual const uci::type::SourceCoverageType& getSensorCentricVolume() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SensorCentricVolume.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SensorCentricVolume.
    */
  virtual uci::type::SourceCoverageType& getSensorCentricVolume() = 0;

  /** Sets the complex content identified by SensorCentricVolume to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SensorCentricVolume.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalSurveillanceSensorTargetType& setSensorCentricVolume(const uci::type::SourceCoverageType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by SensorCentricVolume.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by SensorCentricVolume, false
    *      otherwise.
    */
  virtual bool isSensorCentricVolume() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by SensorCentricVolume.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by SensorCentricVolume.
    */
  virtual uci::type::SourceCoverageType& chooseSensorCentricVolume(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  OrbitalSurveillanceSensorTargetType() {
  }

  /** The destructor [only available to derived classes]. */
  ~OrbitalSurveillanceSensorTargetType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The OrbitalSurveillanceSensorTargetType to copy from.
    */
  OrbitalSurveillanceSensorTargetType(const OrbitalSurveillanceSensorTargetType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this OrbitalSurveillanceSensorTargetType to the contents of the
    * OrbitalSurveillanceSensorTargetType on the right hand side (rhs) of the assignment operator [only available to
    * derived classes].
    *
    * @param rhs The OrbitalSurveillanceSensorTargetType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this OrbitalSurveillanceSensorTargetType.
    * @return A reference to this OrbitalSurveillanceSensorTargetType.
    */
  OrbitalSurveillanceSensorTargetType& operator=(const OrbitalSurveillanceSensorTargetType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ORBITALSURVEILLANCESENSORTARGETTYPE_H

