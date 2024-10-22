/** @file RequirementConstraintsType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#ifndef ASB_UCI_TYPE_REQUIREMENTCONSTRAINTSTYPE_H
#define ASB_UCI_TYPE_REQUIREMENTCONSTRAINTSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/EnvironmentPairingEnum.h"
#include "../../../include/asb_uci/type/VisibleString1024Type.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementConstraintsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class AnalyticConstraintsType;
class ComparableRankingType;
class DataProductClassificationLevelType;
class RequirementAllocationParametersType;
class RequirementDependencyType;
class RequirementKinematicConstraintsType;
class RequirementTaxonomyType;
class RequirementTimingType;
class SecurityInformationType;

/** See annotations in child elements and messages/elements that use this type for details. */
class RequirementConstraintsType : public virtual uci::type::RequirementConstraintsType {
public:
  /** Indicates a temporal constraint on the Requirement. Allows for defining for each timing type (RequirementTimingEnum).
    * [Occurrences: Minimum: 0; Maximum: 4]
    */
  using Timing = asb_uci::base::BoundedList<uci::type::RequirementTimingType, uci::type::accessorType::requirementTimingType, asb_uci::type::RequirementTimingType>;

  /** Indicates a constraint in the form of kinematic position of Requirement actor or actors. When more than one is given
    * they are logically ANDed. [Occurrences: Minimum: 0; Maximum: 4]
    */
  using Kinematic = asb_uci::base::BoundedList<uci::type::RequirementKinematicConstraintsType, uci::type::accessorType::requirementKinematicConstraintsType, asb_uci::type::RequirementKinematicConstraintsType>;

  /** Indicates a constraint in the form of a temporal dependency between Requirements; between Effect, Action, Task,
    * [Capability]Command or Commands or Response. If more than one is given, they are logically ANDed. For example, a
    * pre-strike image collection (PO Task) might be required several minutes prior to a strike (Strike Task) to determine
    * combat ID and target coordinates. A post-strike image collection (PO Task) might be required several minutes after
    * the strike to inform battle damage assessment. The dependency between the three Tasks can be established with this
    * element. Assuming the Strike Task is the most difficult to plan/coordinate, the other two Tasks would likely each
    * have dependencies on the Strike Task in order to orchestrate the desired "look-shoot-look" sequence. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  using Dependency = asb_uci::base::BoundedList<uci::type::RequirementDependencyType, uci::type::accessorType::requirementDependencyType, asb_uci::type::RequirementDependencyType>;

  /** Indicates an allowed domain/environment which the Requirement can be employed from and and allowed "target"
    * domain/environment. See enumerated type annotations for further details. List size for this element is based on
    * "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 48]
    */
  using AllowedDomainPairing = asb_uci::base::BoundedList<uci::type::EnvironmentPairingEnum, uci::type::accessorType::environmentPairingEnum, asb_uci::type::EnvironmentPairingEnum>;

  /** Indicates an excluded domain/environment which the Requirement can't be employed from an excluded "target"
    * domain/environment. See enumerated type annotations for further details. List size for this element is based on
    * "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 48]
    */
  using ExcludedDomainPairing = asb_uci::base::BoundedList<uci::type::EnvironmentPairingEnum, uci::type::accessorType::environmentPairingEnum, asb_uci::type::EnvironmentPairingEnum>;

  /** The constructor */
  RequirementConstraintsType();

