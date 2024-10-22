/** @file RequirementTemplateOptionType.h
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

#ifndef UCI_TYPE_REQUIREMENTTEMPLATEOPTIONTYPE_H
#define UCI_TYPE_REQUIREMENTTEMPLATEOPTIONTYPE_H

#include "../base/Accessor.h"
#include "../base/UnsignedIntAccessor.h"
#include "../base/export.h"
#include "CapabilityCommandTemporalConstraintsType.h"
#include "RequirementConstraintsType.h"
#include "ResponseOptionType.h"

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
class RequirementTemplateOptionType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new RequirementTemplateOptionType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RequirementTemplateOptionType.
    */
  static UCI_EXPORT RequirementTemplateOptionType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new RequirementTemplateOptionType initializing the data accessed by the new
    * RequirementTemplateOptionType using the data accessed by the specified RequirementTemplateOptionType (cloning).
    *
    * @param accessor The RequirementTemplateOptionType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created RequirementTemplateOptionType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RequirementTemplateOptionType.
    */
  static UCI_EXPORT RequirementTemplateOptionType& create(const RequirementTemplateOptionType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified RequirementTemplateOptionType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The RequirementTemplateOptionType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(RequirementTemplateOptionType& accessor);

  /** Returns this accessor's type constant, i.e. requirementTemplateOptionType.
    *
    * @return This accessor's type constant, i.e. requirementTemplateOptionType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::requirementTemplateOptionType;
  }

  /** Returns the version that was initialized from the uci:version attribute of RequirementTemplateOptionType.
    *
    * @return The version that was initialized from the uci:version attribute of RequirementTemplateOptionType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const RequirementTemplateOptionType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by RequirementOptionIndex.
    *
    * @return The value of the simple primitive data type identified by RequirementOptionIndex.
    */
  virtual xs::UnsignedInt getRequirementOptionIndex() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by RequirementOptionIndex.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementTemplateOptionType& setRequirementOptionIndex(xs::UnsignedInt value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Requirement.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Requirement.
    */
  virtual const uci::type::ResponseOptionType& getRequirement() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Requirement.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Requirement.
    */
  virtual uci::type::ResponseOptionType& getRequirement() = 0;

  /** Sets the complex content identified by Requirement to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Requirement.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementTemplateOptionType& setRequirement(const uci::type::ResponseOptionType& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * RequirementConstraints.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      RequirementConstraints.
    */
  virtual const uci::type::RequirementConstraintsType& getRequirementConstraints() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by RequirementConstraints.
    *
    * @return A reference to the accessor that provides access to the complex content identified by RequirementConstraints.
    */
  virtual uci::type::RequirementConstraintsType& getRequirementConstraints() = 0;

  /** Sets the complex content identified by RequirementConstraints to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by RequirementConstraints.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementTemplateOptionType& setRequirementConstraints(const uci::type::RequirementConstraintsType& value) = 0;

  /** Returns whether the Element identified by RequirementConstraints exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RequirementConstraints is enabled or not.
    */
  virtual bool hasRequirementConstraints() const = 0;

  /** Enables the Element identified by RequirementConstraints.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by RequirementConstraints.
    */
  virtual uci::type::RequirementConstraintsType& enableRequirementConstraints(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by RequirementConstraints.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementTemplateOptionType& clearRequirementConstraints() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * TimingConstraints.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      TimingConstraints.
    */
  virtual const uci::type::CapabilityCommandTemporalConstraintsType& getTimingConstraints() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by TimingConstraints.
    *
    * @return A reference to the accessor that provides access to the complex content identified by TimingConstraints.
    */
  virtual uci::type::CapabilityCommandTemporalConstraintsType& getTimingConstraints() = 0;

  /** Sets the complex content identified by TimingConstraints to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by TimingConstraints.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementTemplateOptionType& setTimingConstraints(const uci::type::CapabilityCommandTemporalConstraintsType& value) = 0;

  /** Returns whether the Element identified by TimingConstraints exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by TimingConstraints is enabled or not.
    */
  virtual bool hasTimingConstraints() const = 0;

  /** Enables the Element identified by TimingConstraints.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by TimingConstraints.
    */
  virtual uci::type::CapabilityCommandTemporalConstraintsType& enableTimingConstraints(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by TimingConstraints.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementTemplateOptionType& clearTimingConstraints() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  RequirementTemplateOptionType() {
  }

  /** The destructor [only available to derived classes]. */
  ~RequirementTemplateOptionType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The RequirementTemplateOptionType to copy from.
    */
  RequirementTemplateOptionType(const RequirementTemplateOptionType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this RequirementTemplateOptionType to the contents of the
    * RequirementTemplateOptionType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The RequirementTemplateOptionType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this RequirementTemplateOptionType.
    * @return A reference to this RequirementTemplateOptionType.
    */
  RequirementTemplateOptionType& operator=(const RequirementTemplateOptionType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_REQUIREMENTTEMPLATEOPTIONTYPE_H

