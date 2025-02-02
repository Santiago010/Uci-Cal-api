/** @file AO_CodeType.h
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

#ifndef UCI_TYPE_AO_CODETYPE_H
#define UCI_TYPE_AO_CODETYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "AO_PIM_CodeType.h"
#include "AO_PRF_CodeType.h"

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
class AO_CodeType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new AO_CodeType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed AO_CodeType.
    */
  static UCI_EXPORT AO_CodeType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new AO_CodeType initializing the data accessed by the new AO_CodeType using the data
    * accessed by the specified AO_CodeType (cloning).
    *
    * @param accessor The AO_CodeType that provides access to the data that is to be used to initialize the data accessed
    *      by the new created AO_CodeType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed AO_CodeType.
    */
  static UCI_EXPORT AO_CodeType& create(const AO_CodeType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified AO_CodeType. Use of the specified accessor after it has been destroyed will result
    * in undefined behavior.
    *
    * @param accessor The AO_CodeType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(AO_CodeType& accessor);

  /** Returns this accessor's type constant, i.e. aO_CodeType.
    *
    * @return This accessor's type constant, i.e. aO_CodeType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::aO_CodeType;
  }

  /** Returns the version that was initialized from the uci:version attribute of AO_CodeType.
    *
    * @return The version that was initialized from the uci:version attribute of AO_CodeType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const AO_CodeType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by PRF_Code.
    *
    * @return A const reference to the accessor that provides access to the string identified by PRF_Code.
    */
  virtual const uci::type::AO_PRF_CodeType& getPRF_Code() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by PRF_Code.
    *
    * @return A reference to the accessor that provides access to the string identified by PRF_Code.
    */
  virtual uci::type::AO_PRF_CodeType& getPRF_Code() = 0;

  /** Sets the string identified by PRF_Code to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by PRF_Code.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_CodeType& setPRF_Code(const uci::type::AO_PRF_CodeType& value) = 0;

  /** Sets the string identified by PRF_Code to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_CodeType& setPRF_Code(const std::string& value) = 0;

  /** Sets the string identified by PRF_Code to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_CodeType& setPRF_Code(const char* value) = 0;

  /** Returns whether the Element identified by PRF_Code exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PRF_Code is enabled or not.
    */
  virtual bool hasPRF_Code() const = 0;

  /** Enables the Element identified by PRF_Code.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by PRF_Code.
    */
  virtual uci::type::AO_PRF_CodeType& enablePRF_Code(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by PRF_Code.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_CodeType& clearPRF_Code() = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by PIM_Code.
    *
    * @return A const reference to the accessor that provides access to the string identified by PIM_Code.
    */
  virtual const uci::type::AO_PIM_CodeType& getPIM_Code() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by PIM_Code.
    *
    * @return A reference to the accessor that provides access to the string identified by PIM_Code.
    */
  virtual uci::type::AO_PIM_CodeType& getPIM_Code() = 0;

  /** Sets the string identified by PIM_Code to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by PIM_Code.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_CodeType& setPIM_Code(const uci::type::AO_PIM_CodeType& value) = 0;

  /** Sets the string identified by PIM_Code to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_CodeType& setPIM_Code(const std::string& value) = 0;

  /** Sets the string identified by PIM_Code to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_CodeType& setPIM_Code(const char* value) = 0;

  /** Returns whether the Element identified by PIM_Code exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PIM_Code is enabled or not.
    */
  virtual bool hasPIM_Code() const = 0;

  /** Enables the Element identified by PIM_Code.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by PIM_Code.
    */
  virtual uci::type::AO_PIM_CodeType& enablePIM_Code(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by PIM_Code.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_CodeType& clearPIM_Code() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  AO_CodeType() {
  }

  /** The destructor [only available to derived classes]. */
  ~AO_CodeType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The AO_CodeType to copy from.
    */
  AO_CodeType(const AO_CodeType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this AO_CodeType to the contents of the AO_CodeType on the right hand
    * side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The AO_CodeType on the right hand side (rhs) of the assignment operator whose contents are used to set the
    *      contents of this AO_CodeType.
    * @return A reference to this AO_CodeType.
    */
  AO_CodeType& operator=(const AO_CodeType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_AO_CODETYPE_H

