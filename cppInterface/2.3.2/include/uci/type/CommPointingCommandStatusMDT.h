/** @file CommPointingCommandStatusMDT.h
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

#ifndef UCI_TYPE_COMMPOINTINGCOMMANDSTATUSMDT_H
#define UCI_TYPE_COMMPOINTINGCOMMANDSTATUSMDT_H

#include "../base/export.h"
#include "CommPointingID_Type.h"
#include "CommandStatusBaseType.h"
#include "PointingVectorStatusEnum.h"

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
class CommPointingCommandStatusMDT : public virtual CommandStatusBaseType {
public:

  /** This method constructs a new CommPointingCommandStatusMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommPointingCommandStatusMDT.
    */
  static UCI_EXPORT CommPointingCommandStatusMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CommPointingCommandStatusMDT initializing the data accessed by the new
    * CommPointingCommandStatusMDT using the data accessed by the specified CommPointingCommandStatusMDT (cloning).
    *
    * @param accessor The CommPointingCommandStatusMDT that provides access to the data that is to be used to initialize
    *      the data accessed by the new created CommPointingCommandStatusMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommPointingCommandStatusMDT.
    */
  static UCI_EXPORT CommPointingCommandStatusMDT& create(const CommPointingCommandStatusMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CommPointingCommandStatusMDT. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The CommPointingCommandStatusMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CommPointingCommandStatusMDT& accessor);

  /** Returns this accessor's type constant, i.e. commPointingCommandStatusMDT.
    *
    * @return This accessor's type constant, i.e. commPointingCommandStatusMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::commPointingCommandStatusMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of CommPointingCommandStatusMDT.
    *
    * @return The version that was initialized from the uci:version attribute of CommPointingCommandStatusMDT.
    */
  static std::string getUCITypeVersion() {
    return "002.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CommPointingCommandStatusMDT& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by CommPointingID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by CommPointingID.
    */
  virtual const uci::type::CommPointingID_Type& getCommPointingID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by CommPointingID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by CommPointingID.
    */
  virtual uci::type::CommPointingID_Type& getCommPointingID() = 0;

  /** Sets the complex content identified by CommPointingID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CommPointingID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommPointingCommandStatusMDT& setCommPointingID(const uci::type::CommPointingID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by PointingVectorCommandStatus.
    *
    * @return A const reference to the value of the enumeration identified by PointingVectorCommandStatus.
    */
  virtual const uci::type::PointingVectorStatusEnum& getPointingVectorCommandStatus() const = 0;

  /** Returns a reference to the value of the enumeration identified by PointingVectorCommandStatus.
    *
    * @return A reference to the value of the enumeration identified by PointingVectorCommandStatus.
    */
  virtual uci::type::PointingVectorStatusEnum& getPointingVectorCommandStatus() = 0;

  /** Sets the value of the enumeration identified by PointingVectorCommandStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommPointingCommandStatusMDT& setPointingVectorCommandStatus(const uci::type::PointingVectorStatusEnum& value) = 0;

  /** Sets the value of the enumeration identified by PointingVectorCommandStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommPointingCommandStatusMDT& setPointingVectorCommandStatus(uci::type::PointingVectorStatusEnum::EnumerationItem value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CommPointingCommandStatusMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~CommPointingCommandStatusMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CommPointingCommandStatusMDT to copy from.
    */
  CommPointingCommandStatusMDT(const CommPointingCommandStatusMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CommPointingCommandStatusMDT to the contents of the
    * CommPointingCommandStatusMDT on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The CommPointingCommandStatusMDT on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this CommPointingCommandStatusMDT.
    * @return A reference to this CommPointingCommandStatusMDT.
    */
  CommPointingCommandStatusMDT& operator=(const CommPointingCommandStatusMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_COMMPOINTINGCOMMANDSTATUSMDT_H

