/** @file PO_ComponentStatusLensAssemblyFieldOfViewType.h
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

#ifndef UCI_TYPE_PO_COMPONENTSTATUSLENSASSEMBLYFIELDOFVIEWTYPE_H
#define UCI_TYPE_PO_COMPONENTSTATUSLENSASSEMBLYFIELDOFVIEWTYPE_H

#include "../base/Accessor.h"
#include "../base/BooleanAccessor.h"
#include "../base/export.h"
#include "AngleQuarterType.h"
#include "IncrementalChangeEnum.h"

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
class PO_ComponentStatusLensAssemblyFieldOfViewType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PO_ComponentStatusLensAssemblyFieldOfViewType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_ComponentStatusLensAssemblyFieldOfViewType.
    */
  static UCI_EXPORT PO_ComponentStatusLensAssemblyFieldOfViewType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PO_ComponentStatusLensAssemblyFieldOfViewType initializing the data accessed by the new
    * PO_ComponentStatusLensAssemblyFieldOfViewType using the data accessed by the specified
    * PO_ComponentStatusLensAssemblyFieldOfViewType (cloning).
    *
    * @param accessor The PO_ComponentStatusLensAssemblyFieldOfViewType that provides access to the data that is to be used
    *      to initialize the data accessed by the new created PO_ComponentStatusLensAssemblyFieldOfViewType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_ComponentStatusLensAssemblyFieldOfViewType.
    */
  static UCI_EXPORT PO_ComponentStatusLensAssemblyFieldOfViewType& create(const PO_ComponentStatusLensAssemblyFieldOfViewType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PO_ComponentStatusLensAssemblyFieldOfViewType. Use of the specified accessor after
    * it has been destroyed will result in undefined behavior.
    *
    * @param accessor The PO_ComponentStatusLensAssemblyFieldOfViewType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PO_ComponentStatusLensAssemblyFieldOfViewType& accessor);

  /** Returns this accessor's type constant, i.e. pO_ComponentStatusLensAssemblyFieldOfViewType.
    *
    * @return This accessor's type constant, i.e. pO_ComponentStatusLensAssemblyFieldOfViewType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::pO_ComponentStatusLensAssemblyFieldOfViewType;
  }

  /** Returns the version that was initialized from the uci:version attribute of
    * PO_ComponentStatusLensAssemblyFieldOfViewType.
    *
    * @return The version that was initialized from the uci:version attribute of
    *      PO_ComponentStatusLensAssemblyFieldOfViewType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PO_ComponentStatusLensAssemblyFieldOfViewType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by FOV_Setting.
    *
    * @return The value of the simple primitive data type identified by FOV_Setting.
    */
  virtual uci::type::AngleQuarterTypeValue getFOV_Setting() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by FOV_Setting.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyFieldOfViewType& setFOV_Setting(uci::type::AngleQuarterTypeValue value) = 0;

  /** Returns whether the Element identified by FOV_Setting exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by FOV_Setting is enabled or not.
    */
  virtual bool hasFOV_Setting() const = 0;

  /** Clears (disabled) the Element identified by FOV_Setting.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyFieldOfViewType& clearFOV_Setting() = 0;

  /** Returns the value of the SimplePrimitive data type identified by AutoZoom.
    *
    * @return The value of the simple primitive data type identified by AutoZoom.
    */
  virtual xs::Boolean getAutoZoom() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by AutoZoom.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyFieldOfViewType& setAutoZoom(xs::Boolean value) = 0;

  /** Returns whether the Element identified by AutoZoom exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by AutoZoom is enabled or not.
    */
  virtual bool hasAutoZoom() const = 0;

  /** Clears (disabled) the Element identified by AutoZoom.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyFieldOfViewType& clearAutoZoom() = 0;

  /** Returns a const reference to the value of the enumeration identified by ChangeType.
    *
    * @return A const reference to the value of the enumeration identified by ChangeType.
    */
  virtual const uci::type::IncrementalChangeEnum& getChangeType() const = 0;

  /** Returns a reference to the value of the enumeration identified by ChangeType.
    *
    * @return A reference to the value of the enumeration identified by ChangeType.
    */
  virtual uci::type::IncrementalChangeEnum& getChangeType() = 0;

  /** Sets the value of the enumeration identified by ChangeType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyFieldOfViewType& setChangeType(const uci::type::IncrementalChangeEnum& value) = 0;

  /** Sets the value of the enumeration identified by ChangeType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyFieldOfViewType& setChangeType(uci::type::IncrementalChangeEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by ChangeType exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ChangeType is enabled or not.
    */
  virtual bool hasChangeType() const = 0;

  /** Enables the Element identified by ChangeType.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by ChangeType.
    */
  virtual uci::type::IncrementalChangeEnum& enableChangeType(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ChangeType.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyFieldOfViewType& clearChangeType() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PO_ComponentStatusLensAssemblyFieldOfViewType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PO_ComponentStatusLensAssemblyFieldOfViewType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PO_ComponentStatusLensAssemblyFieldOfViewType to copy from.
    */
  PO_ComponentStatusLensAssemblyFieldOfViewType(const PO_ComponentStatusLensAssemblyFieldOfViewType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PO_ComponentStatusLensAssemblyFieldOfViewType to the contents of
    * the PO_ComponentStatusLensAssemblyFieldOfViewType on the right hand side (rhs) of the assignment operator [only
    * available to derived classes].
    *
    * @param rhs The PO_ComponentStatusLensAssemblyFieldOfViewType on the right hand side (rhs) of the assignment operator
    *      whose contents are used to set the contents of this PO_ComponentStatusLensAssemblyFieldOfViewType.
    * @return A reference to this PO_ComponentStatusLensAssemblyFieldOfViewType.
    */
  PO_ComponentStatusLensAssemblyFieldOfViewType& operator=(const PO_ComponentStatusLensAssemblyFieldOfViewType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PO_COMPONENTSTATUSLENSASSEMBLYFIELDOFVIEWTYPE_H

