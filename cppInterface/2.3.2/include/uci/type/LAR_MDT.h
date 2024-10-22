/** @file LAR_MDT.h
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

#ifndef UCI_TYPE_LAR_MDT_H
#define UCI_TYPE_LAR_MDT_H

#include "../base/Accessor.h"
#include "../base/BooleanAccessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CapabilityID_Type.h"
#include "LAR_BasisEnum.h"
#include "LAR_DetailsType.h"
#include "LAR_ID_Type.h"
#include "LAR_RelationEnum.h"
#include "RequestID_Type.h"
#include "ZoneType.h"

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
class LAR_MDT : public virtual uci::base::Accessor {
public:

  /** This method constructs a new LAR_MDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed LAR_MDT.
    */
  static UCI_EXPORT LAR_MDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new LAR_MDT initializing the data accessed by the new LAR_MDT using the data accessed by the
    * specified LAR_MDT (cloning).
    *
    * @param accessor The LAR_MDT that provides access to the data that is to be used to initialize the data accessed by
    *      the new created LAR_MDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed LAR_MDT.
    */
  static UCI_EXPORT LAR_MDT& create(const LAR_MDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified LAR_MDT. Use of the specified accessor after it has been destroyed will result in
    * undefined behavior.
    *
    * @param accessor The LAR_MDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(LAR_MDT& accessor);

  /** Returns this accessor's type constant, i.e. lAR_MDT.
    *
    * @return This accessor's type constant, i.e. lAR_MDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::lAR_MDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of LAR_MDT.
    *
    * @return The version that was initialized from the uci:version attribute of LAR_MDT.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const LAR_MDT& accessor) = 0;

  /** Indicates the weapon Capability instance that this LAR is associated with. Multiple instances of this element should
    * only be given when each weapon Capability is of the same homogeneous weapon type and multiple weapon instances are
    * being employed on a single DMPI. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::CapabilityID_Type, uci::type::accessorType::capabilityID_Type> CapabilityID;

  /** Returns a const reference to the accessor that provides access to the complex content identified by LAR_ID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by LAR_ID.
    */
  virtual const uci::type::LAR_ID_Type& getLAR_ID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by LAR_ID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by LAR_ID.
    */
  virtual uci::type::LAR_ID_Type& getLAR_ID() = 0;

  /** Sets the complex content identified by LAR_ID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by LAR_ID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_MDT& setLAR_ID(const uci::type::LAR_ID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by RequestID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by RequestID.
    */
  virtual const uci::type::RequestID_Type& getRequestID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by RequestID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by RequestID.
    */
  virtual uci::type::RequestID_Type& getRequestID() = 0;

  /** Sets the complex content identified by RequestID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by RequestID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_MDT& setRequestID(const uci::type::RequestID_Type& value) = 0;

  /** Returns whether the Element identified by RequestID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RequestID is enabled or not.
    */
  virtual bool hasRequestID() const = 0;

  /** Enables the Element identified by RequestID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by RequestID.
    */
  virtual uci::type::RequestID_Type& enableRequestID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by RequestID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_MDT& clearRequestID() = 0;

  /** Returns a const reference to the bounded list identified by CapabilityID.
    *
    * @return A const reference to the bounded list identified by CapabilityID.
    */
  virtual const uci::type::LAR_MDT::CapabilityID& getCapabilityID() const = 0;

  /** Returns a reference to the bounded list identified by CapabilityID.
    *
    * @return A reference to the bounded list identified by CapabilityID.
    */
  virtual uci::type::LAR_MDT::CapabilityID& getCapabilityID() = 0;

  /** Sets the bounded list identified by CapabilityID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_MDT& setCapabilityID(const uci::type::LAR_MDT::CapabilityID& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by LAR_Type.
    *
    * @return A const reference to the value of the enumeration identified by LAR_Type.
    */
  virtual const uci::type::LAR_RelationEnum& getLAR_Type() const = 0;

  /** Returns a reference to the value of the enumeration identified by LAR_Type.
    *
    * @return A reference to the value of the enumeration identified by LAR_Type.
    */
  virtual uci::type::LAR_RelationEnum& getLAR_Type() = 0;

  /** Sets the value of the enumeration identified by LAR_Type.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_MDT& setLAR_Type(const uci::type::LAR_RelationEnum& value) = 0;

  /** Sets the value of the enumeration identified by LAR_Type.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_MDT& setLAR_Type(uci::type::LAR_RelationEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the value of the enumeration identified by Basis.
    *
    * @return A const reference to the value of the enumeration identified by Basis.
    */
  virtual const uci::type::LAR_BasisEnum& getBasis() const = 0;

  /** Returns a reference to the value of the enumeration identified by Basis.
    *
    * @return A reference to the value of the enumeration identified by Basis.
    */
  virtual uci::type::LAR_BasisEnum& getBasis() = 0;

  /** Sets the value of the enumeration identified by Basis.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_MDT& setBasis(const uci::type::LAR_BasisEnum& value) = 0;

  /** Sets the value of the enumeration identified by Basis.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_MDT& setBasis(uci::type::LAR_BasisEnum::EnumerationItem value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by GeneratedByWeapon.
    *
    * @return The value of the simple primitive data type identified by GeneratedByWeapon.
    */
  virtual xs::Boolean getGeneratedByWeapon() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by GeneratedByWeapon.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_MDT& setGeneratedByWeapon(xs::Boolean value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Region.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Region.
    */
  virtual const uci::type::ZoneType& getRegion() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Region.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Region.
    */
  virtual uci::type::ZoneType& getRegion() = 0;

  /** Sets the complex content identified by Region to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Region.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_MDT& setRegion(const uci::type::ZoneType& value) = 0;

  /** Enables the Element identified by Region.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available for the element. The use of
    *      this parameter provides support for inheritable types. This parameter defaults to uci::base::accessorType::null
    *      that is used to indicate that the access methods associated with the element shall provide access to data of the
    *      type that was specified for that element in the OMS schema, i.e. the element's base type. If specified, this
    *      field must either be a type ID associated with the element's base type or a type ID associated with a type that
    *      is derived from the element's base type.
    * @return A reference to the accessor that provides access to the complex content identified by Region.
    */
  virtual uci::type::ZoneType& enableRegion(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by LAR_Details.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by LAR_Details.
    */
  virtual const uci::type::LAR_DetailsType& getLAR_Details() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by LAR_Details.
    *
    * @return A reference to the accessor that provides access to the complex content identified by LAR_Details.
    */
  virtual uci::type::LAR_DetailsType& getLAR_Details() = 0;

  /** Sets the complex content identified by LAR_Details to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by LAR_Details.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_MDT& setLAR_Details(const uci::type::LAR_DetailsType& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  LAR_MDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~LAR_MDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The LAR_MDT to copy from.
    */
  LAR_MDT(const LAR_MDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this LAR_MDT to the contents of the LAR_MDT on the right hand side
    * (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The LAR_MDT on the right hand side (rhs) of the assignment operator whose contents are used to set the
    *      contents of this LAR_MDT.
    * @return A reference to this LAR_MDT.
    */
  LAR_MDT& operator=(const LAR_MDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_LAR_MDT_H

