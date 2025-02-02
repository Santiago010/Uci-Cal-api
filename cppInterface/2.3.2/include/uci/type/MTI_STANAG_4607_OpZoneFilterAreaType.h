/** @file MTI_STANAG_4607_OpZoneFilterAreaType.h
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

#ifndef UCI_TYPE_MTI_STANAG_4607_OPZONEFILTERAREATYPE_H
#define UCI_TYPE_MTI_STANAG_4607_OPZONEFILTERAREATYPE_H

#include "../base/BoundedList.h"
#include "../base/export.h"
#include "MTI_OpZoneFilterAreaType.h"
#include "STANAG_4607_MissionType.h"
#include "STANAG_4607_PlatformTypeEnum.h"
#include "STANAG_4607_TargetClassificationEnum.h"

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

/** This element represents a filtered area for raw STANAG 4607 measurements. This type extends MTI_OpZoneFilterAreaType
  * to provide Moving Target Indicator (MTI) parameters specific to STANAG 4607.
  */
class MTI_STANAG_4607_OpZoneFilterAreaType : public virtual MTI_OpZoneFilterAreaType {
public:

  /** This method constructs a new MTI_STANAG_4607_OpZoneFilterAreaType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed MTI_STANAG_4607_OpZoneFilterAreaType.
    */
  static UCI_EXPORT MTI_STANAG_4607_OpZoneFilterAreaType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new MTI_STANAG_4607_OpZoneFilterAreaType initializing the data accessed by the new
    * MTI_STANAG_4607_OpZoneFilterAreaType using the data accessed by the specified MTI_STANAG_4607_OpZoneFilterAreaType
    * (cloning).
    *
    * @param accessor The MTI_STANAG_4607_OpZoneFilterAreaType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created MTI_STANAG_4607_OpZoneFilterAreaType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed MTI_STANAG_4607_OpZoneFilterAreaType.
    */
  static UCI_EXPORT MTI_STANAG_4607_OpZoneFilterAreaType& create(const MTI_STANAG_4607_OpZoneFilterAreaType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified MTI_STANAG_4607_OpZoneFilterAreaType. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The MTI_STANAG_4607_OpZoneFilterAreaType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(MTI_STANAG_4607_OpZoneFilterAreaType& accessor);

  /** Returns this accessor's type constant, i.e. mTI_STANAG_4607_OpZoneFilterAreaType.
    *
    * @return This accessor's type constant, i.e. mTI_STANAG_4607_OpZoneFilterAreaType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::mTI_STANAG_4607_OpZoneFilterAreaType;
  }

  /** Returns the version that was initialized from the uci:version attribute of MTI_STANAG_4607_OpZoneFilterAreaType.
    *
    * @return The version that was initialized from the uci:version attribute of MTI_STANAG_4607_OpZoneFilterAreaType.
    */
  static std::string getUCITypeVersion() {
    return "001.001.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const MTI_STANAG_4607_OpZoneFilterAreaType& accessor) = 0;

  /** Filter on the target classification. List size for this element is based on "Select All That Apply" condition.
    * [Occurrences: Minimum: 0; Maximum: 32]
    */
  typedef uci::base::BoundedList<uci::type::STANAG_4607_TargetClassificationEnum, uci::type::accessorType::sTANAG_4607_TargetClassificationEnum> TargetClassification;

  /** Field M3 from the STANAG 4607 Mission Packet. List size for this element is based on "Select All That Apply"
    * condition. [Occurrences: Minimum: 0; Maximum: 41]
    */
  typedef uci::base::BoundedList<uci::type::STANAG_4607_PlatformTypeEnum, uci::type::accessorType::sTANAG_4607_PlatformTypeEnum> PlatformType;

  /** Returns a const reference to the bounded list identified by TargetClassification.
    *
    * @return A const reference to the bounded list identified by TargetClassification.
    */
  virtual const uci::type::MTI_STANAG_4607_OpZoneFilterAreaType::TargetClassification& getTargetClassification() const = 0;

  /** Returns a reference to the bounded list identified by TargetClassification.
    *
    * @return A reference to the bounded list identified by TargetClassification.
    */
  virtual uci::type::MTI_STANAG_4607_OpZoneFilterAreaType::TargetClassification& getTargetClassification() = 0;

  /** Sets the bounded list identified by TargetClassification.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MTI_STANAG_4607_OpZoneFilterAreaType& setTargetClassification(const uci::type::MTI_STANAG_4607_OpZoneFilterAreaType::TargetClassification& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * STANAG_4607_Mission.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      STANAG_4607_Mission.
    */
  virtual const uci::type::STANAG_4607_MissionType& getSTANAG_4607_Mission() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by STANAG_4607_Mission.
    *
    * @return A reference to the accessor that provides access to the complex content identified by STANAG_4607_Mission.
    */
  virtual uci::type::STANAG_4607_MissionType& getSTANAG_4607_Mission() = 0;

  /** Sets the complex content identified by STANAG_4607_Mission to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by STANAG_4607_Mission.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MTI_STANAG_4607_OpZoneFilterAreaType& setSTANAG_4607_Mission(const uci::type::STANAG_4607_MissionType& value) = 0;

  /** Returns whether the Element identified by STANAG_4607_Mission exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by STANAG_4607_Mission is enabled or not.
    */
  virtual bool hasSTANAG_4607_Mission() const = 0;

  /** Enables the Element identified by STANAG_4607_Mission.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by STANAG_4607_Mission.
    */
  virtual uci::type::STANAG_4607_MissionType& enableSTANAG_4607_Mission(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by STANAG_4607_Mission.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MTI_STANAG_4607_OpZoneFilterAreaType& clearSTANAG_4607_Mission() = 0;

  /** Returns a const reference to the bounded list identified by PlatformType.
    *
    * @return A const reference to the bounded list identified by PlatformType.
    */
  virtual const uci::type::MTI_STANAG_4607_OpZoneFilterAreaType::PlatformType& getPlatformType() const = 0;

  /** Returns a reference to the bounded list identified by PlatformType.
    *
    * @return A reference to the bounded list identified by PlatformType.
    */
  virtual uci::type::MTI_STANAG_4607_OpZoneFilterAreaType::PlatformType& getPlatformType() = 0;

  /** Sets the bounded list identified by PlatformType.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MTI_STANAG_4607_OpZoneFilterAreaType& setPlatformType(const uci::type::MTI_STANAG_4607_OpZoneFilterAreaType::PlatformType& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  MTI_STANAG_4607_OpZoneFilterAreaType() {
  }

  /** The destructor [only available to derived classes]. */
  ~MTI_STANAG_4607_OpZoneFilterAreaType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The MTI_STANAG_4607_OpZoneFilterAreaType to copy from.
    */
  MTI_STANAG_4607_OpZoneFilterAreaType(const MTI_STANAG_4607_OpZoneFilterAreaType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this MTI_STANAG_4607_OpZoneFilterAreaType to the contents of the
    * MTI_STANAG_4607_OpZoneFilterAreaType on the right hand side (rhs) of the assignment operator [only available to
    * derived classes].
    *
    * @param rhs The MTI_STANAG_4607_OpZoneFilterAreaType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this MTI_STANAG_4607_OpZoneFilterAreaType.
    * @return A reference to this MTI_STANAG_4607_OpZoneFilterAreaType.
    */
  MTI_STANAG_4607_OpZoneFilterAreaType& operator=(const MTI_STANAG_4607_OpZoneFilterAreaType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_MTI_STANAG_4607_OPZONEFILTERAREATYPE_H

