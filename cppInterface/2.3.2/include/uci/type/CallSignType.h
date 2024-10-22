/** @file CallSignType.h
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

#ifndef UCI_TYPE_CALLSIGNTYPE_H
#define UCI_TYPE_CALLSIGNTYPE_H

#include "../base/export.h"
#include "ForeignKeyType.h"

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

/** Indicates an associated call sign. Multiple call signs are allowed for different communications systems, registries
  * or other reasons. The use of ForeignKeyType is an indication that call signs aren't universally defined and come from
  * multiple systems/sources but they are expected to be unique within the context of their source. For a call sign in
  * UCI, the CallSignType.Key element indicates the call sign itself and the CallSignType.SystemName element indicates
  * the system that assigned it and ensures it is unique. For example, a call sign that came from a Link-16 system might
  * have Key=Phantom01 and SystemName=Link16Voice.
  */
class CallSignType : public virtual ForeignKeyType {
public:

  /** This method constructs a new CallSignType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CallSignType.
    */
  static UCI_EXPORT CallSignType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CallSignType initializing the data accessed by the new CallSignType using the data
    * accessed by the specified CallSignType (cloning).
    *
    * @param accessor The CallSignType that provides access to the data that is to be used to initialize the data accessed
    *      by the new created CallSignType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CallSignType.
    */
  static UCI_EXPORT CallSignType& create(const CallSignType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CallSignType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The CallSignType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CallSignType& accessor);

  /** Returns this accessor's type constant, i.e. callSignType.
    *
    * @return This accessor's type constant, i.e. callSignType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::callSignType;
  }

  /** Returns the version that was initialized from the uci:version attribute of CallSignType.
    *
    * @return The version that was initialized from the uci:version attribute of CallSignType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CallSignType& accessor) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CallSignType() {
  }

  /** The destructor [only available to derived classes]. */
  ~CallSignType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CallSignType to copy from.
    */
  CallSignType(const CallSignType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CallSignType to the contents of the CallSignType on the right hand
    * side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The CallSignType on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this CallSignType.
    * @return A reference to this CallSignType.
    */
  CallSignType& operator=(const CallSignType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_CALLSIGNTYPE_H

