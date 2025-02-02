/** @file Link16HazardType.h
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

#ifndef UCI_TYPE_LINK16HAZARDTYPE_H
#define UCI_TYPE_LINK16HAZARDTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "Link16HazardBurstEnum.h"
#include "Link16HazardYieldEnum.h"

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

/** A set of navigation or weapon hazard point types conveyed over Link 16 */
class Link16HazardType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new Link16HazardType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed Link16HazardType.
    */
  static UCI_EXPORT Link16HazardType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new Link16HazardType initializing the data accessed by the new Link16HazardType using the
    * data accessed by the specified Link16HazardType (cloning).
    *
    * @param accessor The Link16HazardType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created Link16HazardType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed Link16HazardType.
    */
  static UCI_EXPORT Link16HazardType& create(const Link16HazardType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified Link16HazardType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The Link16HazardType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(Link16HazardType& accessor);

  /** Returns this accessor's type constant, i.e. link16HazardType.
    *
    * @return This accessor's type constant, i.e. link16HazardType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::link16HazardType;
  }

  /** Returns the version that was initialized from the uci:version attribute of Link16HazardType.
    *
    * @return The version that was initialized from the uci:version attribute of Link16HazardType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const Link16HazardType& accessor) = 0;

  /** Returns a const reference to the value of the enumeration identified by Burst.
    *
    * @return A const reference to the value of the enumeration identified by Burst.
    */
  virtual const uci::type::Link16HazardBurstEnum& getBurst() const = 0;

  /** Returns a reference to the value of the enumeration identified by Burst.
    *
    * @return A reference to the value of the enumeration identified by Burst.
    */
  virtual uci::type::Link16HazardBurstEnum& getBurst() = 0;

  /** Sets the value of the enumeration identified by Burst.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Link16HazardType& setBurst(const uci::type::Link16HazardBurstEnum& value) = 0;

  /** Sets the value of the enumeration identified by Burst.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Link16HazardType& setBurst(uci::type::Link16HazardBurstEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by Burst exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Burst is enabled or not.
    */
  virtual bool hasBurst() const = 0;

  /** Enables the Element identified by Burst.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by Burst.
    */
  virtual uci::type::Link16HazardBurstEnum& enableBurst(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Burst.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Link16HazardType& clearBurst() = 0;

  /** Returns a const reference to the value of the enumeration identified by Yield.
    *
    * @return A const reference to the value of the enumeration identified by Yield.
    */
  virtual const uci::type::Link16HazardYieldEnum& getYield() const = 0;

  /** Returns a reference to the value of the enumeration identified by Yield.
    *
    * @return A reference to the value of the enumeration identified by Yield.
    */
  virtual uci::type::Link16HazardYieldEnum& getYield() = 0;

  /** Sets the value of the enumeration identified by Yield.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Link16HazardType& setYield(const uci::type::Link16HazardYieldEnum& value) = 0;

  /** Sets the value of the enumeration identified by Yield.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Link16HazardType& setYield(uci::type::Link16HazardYieldEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by Yield exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Yield is enabled or not.
    */
  virtual bool hasYield() const = 0;

  /** Enables the Element identified by Yield.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by Yield.
    */
  virtual uci::type::Link16HazardYieldEnum& enableYield(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Yield.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Link16HazardType& clearYield() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  Link16HazardType() {
  }

  /** The destructor [only available to derived classes]. */
  ~Link16HazardType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The Link16HazardType to copy from.
    */
  Link16HazardType(const Link16HazardType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this Link16HazardType to the contents of the Link16HazardType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The Link16HazardType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this Link16HazardType.
    * @return A reference to this Link16HazardType.
    */
  Link16HazardType& operator=(const Link16HazardType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_LINK16HAZARDTYPE_H

