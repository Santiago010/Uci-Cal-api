/** @file BaseEOB_RecordType.h
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

#ifndef UCI_TYPE_BASEEOB_RECORDTYPE_H
#define UCI_TYPE_BASEEOB_RECORDTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "AlphanumericDashSpaceUnderscoreString3Type.h"
#include "EOB_CodesType.h"
#include "EOB_FixedPositionType.h"
#include "EOB_RecordID_Type.h"
#include "IdentityType.h"
#include "MobilityEnum.h"
#include "OB_OperationalStatusEnum.h"
#include "OrderOfBattleTimestampsType.h"
#include "SecurityInformationType.h"
#include "VisibleString512Type.h"

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
class BaseEOB_RecordType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new BaseEOB_RecordType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed BaseEOB_RecordType.
    */
  static UCI_EXPORT BaseEOB_RecordType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new BaseEOB_RecordType initializing the data accessed by the new BaseEOB_RecordType using
    * the data accessed by the specified BaseEOB_RecordType (cloning).
    *
    * @param accessor The BaseEOB_RecordType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created BaseEOB_RecordType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed BaseEOB_RecordType.
    */
  static UCI_EXPORT BaseEOB_RecordType& create(const BaseEOB_RecordType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified BaseEOB_RecordType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The BaseEOB_RecordType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(BaseEOB_RecordType& accessor);

  /** Returns this accessor's type constant, i.e. baseEOB_RecordType.
    *
    * @return This accessor's type constant, i.e. baseEOB_RecordType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::baseEOB_RecordType;
  }

  /** Returns the version that was initialized from the uci:version attribute of BaseEOB_RecordType.
    *
    * @return The version that was initialized from the uci:version attribute of BaseEOB_RecordType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const BaseEOB_RecordType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * SecurityInformation.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      SecurityInformation.
    */
  virtual const uci::type::SecurityInformationType& getSecurityInformation() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SecurityInformation.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SecurityInformation.
    */
  virtual uci::type::SecurityInformationType& getSecurityInformation() = 0;

  /** Sets the complex content identified by SecurityInformation to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SecurityInformation.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setSecurityInformation(const uci::type::SecurityInformationType& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by EOB_RecordID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by EOB_RecordID.
    */
  virtual const uci::type::EOB_RecordID_Type& getEOB_RecordID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by EOB_RecordID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by EOB_RecordID.
    */
  virtual uci::type::EOB_RecordID_Type& getEOB_RecordID() = 0;

  /** Sets the complex content identified by EOB_RecordID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by EOB_RecordID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setEOB_RecordID(const uci::type::EOB_RecordID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Timestamps.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Timestamps.
    */
  virtual const uci::type::OrderOfBattleTimestampsType& getTimestamps() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Timestamps.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Timestamps.
    */
  virtual uci::type::OrderOfBattleTimestampsType& getTimestamps() = 0;

  /** Sets the complex content identified by Timestamps to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Timestamps.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setTimestamps(const uci::type::OrderOfBattleTimestampsType& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Identity.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Identity.
    */
  virtual const uci::type::IdentityType& getIdentity() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Identity.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Identity.
    */
  virtual uci::type::IdentityType& getIdentity() = 0;

  /** Sets the complex content identified by Identity to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Identity.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setIdentity(const uci::type::IdentityType& value) = 0;

  /** Enables the Element identified by Identity.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available for the element. The use of
    *      this parameter provides support for inheritable types. This parameter defaults to uci::base::accessorType::null
    *      that is used to indicate that the access methods associated with the element shall provide access to data of the
    *      type that was specified for that element in the OMS schema, i.e. the element's base type. If specified, this
    *      field must either be a type ID associated with the element's base type or a type ID associated with a type that
    *      is derived from the element's base type.
    * @return A reference to the accessor that provides access to the complex content identified by Identity.
    */
  virtual uci::type::IdentityType& enableIdentity(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Position.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Position.
    */
  virtual const uci::type::EOB_FixedPositionType& getPosition() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Position.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Position.
    */
  virtual uci::type::EOB_FixedPositionType& getPosition() = 0;

  /** Sets the complex content identified by Position to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Position.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setPosition(const uci::type::EOB_FixedPositionType& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by Mobility.
    *
    * @return A const reference to the value of the enumeration identified by Mobility.
    */
  virtual const uci::type::MobilityEnum& getMobility() const = 0;

  /** Returns a reference to the value of the enumeration identified by Mobility.
    *
    * @return A reference to the value of the enumeration identified by Mobility.
    */
  virtual uci::type::MobilityEnum& getMobility() = 0;

  /** Sets the value of the enumeration identified by Mobility.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setMobility(const uci::type::MobilityEnum& value) = 0;

  /** Sets the value of the enumeration identified by Mobility.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setMobility(uci::type::MobilityEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by Mobility exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Mobility is enabled or not.
    */
  virtual bool hasMobility() const = 0;

  /** Enables the Element identified by Mobility.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by Mobility.
    */
  virtual uci::type::MobilityEnum& enableMobility(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Mobility.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& clearMobility() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by EOB_Codes.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by EOB_Codes.
    */
  virtual const uci::type::EOB_CodesType& getEOB_Codes() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by EOB_Codes.
    *
    * @return A reference to the accessor that provides access to the complex content identified by EOB_Codes.
    */
  virtual uci::type::EOB_CodesType& getEOB_Codes() = 0;

  /** Sets the complex content identified by EOB_Codes to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by EOB_Codes.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setEOB_Codes(const uci::type::EOB_CodesType& value) = 0;

  /** Returns whether the Element identified by EOB_Codes exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by EOB_Codes is enabled or not.
    */
  virtual bool hasEOB_Codes() const = 0;

  /** Enables the Element identified by EOB_Codes.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by EOB_Codes.
    */
  virtual uci::type::EOB_CodesType& enableEOB_Codes(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by EOB_Codes.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& clearEOB_Codes() = 0;

  /** Returns a const reference to the value of the enumeration identified by SiteOperationalStatus.
    *
    * @return A const reference to the value of the enumeration identified by SiteOperationalStatus.
    */
  virtual const uci::type::OB_OperationalStatusEnum& getSiteOperationalStatus() const = 0;

  /** Returns a reference to the value of the enumeration identified by SiteOperationalStatus.
    *
    * @return A reference to the value of the enumeration identified by SiteOperationalStatus.
    */
  virtual uci::type::OB_OperationalStatusEnum& getSiteOperationalStatus() = 0;

  /** Sets the value of the enumeration identified by SiteOperationalStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setSiteOperationalStatus(const uci::type::OB_OperationalStatusEnum& value) = 0;

  /** Sets the value of the enumeration identified by SiteOperationalStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setSiteOperationalStatus(uci::type::OB_OperationalStatusEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by SiteOperationalStatus exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SiteOperationalStatus is enabled or not.
    */
  virtual bool hasSiteOperationalStatus() const = 0;

  /** Enables the Element identified by SiteOperationalStatus.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by SiteOperationalStatus.
    */
  virtual uci::type::OB_OperationalStatusEnum& enableSiteOperationalStatus(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by SiteOperationalStatus.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& clearSiteOperationalStatus() = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by RecordOwner.
    *
    * @return A const reference to the accessor that provides access to the string identified by RecordOwner.
    */
  virtual const uci::type::AlphanumericDashSpaceUnderscoreString3Type& getRecordOwner() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by RecordOwner.
    *
    * @return A reference to the accessor that provides access to the string identified by RecordOwner.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString3Type& getRecordOwner() = 0;

  /** Sets the string identified by RecordOwner to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by RecordOwner.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setRecordOwner(const uci::type::AlphanumericDashSpaceUnderscoreString3Type& value) = 0;

  /** Sets the string identified by RecordOwner to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setRecordOwner(const std::string& value) = 0;

  /** Sets the string identified by RecordOwner to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setRecordOwner(const char* value) = 0;

  /** Returns whether the Element identified by RecordOwner exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RecordOwner is enabled or not.
    */
  virtual bool hasRecordOwner() const = 0;

  /** Enables the Element identified by RecordOwner.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by RecordOwner.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString3Type& enableRecordOwner(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by RecordOwner.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& clearRecordOwner() = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by RemarksText.
    *
    * @return A const reference to the accessor that provides access to the string identified by RemarksText.
    */
  virtual const uci::type::VisibleString512Type& getRemarksText() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by RemarksText.
    *
    * @return A reference to the accessor that provides access to the string identified by RemarksText.
    */
  virtual uci::type::VisibleString512Type& getRemarksText() = 0;

  /** Sets the string identified by RemarksText to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by RemarksText.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setRemarksText(const uci::type::VisibleString512Type& value) = 0;

  /** Sets the string identified by RemarksText to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setRemarksText(const std::string& value) = 0;

  /** Sets the string identified by RemarksText to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& setRemarksText(const char* value) = 0;

  /** Returns whether the Element identified by RemarksText exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RemarksText is enabled or not.
    */
  virtual bool hasRemarksText() const = 0;

  /** Enables the Element identified by RemarksText.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by RemarksText.
    */
  virtual uci::type::VisibleString512Type& enableRemarksText(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by RemarksText.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::BaseEOB_RecordType& clearRemarksText() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  BaseEOB_RecordType() {
  }

  /** The destructor [only available to derived classes]. */
  ~BaseEOB_RecordType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The BaseEOB_RecordType to copy from.
    */
  BaseEOB_RecordType(const BaseEOB_RecordType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this BaseEOB_RecordType to the contents of the BaseEOB_RecordType on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The BaseEOB_RecordType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this BaseEOB_RecordType.
    * @return A reference to this BaseEOB_RecordType.
    */
  BaseEOB_RecordType& operator=(const BaseEOB_RecordType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_BASEEOB_RECORDTYPE_H