  /** The copy constructor
    *
    * @param rhs The RequirementConstraintsType to copy from
    */
  RequirementConstraintsType(const RequirementConstraintsType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The RequirementConstraintsType to move from
    */
  RequirementConstraintsType(RequirementConstraintsType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The RequirementConstraintsType to copy from
    * @return The RequirementConstraintsType that was assigned
    */
  RequirementConstraintsType& operator=(const RequirementConstraintsType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The RequirementConstraintsType to move from
    * @return The RequirementConstraintsType that was assigned
    */
  RequirementConstraintsType& operator=(RequirementConstraintsType&& rhs) = delete;

  /** The destructor */
  virtual ~RequirementConstraintsType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RequirementConstraintsType whose contents are to be used to set this
    *      uci::type::RequirementConstraintsType's contents.
    */
  void copy(const uci::type::RequirementConstraintsType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RequirementConstraintsType whose contents are to be used to set this
    *      uci::type::RequirementConstraintsType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::RequirementConstraintsType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComparableRankingType& getRank_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ComparableRankingType& getRank() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComparableRankingType& getRank() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setRank(const uci::type::ComparableRankingType& accessor) override;

  /** Returns whether this optional field Rankis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasRank() const noexcept override;

  /** Enables the optional field such that getRank will return the optional field and not throw an exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComparableRankingType& enableRank(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& clearRank() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getInterruptLowerRank() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setInterruptLowerRank(xs::Boolean value) override;

  /** Returns whether this optional field InterruptLowerRankis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasInterruptLowerRank() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& clearInterruptLowerRank() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RequirementAllocationParametersType& getAllocation_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::RequirementAllocationParametersType& getAllocation() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RequirementAllocationParametersType& getAllocation() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setAllocation(const uci::type::RequirementAllocationParametersType& accessor) override;

  /** Returns whether this optional field Allocationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasAllocation() const noexcept override;

  /** Enables the optional field such that getAllocation will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RequirementAllocationParametersType& enableAllocation(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& clearAllocation() noexcept override;

  /** Returns the accessor to the Timing field contained in this message fragment
    *
    * @return The const reference to the accessor to the Timing field.
    */
  const uci::type::RequirementConstraintsType::Timing& getTiming() const override;

  /** Returns the accessor to the Timing field contained in this message fragment
    *
    * @return The reference to the accessor to the Timing field.
    */
  uci::type::RequirementConstraintsType::Timing& getTiming() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setTiming(const uci::type::RequirementConstraintsType::Timing& accessor) override;

  /** Returns the accessor to the Kinematic field contained in this message fragment
    *
    * @return The const reference to the accessor to the Kinematic field.
    */
  const uci::type::RequirementConstraintsType::Kinematic& getKinematic() const override;

  /** Returns the accessor to the Kinematic field contained in this message fragment
    *
    * @return The reference to the accessor to the Kinematic field.
    */
  uci::type::RequirementConstraintsType::Kinematic& getKinematic() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setKinematic(const uci::type::RequirementConstraintsType::Kinematic& accessor) override;

  /** Returns the accessor to the Dependency field contained in this message fragment
    *
    * @return The const reference to the accessor to the Dependency field.
    */
  const uci::type::RequirementConstraintsType::Dependency& getDependency() const override;

  /** Returns the accessor to the Dependency field contained in this message fragment
    *
    * @return The reference to the accessor to the Dependency field.
    */
  uci::type::RequirementConstraintsType::Dependency& getDependency() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setDependency(const uci::type::RequirementConstraintsType::Dependency& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::DataProductClassificationLevelType& getMaxProductDisseminationClassificationLevel_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::DataProductClassificationLevelType& getMaxProductDisseminationClassificationLevel() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::DataProductClassificationLevelType& getMaxProductDisseminationClassificationLevel() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setMaxProductDisseminationClassificationLevel(const uci::type::DataProductClassificationLevelType& accessor) override;

  /** Returns whether this optional field MaxProductDisseminationClassificationLevelis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMaxProductDisseminationClassificationLevel() const noexcept override;

  /** Enables the optional field such that getMaxProductDisseminationClassificationLevel will return the optional field and
    * not throw an exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::DataProductClassificationLevelType& enableMaxProductDisseminationClassificationLevel(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& clearMaxProductDisseminationClassificationLevel() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::AnalyticConstraintsType& getAnalytic_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::AnalyticConstraintsType& getAnalytic() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::AnalyticConstraintsType& getAnalytic() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setAnalytic(const uci::type::AnalyticConstraintsType& accessor) override;

  /** Returns whether this optional field Analyticis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasAnalytic() const noexcept override;

  /** Enables the optional field such that getAnalytic will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::AnalyticConstraintsType& enableAnalytic(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& clearAnalytic() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SecurityInformationType& getAcceptableClassificationLevel_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SecurityInformationType& getAcceptableClassificationLevel() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SecurityInformationType& getAcceptableClassificationLevel() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setAcceptableClassificationLevel(const uci::type::SecurityInformationType& accessor) override;

  /** Returns whether this optional field AcceptableClassificationLevelis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasAcceptableClassificationLevel() const noexcept override;

  /** Enables the optional field such that getAcceptableClassificationLevel will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SecurityInformationType& enableAcceptableClassificationLevel(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& clearAcceptableClassificationLevel() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getCommsRequired() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setCommsRequired(xs::Boolean value) override;

  /** Returns whether this optional field CommsRequiredis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasCommsRequired() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& clearCommsRequired() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RequirementTaxonomyType& getAllowedRequirementTypes_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::RequirementTaxonomyType& getAllowedRequirementTypes() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RequirementTaxonomyType& getAllowedRequirementTypes() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setAllowedRequirementTypes(const uci::type::RequirementTaxonomyType& accessor) override;

  /** Returns whether this optional field AllowedRequirementTypesis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasAllowedRequirementTypes() const noexcept override;

  /** Enables the optional field such that getAllowedRequirementTypes will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RequirementTaxonomyType& enableAllowedRequirementTypes(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& clearAllowedRequirementTypes() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RequirementTaxonomyType& getExcludedRequirementTypes_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::RequirementTaxonomyType& getExcludedRequirementTypes() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RequirementTaxonomyType& getExcludedRequirementTypes() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setExcludedRequirementTypes(const uci::type::RequirementTaxonomyType& accessor) override;

  /** Returns whether this optional field ExcludedRequirementTypesis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasExcludedRequirementTypes() const noexcept override;

  /** Enables the optional field such that getExcludedRequirementTypes will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RequirementTaxonomyType& enableExcludedRequirementTypes(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& clearExcludedRequirementTypes() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::VisibleString1024Type& getConstraintsNarrative_() const;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  const uci::type::VisibleString1024Type& getConstraintsNarrative() const override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::VisibleString1024Type& getConstraintsNarrative() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setConstraintsNarrative(const uci::type::VisibleString1024Type& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setConstraintsNarrative(const std::string& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setConstraintsNarrative(const char* value) override;

  /** Returns whether this optional field constraintsNarrative_is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasConstraintsNarrative() const noexcept override;

  /** Enables the optional field such that getConstraintsNarrative will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The value of the optional field
    */
  uci::type::VisibleString1024Type& enableConstraintsNarrative(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& clearConstraintsNarrative() noexcept override;

  /** Returns the accessor to the AllowedDomainPairing field contained in this message fragment
    *
    * @return The const reference to the accessor to the AllowedDomainPairing field.
    */
  const uci::type::RequirementConstraintsType::AllowedDomainPairing& getAllowedDomainPairing() const override;

  /** Returns the accessor to the AllowedDomainPairing field contained in this message fragment
    *
    * @return The reference to the accessor to the AllowedDomainPairing field.
    */
  uci::type::RequirementConstraintsType::AllowedDomainPairing& getAllowedDomainPairing() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setAllowedDomainPairing(const uci::type::RequirementConstraintsType::AllowedDomainPairing& accessor) override;

  /** Returns the accessor to the ExcludedDomainPairing field contained in this message fragment
    *
    * @return The const reference to the accessor to the ExcludedDomainPairing field.
    */
  const uci::type::RequirementConstraintsType::ExcludedDomainPairing& getExcludedDomainPairing() const override;

  /** Returns the accessor to the ExcludedDomainPairing field contained in this message fragment
    *
    * @return The reference to the accessor to the ExcludedDomainPairing field.
    */
  uci::type::RequirementConstraintsType::ExcludedDomainPairing& getExcludedDomainPairing() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementConstraintsType& setExcludedDomainPairing(const uci::type::RequirementConstraintsType::ExcludedDomainPairing& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<RequirementConstraintsType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::RequirementConstraintsType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

  /** 
    *
    * @param accessor .
    * @param propTree .
    * @param nodeName .
    * @param createNode .
    * @param addTypeAttribute .
    * @param checkIfDerivation .
    * @param topLevel .
    * @return .
    */
  static std::string serialize(const uci::type::RequirementConstraintsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<ComparableRankingType> rank_Accessor;
  boost::optional<asb_xs::Boolean> interruptLowerRank_Accessor;
  std::unique_ptr<RequirementAllocationParametersType> allocation_Accessor;
  std::unique_ptr<Timing> timing_Accessor;
  std::unique_ptr<Kinematic> kinematic_Accessor;
  std::unique_ptr<Dependency> dependency_Accessor;
  std::unique_ptr<DataProductClassificationLevelType> maxProductDisseminationClassificationLevel_Accessor;
  std::unique_ptr<AnalyticConstraintsType> analytic_Accessor;
  std::unique_ptr<SecurityInformationType> acceptableClassificationLevel_Accessor;
  boost::optional<asb_xs::Boolean> commsRequired_Accessor;
  std::unique_ptr<RequirementTaxonomyType> allowedRequirementTypes_Accessor;
  std::unique_ptr<RequirementTaxonomyType> excludedRequirementTypes_Accessor;
  std::unique_ptr<VisibleString1024Type> constraintsNarrative_Accessor;
  std::unique_ptr<AllowedDomainPairing> allowedDomainPairing_Accessor;
  std::unique_ptr<ExcludedDomainPairing> excludedDomainPairing_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_REQUIREMENTCONSTRAINTSTYPE_H
