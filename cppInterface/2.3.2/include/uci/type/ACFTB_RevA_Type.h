/** @file ACFTB_RevA_Type.h
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

#ifndef UCI_TYPE_ACFTB_REVA_TYPE_H
#define UCI_TYPE_ACFTB_REVA_TYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "VisibleString20Type.h"

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
class ACFTB_RevA_Type : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ACFTB_RevA_Type.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ACFTB_RevA_Type.
    */
  static UCI_EXPORT ACFTB_RevA_Type& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ACFTB_RevA_Type initializing the data accessed by the new ACFTB_RevA_Type using the data
    * accessed by the specified ACFTB_RevA_Type (cloning).
    *
    * @param accessor The ACFTB_RevA_Type that provides access to the data that is to be used to initialize the data
    *      accessed by the new created ACFTB_RevA_Type.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ACFTB_RevA_Type.
    */
  static UCI_EXPORT ACFTB_RevA_Type& create(const ACFTB_RevA_Type& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ACFTB_RevA_Type. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The ACFTB_RevA_Type that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ACFTB_RevA_Type& accessor);

  /** Returns this accessor's type constant, i.e. aCFTB_RevA_Type.
    *
    * @return This accessor's type constant, i.e. aCFTB_RevA_Type.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::aCFTB_RevA_Type;
  }

  /** Returns the version that was initialized from the uci:version attribute of ACFTB_RevA_Type.
    *
    * @return The version that was initialized from the uci:version attribute of ACFTB_RevA_Type.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ACFTB_RevA_Type& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by AC_MSN_Identifier.
    *
    * @return A const reference to the accessor that provides access to the string identified by AC_MSN_Identifier.
    */
  virtual const uci::type::VisibleString20Type& getAC_MSN_Identifier() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by AC_MSN_Identifier.
    *
    * @return A reference to the accessor that provides access to the string identified by AC_MSN_Identifier.
    */
  virtual uci::type::VisibleString20Type& getAC_MSN_Identifier() = 0;

  /** Sets the string identified by AC_MSN_Identifier to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by AC_MSN_Identifier.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ACFTB_RevA_Type& setAC_MSN_Identifier(const uci::type::VisibleString20Type& value) = 0;

  /** Sets the string identified by AC_MSN_Identifier to the contents of the string that is accessed by the specified
    * accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ACFTB_RevA_Type& setAC_MSN_Identifier(const std::string& value) = 0;

  /** Sets the string identified by AC_MSN_Identifier to the contents of the string that is accessed by the specified
    * accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ACFTB_RevA_Type& setAC_MSN_Identifier(const char* value) = 0;

  /** Returns whether the Element identified by AC_MSN_Identifier exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by AC_MSN_Identifier is enabled or not.
    */
  virtual bool hasAC_MSN_Identifier() const = 0;

  /** Enables the Element identified by AC_MSN_Identifier.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by AC_MSN_Identifier.
    */
  virtual uci::type::VisibleString20Type& enableAC_MSN_Identifier(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by AC_MSN_Identifier.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ACFTB_RevA_Type& clearAC_MSN_Identifier() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ACFTB_RevA_Type() {
  }

  /** The destructor [only available to derived classes]. */
  ~ACFTB_RevA_Type() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ACFTB_RevA_Type to copy from.
    */
  ACFTB_RevA_Type(const ACFTB_RevA_Type& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ACFTB_RevA_Type to the contents of the ACFTB_RevA_Type on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The ACFTB_RevA_Type on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this ACFTB_RevA_Type.
    * @return A reference to this ACFTB_RevA_Type.
    */
  ACFTB_RevA_Type& operator=(const ACFTB_RevA_Type& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ACFTB_REVA_TYPE_H

