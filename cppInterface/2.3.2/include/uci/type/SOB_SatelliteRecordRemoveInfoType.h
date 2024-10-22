/** @file SOB_SatelliteRecordRemoveInfoType.h
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

#ifndef UCI_TYPE_SOB_SATELLITERECORDREMOVEINFOTYPE_H
#define UCI_TYPE_SOB_SATELLITERECORDREMOVEINFOTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "EntityRemoveReasonEnum.h"
#include "SOB_SatelliteRecordID_Type.h"

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

/** Contains removal information for an SOB_SatelliteRecord. */
class SOB_SatelliteRecordRemoveInfoType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new SOB_SatelliteRecordRemoveInfoType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SOB_SatelliteRecordRemoveInfoType.
    */
  static UCI_EXPORT SOB_SatelliteRecordRemoveInfoType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SOB_SatelliteRecordRemoveInfoType initializing the data accessed by the new
    * SOB_SatelliteRecordRemoveInfoType using the data accessed by the specified SOB_SatelliteRecordRemoveInfoType
    * (cloning).
    *
    * @param accessor The SOB_SatelliteRecordRemoveInfoType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created SOB_SatelliteRecordRemoveInfoType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SOB_SatelliteRecordRemoveInfoType.
    */
  static UCI_EXPORT SOB_SatelliteRecordRemoveInfoType& create(const SOB_SatelliteRecordRemoveInfoType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SOB_SatelliteRecordRemoveInfoType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The SOB_SatelliteRecordRemoveInfoType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SOB_SatelliteRecordRemoveInfoType& accessor);

  /** Returns this accessor's type constant, i.e. sOB_SatelliteRecordRemoveInfoType.
    *
    * @return This accessor's type constant, i.e. sOB_SatelliteRecordRemoveInfoType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::sOB_SatelliteRecordRemoveInfoType;
  }

  /** Returns the version that was initialized from the uci:version attribute of SOB_SatelliteRecordRemoveInfoType.
    *
    * @return The version that was initialized from the uci:version attribute of SOB_SatelliteRecordRemoveInfoType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SOB_SatelliteRecordRemoveInfoType& accessor) = 0;

  /** Returns a const reference to the value of the enumeration identified by RemoveReason.
    *
    * @return A const reference to the value of the enumeration identified by RemoveReason.
    */
  virtual const uci::type::EntityRemoveReasonEnum& getRemoveReason() const = 0;

  /** Returns a reference to the value of the enumeration identified by RemoveReason.
    *
    * @return A reference to the value of the enumeration identified by RemoveReason.
    */
  virtual uci::type::EntityRemoveReasonEnum& getRemoveReason() = 0;

  /** Sets the value of the enumeration identified by RemoveReason.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SOB_SatelliteRecordRemoveInfoType& setRemoveReason(const uci::type::EntityRemoveReasonEnum& value) = 0;

  /** Sets the value of the enumeration identified by RemoveReason.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SOB_SatelliteRecordRemoveInfoType& setRemoveReason(uci::type::EntityRemoveReasonEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by MergedToID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by MergedToID.
    */
  virtual const uci::type::SOB_SatelliteRecordID_Type& getMergedToID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by MergedToID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by MergedToID.
    */
  virtual uci::type::SOB_SatelliteRecordID_Type& getMergedToID() = 0;

  /** Sets the complex content identified by MergedToID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by MergedToID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SOB_SatelliteRecordRemoveInfoType& setMergedToID(const uci::type::SOB_SatelliteRecordID_Type& value) = 0;

  /** Returns whether the Element identified by MergedToID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by MergedToID is enabled or not.
    */
  virtual bool hasMergedToID() const = 0;

  /** Enables the Element identified by MergedToID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by MergedToID.
    */
  virtual uci::type::SOB_SatelliteRecordID_Type& enableMergedToID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by MergedToID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SOB_SatelliteRecordRemoveInfoType& clearMergedToID() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SOB_SatelliteRecordRemoveInfoType() {
  }

  /** The destructor [only available to derived classes]. */
  ~SOB_SatelliteRecordRemoveInfoType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SOB_SatelliteRecordRemoveInfoType to copy from.
    */
  SOB_SatelliteRecordRemoveInfoType(const SOB_SatelliteRecordRemoveInfoType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SOB_SatelliteRecordRemoveInfoType to the contents of the
    * SOB_SatelliteRecordRemoveInfoType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The SOB_SatelliteRecordRemoveInfoType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this SOB_SatelliteRecordRemoveInfoType.
    * @return A reference to this SOB_SatelliteRecordRemoveInfoType.
    */
  SOB_SatelliteRecordRemoveInfoType& operator=(const SOB_SatelliteRecordRemoveInfoType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SOB_SATELLITERECORDREMOVEINFOTYPE_H

