/** @file EA_TaskProtectedAssetsType.h
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

#ifndef UCI_TYPE_EA_TASKPROTECTEDASSETSTYPE_H
#define UCI_TYPE_EA_TASKPROTECTEDASSETSTYPE_H

#include "../base/Accessor.h"
#include "../base/BooleanAccessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ProtectedAssetAndThreatType.h"

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
class EA_TaskProtectedAssetsType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new EA_TaskProtectedAssetsType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EA_TaskProtectedAssetsType.
    */
  static UCI_EXPORT EA_TaskProtectedAssetsType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EA_TaskProtectedAssetsType initializing the data accessed by the new
    * EA_TaskProtectedAssetsType using the data accessed by the specified EA_TaskProtectedAssetsType (cloning).
    *
    * @param accessor The EA_TaskProtectedAssetsType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created EA_TaskProtectedAssetsType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EA_TaskProtectedAssetsType.
    */
  static UCI_EXPORT EA_TaskProtectedAssetsType& create(const EA_TaskProtectedAssetsType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EA_TaskProtectedAssetsType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The EA_TaskProtectedAssetsType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EA_TaskProtectedAssetsType& accessor);

  /** Returns this accessor's type constant, i.e. eA_TaskProtectedAssetsType.
    *
    * @return This accessor's type constant, i.e. eA_TaskProtectedAssetsType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::eA_TaskProtectedAssetsType;
  }

  /** Returns the version that was initialized from the uci:version attribute of EA_TaskProtectedAssetsType.
    *
    * @return The version that was initialized from the uci:version attribute of EA_TaskProtectedAssetsType.
    */
  static std::string getUCITypeVersion() {
    return "000.001.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EA_TaskProtectedAssetsType& accessor) = 0;

  /** Indicates the identity and priority of protected assets. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::ProtectedAssetAndThreatType, uci::type::accessorType::protectedAssetAndThreatType> ProtectedAsset;

  /** Returns the value of the SimplePrimitive data type identified by ProtectAll.
    *
    * @return The value of the simple primitive data type identified by ProtectAll.
    */
  virtual xs::Boolean getProtectAll() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ProtectAll.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_TaskProtectedAssetsType& setProtectAll(xs::Boolean value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by SelfProtect.
    *
    * @return The value of the simple primitive data type identified by SelfProtect.
    */
  virtual xs::Boolean getSelfProtect() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by SelfProtect.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_TaskProtectedAssetsType& setSelfProtect(xs::Boolean value) = 0;

  /** Returns a const reference to the bounded list identified by ProtectedAsset.
    *
    * @return A const reference to the bounded list identified by ProtectedAsset.
    */
  virtual const uci::type::EA_TaskProtectedAssetsType::ProtectedAsset& getProtectedAsset() const = 0;

  /** Returns a reference to the bounded list identified by ProtectedAsset.
    *
    * @return A reference to the bounded list identified by ProtectedAsset.
    */
  virtual uci::type::EA_TaskProtectedAssetsType::ProtectedAsset& getProtectedAsset() = 0;

  /** Sets the bounded list identified by ProtectedAsset.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_TaskProtectedAssetsType& setProtectedAsset(const uci::type::EA_TaskProtectedAssetsType::ProtectedAsset& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EA_TaskProtectedAssetsType() {
  }

  /** The destructor [only available to derived classes]. */
  ~EA_TaskProtectedAssetsType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EA_TaskProtectedAssetsType to copy from.
    */
  EA_TaskProtectedAssetsType(const EA_TaskProtectedAssetsType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EA_TaskProtectedAssetsType to the contents of the
    * EA_TaskProtectedAssetsType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The EA_TaskProtectedAssetsType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this EA_TaskProtectedAssetsType.
    * @return A reference to this EA_TaskProtectedAssetsType.
    */
  EA_TaskProtectedAssetsType& operator=(const EA_TaskProtectedAssetsType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_EA_TASKPROTECTEDASSETSTYPE_H

