/** @file MessageTransmissionFilterRecordMDT.h
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

#ifndef UCI_TYPE_MESSAGETRANSMISSIONFILTERRECORDMDT_H
#define UCI_TYPE_MESSAGETRANSMISSIONFILTERRECORDMDT_H

#include "../base/export.h"
#include "MessageConfigurationType.h"
#include "MessageTransmissionFilterRecordDRLE.h"

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
class MessageTransmissionFilterRecordMDT : public virtual MessageTransmissionFilterRecordDRLE {
public:

  /** This method constructs a new MessageTransmissionFilterRecordMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed MessageTransmissionFilterRecordMDT.
    */
  static UCI_EXPORT MessageTransmissionFilterRecordMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new MessageTransmissionFilterRecordMDT initializing the data accessed by the new
    * MessageTransmissionFilterRecordMDT using the data accessed by the specified MessageTransmissionFilterRecordMDT
    * (cloning).
    *
    * @param accessor The MessageTransmissionFilterRecordMDT that provides access to the data that is to be used to
    *      initialize the data accessed by the new created MessageTransmissionFilterRecordMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed MessageTransmissionFilterRecordMDT.
    */
  static UCI_EXPORT MessageTransmissionFilterRecordMDT& create(const MessageTransmissionFilterRecordMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified MessageTransmissionFilterRecordMDT. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The MessageTransmissionFilterRecordMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(MessageTransmissionFilterRecordMDT& accessor);

  /** Returns this accessor's type constant, i.e. messageTransmissionFilterRecordMDT.
    *
    * @return This accessor's type constant, i.e. messageTransmissionFilterRecordMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::messageTransmissionFilterRecordMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of MessageTransmissionFilterRecordMDT.
    *
    * @return The version that was initialized from the uci:version attribute of MessageTransmissionFilterRecordMDT.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const MessageTransmissionFilterRecordMDT& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * MessageFilterParameters.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      MessageFilterParameters.
    */
  virtual const uci::type::MessageConfigurationType& getMessageFilterParameters() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * MessageFilterParameters.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      MessageFilterParameters.
    */
  virtual uci::type::MessageConfigurationType& getMessageFilterParameters() = 0;

  /** Sets the complex content identified by MessageFilterParameters to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by MessageFilterParameters.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MessageTransmissionFilterRecordMDT& setMessageFilterParameters(const uci::type::MessageConfigurationType& value) = 0;

  /** Returns whether the Element identified by MessageFilterParameters exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by MessageFilterParameters is enabled or not.
    */
  virtual bool hasMessageFilterParameters() const = 0;

  /** Enables the Element identified by MessageFilterParameters.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      MessageFilterParameters.
    */
  virtual uci::type::MessageConfigurationType& enableMessageFilterParameters(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by MessageFilterParameters.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MessageTransmissionFilterRecordMDT& clearMessageFilterParameters() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  MessageTransmissionFilterRecordMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~MessageTransmissionFilterRecordMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The MessageTransmissionFilterRecordMDT to copy from.
    */
  MessageTransmissionFilterRecordMDT(const MessageTransmissionFilterRecordMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this MessageTransmissionFilterRecordMDT to the contents of the
    * MessageTransmissionFilterRecordMDT on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The MessageTransmissionFilterRecordMDT on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this MessageTransmissionFilterRecordMDT.
    * @return A reference to this MessageTransmissionFilterRecordMDT.
    */
  MessageTransmissionFilterRecordMDT& operator=(const MessageTransmissionFilterRecordMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_MESSAGETRANSMISSIONFILTERRECORDMDT_H

