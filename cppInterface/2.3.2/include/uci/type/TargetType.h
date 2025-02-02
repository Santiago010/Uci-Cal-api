/** @file TargetType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:08 PM
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

#ifndef UCI_TYPE_TARGETTYPE_H
#define UCI_TYPE_TARGETTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "EntityID_Type.h"
#include "LineTargetType.h"
#include "OpLineID_Type.h"
#include "OpPointID_Type.h"
#include "OpVolumeID_Type.h"
#include "OpVolumeType.h"
#include "OpZoneID_Type.h"
#include "OperatorLocationOfInterestID_Type.h"
#include "PointTargetType.h"
#include "SignalID_Type.h"
#include "SystemID_Type.h"
#include "ZoneExternalType.h"

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

/** Indicates or references geospatial characteristics of a target. */
class TargetType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new TargetType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed TargetType.
    */
  static UCI_EXPORT TargetType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new TargetType initializing the data accessed by the new TargetType using the data accessed
    * by the specified TargetType (cloning).
    *
    * @param accessor The TargetType that provides access to the data that is to be used to initialize the data accessed by
    *      the new created TargetType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed TargetType.
    */
  static UCI_EXPORT TargetType& create(const TargetType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified TargetType. Use of the specified accessor after it has been destroyed will result
    * in undefined behavior.
    *
    * @param accessor The TargetType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(TargetType& accessor);

  /** Returns this accessor's type constant, i.e. targetType.
    *
    * @return This accessor's type constant, i.e. targetType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::targetType;
  }

  /** Returns the version that was initialized from the uci:version attribute of TargetType.
    *
    * @return The version that was initialized from the uci:version attribute of TargetType.
    */
  static std::string getUCITypeVersion() {
    return "002.000.002.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const TargetType& accessor) = 0;

  /** The following enumeration is used to identify which element of this Choice has been chosen. */
  enum TargetTypeChoice {
    TARGETTYPE_CHOICE_NONE,
    TARGETTYPE_CHOICE_ENTITYID,
    TARGETTYPE_CHOICE_SYSTEMID,
    TARGETTYPE_CHOICE_OPERATORLOCATIONOFINTERESTID,
    TARGETTYPE_CHOICE_SIGNALID,
    TARGETTYPE_CHOICE_OPPOINTID,
    TARGETTYPE_CHOICE_OPZONEID,
    TARGETTYPE_CHOICE_OPVOLUMEID,
    TARGETTYPE_CHOICE_OPLINEID,
    TARGETTYPE_CHOICE_POINTTARGET,
    TARGETTYPE_CHOICE_ZONETARGET,
    TARGETTYPE_CHOICE_VOLUMETARGET,
    TARGETTYPE_CHOICE_LINETARGET
  };

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value.
    */
  virtual TargetTypeChoice getTargetTypeChoiceOrdinal() const = 0;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getTargetTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In addition, the access
    * methods associated with the chosen element will be enabled and will provide access to the chosen element.
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
  virtual uci::type::TargetType& setTargetTypeChoiceOrdinal(TargetTypeChoice chosenElementOrdinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

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
  virtual uci::type::TargetType& setEntityID(const uci::type::EntityID_Type& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by EntityID.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by EntityID, false otherwise.
    */
  virtual bool isEntityID() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by EntityID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by EntityID.
    */
  virtual uci::type::EntityID_Type& chooseEntityID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SystemID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SystemID.
    */
  virtual const uci::type::SystemID_Type& getSystemID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SystemID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SystemID.
    */
  virtual uci::type::SystemID_Type& getSystemID() = 0;

  /** Sets the complex content identified by SystemID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SystemID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TargetType& setSystemID(const uci::type::SystemID_Type& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by SystemID.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by SystemID, false otherwise.
    */
  virtual bool isSystemID() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by SystemID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by SystemID.
    */
  virtual uci::type::SystemID_Type& chooseSystemID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * OperatorLocationOfInterestID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      OperatorLocationOfInterestID.
    */
  virtual const uci::type::OperatorLocationOfInterestID_Type& getOperatorLocationOfInterestID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * OperatorLocationOfInterestID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      OperatorLocationOfInterestID.
    */
  virtual uci::type::OperatorLocationOfInterestID_Type& getOperatorLocationOfInterestID() = 0;

  /** Sets the complex content identified by OperatorLocationOfInterestID to the contents of the complex content accessed
    * by the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by OperatorLocationOfInterestID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TargetType& setOperatorLocationOfInterestID(const uci::type::OperatorLocationOfInterestID_Type& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by OperatorLocationOfInterestID.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by OperatorLocationOfInterestID,
    *      false otherwise.
    */
  virtual bool isOperatorLocationOfInterestID() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by OperatorLocationOfInterestID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by OperatorLocationOfInterestID.
    */
  virtual uci::type::OperatorLocationOfInterestID_Type& chooseOperatorLocationOfInterestID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SignalID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SignalID.
    */
  virtual const uci::type::SignalID_Type& getSignalID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SignalID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SignalID.
    */
  virtual uci::type::SignalID_Type& getSignalID() = 0;

  /** Sets the complex content identified by SignalID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SignalID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TargetType& setSignalID(const uci::type::SignalID_Type& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by SignalID.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by SignalID, false otherwise.
    */
  virtual bool isSignalID() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by SignalID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by SignalID.
    */
  virtual uci::type::SignalID_Type& chooseSignalID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by OpPointID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by OpPointID.
    */
  virtual const uci::type::OpPointID_Type& getOpPointID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by OpPointID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by OpPointID.
    */
  virtual uci::type::OpPointID_Type& getOpPointID() = 0;

  /** Sets the complex content identified by OpPointID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by OpPointID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TargetType& setOpPointID(const uci::type::OpPointID_Type& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by OpPointID.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by OpPointID, false otherwise.
    */
  virtual bool isOpPointID() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by OpPointID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by OpPointID.
    */
  virtual uci::type::OpPointID_Type& chooseOpPointID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by OpZoneID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by OpZoneID.
    */
  virtual const uci::type::OpZoneID_Type& getOpZoneID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by OpZoneID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by OpZoneID.
    */
  virtual uci::type::OpZoneID_Type& getOpZoneID() = 0;

  /** Sets the complex content identified by OpZoneID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by OpZoneID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TargetType& setOpZoneID(const uci::type::OpZoneID_Type& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by OpZoneID.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by OpZoneID, false otherwise.
    */
  virtual bool isOpZoneID() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by OpZoneID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by OpZoneID.
    */
  virtual uci::type::OpZoneID_Type& chooseOpZoneID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by OpVolumeID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by OpVolumeID.
    */
  virtual const uci::type::OpVolumeID_Type& getOpVolumeID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by OpVolumeID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by OpVolumeID.
    */
  virtual uci::type::OpVolumeID_Type& getOpVolumeID() = 0;

  /** Sets the complex content identified by OpVolumeID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by OpVolumeID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TargetType& setOpVolumeID(const uci::type::OpVolumeID_Type& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by OpVolumeID.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by OpVolumeID, false otherwise.
    */
  virtual bool isOpVolumeID() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by OpVolumeID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by OpVolumeID.
    */
  virtual uci::type::OpVolumeID_Type& chooseOpVolumeID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by OpLineID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by OpLineID.
    */
  virtual const uci::type::OpLineID_Type& getOpLineID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by OpLineID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by OpLineID.
    */
  virtual uci::type::OpLineID_Type& getOpLineID() = 0;

  /** Sets the complex content identified by OpLineID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by OpLineID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TargetType& setOpLineID(const uci::type::OpLineID_Type& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by OpLineID.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by OpLineID, false otherwise.
    */
  virtual bool isOpLineID() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by OpLineID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by OpLineID.
    */
  virtual uci::type::OpLineID_Type& chooseOpLineID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by PointTarget.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by PointTarget.
    */
  virtual const uci::type::PointTargetType& getPointTarget() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by PointTarget.
    *
    * @return A reference to the accessor that provides access to the complex content identified by PointTarget.
    */
  virtual uci::type::PointTargetType& getPointTarget() = 0;

  /** Sets the complex content identified by PointTarget to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PointTarget.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TargetType& setPointTarget(const uci::type::PointTargetType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by PointTarget.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by PointTarget, false otherwise.
    */
  virtual bool isPointTarget() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by PointTarget.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by PointTarget.
    */
  virtual uci::type::PointTargetType& choosePointTarget(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ZoneTarget.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ZoneTarget.
    */
  virtual const uci::type::ZoneExternalType& getZoneTarget() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ZoneTarget.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ZoneTarget.
    */
  virtual uci::type::ZoneExternalType& getZoneTarget() = 0;

  /** Sets the complex content identified by ZoneTarget to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ZoneTarget.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TargetType& setZoneTarget(const uci::type::ZoneExternalType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by ZoneTarget.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by ZoneTarget, false otherwise.
    */
  virtual bool isZoneTarget() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by ZoneTarget.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by ZoneTarget.
    */
  virtual uci::type::ZoneExternalType& chooseZoneTarget(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by VolumeTarget.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by VolumeTarget.
    */
  virtual const uci::type::OpVolumeType& getVolumeTarget() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by VolumeTarget.
    *
    * @return A reference to the accessor that provides access to the complex content identified by VolumeTarget.
    */
  virtual uci::type::OpVolumeType& getVolumeTarget() = 0;

  /** Sets the complex content identified by VolumeTarget to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by VolumeTarget.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TargetType& setVolumeTarget(const uci::type::OpVolumeType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by VolumeTarget.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by VolumeTarget, false otherwise.
    */
  virtual bool isVolumeTarget() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by VolumeTarget.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by VolumeTarget.
    */
  virtual uci::type::OpVolumeType& chooseVolumeTarget(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by LineTarget.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by LineTarget.
    */
  virtual const uci::type::LineTargetType& getLineTarget() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by LineTarget.
    *
    * @return A reference to the accessor that provides access to the complex content identified by LineTarget.
    */
  virtual uci::type::LineTargetType& getLineTarget() = 0;

  /** Sets the complex content identified by LineTarget to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by LineTarget.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TargetType& setLineTarget(const uci::type::LineTargetType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by LineTarget.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by LineTarget, false otherwise.
    */
  virtual bool isLineTarget() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by LineTarget.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by LineTarget.
    */
  virtual uci::type::LineTargetType& chooseLineTarget(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  TargetType() {
  }

  /** The destructor [only available to derived classes]. */
  ~TargetType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The TargetType to copy from.
    */
  TargetType(const TargetType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this TargetType to the contents of the TargetType on the right hand
    * side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The TargetType on the right hand side (rhs) of the assignment operator whose contents are used to set the
    *      contents of this TargetType.
    * @return A reference to this TargetType.
    */
  TargetType& operator=(const TargetType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_TARGETTYPE_H

