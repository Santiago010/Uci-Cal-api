/** @file ESM_BinPrecedenceType.h
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

#ifndef UCI_TYPE_ESM_BINPRECEDENCETYPE_H
#define UCI_TYPE_ESM_BINPRECEDENCETYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "ComparableRankingType.h"
#include "ESM_SubCapabilityEnum.h"

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
class ESM_BinPrecedenceType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ESM_BinPrecedenceType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ESM_BinPrecedenceType.
    */
  static UCI_EXPORT ESM_BinPrecedenceType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ESM_BinPrecedenceType initializing the data accessed by the new ESM_BinPrecedenceType
    * using the data accessed by the specified ESM_BinPrecedenceType (cloning).
    *
    * @param accessor The ESM_BinPrecedenceType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created ESM_BinPrecedenceType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ESM_BinPrecedenceType.
    */
  static UCI_EXPORT ESM_BinPrecedenceType& create(const ESM_BinPrecedenceType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ESM_BinPrecedenceType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The ESM_BinPrecedenceType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ESM_BinPrecedenceType& accessor);

  /** Returns this accessor's type constant, i.e. eSM_BinPrecedenceType.
    *
    * @return This accessor's type constant, i.e. eSM_BinPrecedenceType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::eSM_BinPrecedenceType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ESM_BinPrecedenceType.
    *
    * @return The version that was initialized from the uci:version attribute of ESM_BinPrecedenceType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ESM_BinPrecedenceType& accessor) = 0;

  /** Returns a const reference to the value of the enumeration identified by SubCapability.
    *
    * @return A const reference to the value of the enumeration identified by SubCapability.
    */
  virtual const uci::type::ESM_SubCapabilityEnum& getSubCapability() const = 0;

  /** Returns a reference to the value of the enumeration identified by SubCapability.
    *
    * @return A reference to the value of the enumeration identified by SubCapability.
    */
  virtual uci::type::ESM_SubCapabilityEnum& getSubCapability() = 0;

  /** Sets the value of the enumeration identified by SubCapability.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_BinPrecedenceType& setSubCapability(const uci::type::ESM_SubCapabilityEnum& value) = 0;

  /** Sets the value of the enumeration identified by SubCapability.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_BinPrecedenceType& setSubCapability(uci::type::ESM_SubCapabilityEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by SubCapability exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SubCapability is enabled or not.
    */
  virtual bool hasSubCapability() const = 0;

  /** Enables the Element identified by SubCapability.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by SubCapability.
    */
  virtual uci::type::ESM_SubCapabilityEnum& enableSubCapability(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by SubCapability.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_BinPrecedenceType& clearSubCapability() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * SubCapabilityRanking.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      SubCapabilityRanking.
    */
  virtual const uci::type::ComparableRankingType& getSubCapabilityRanking() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SubCapabilityRanking.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SubCapabilityRanking.
    */
  virtual uci::type::ComparableRankingType& getSubCapabilityRanking() = 0;

  /** Sets the complex content identified by SubCapabilityRanking to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SubCapabilityRanking.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_BinPrecedenceType& setSubCapabilityRanking(const uci::type::ComparableRankingType& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ESM_BinPrecedenceType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ESM_BinPrecedenceType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ESM_BinPrecedenceType to copy from.
    */
  ESM_BinPrecedenceType(const ESM_BinPrecedenceType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ESM_BinPrecedenceType to the contents of the ESM_BinPrecedenceType
    * on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The ESM_BinPrecedenceType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this ESM_BinPrecedenceType.
    * @return A reference to this ESM_BinPrecedenceType.
    */
  ESM_BinPrecedenceType& operator=(const ESM_BinPrecedenceType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ESM_BINPRECEDENCETYPE_H

