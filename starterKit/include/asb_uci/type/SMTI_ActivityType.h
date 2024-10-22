/** @file SMTI_ActivityType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:15 PM
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

#ifndef ASB_UCI_TYPE_SMTI_ACTIVITYTYPE_H
#define ASB_UCI_TYPE_SMTI_ACTIVITYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/SMTI_SubCapabilityEnum.h"
#include "../../../include/asb_uci/type/SharedRF_ApertureActivityBaseType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SMTI_ActivityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ForeignKeyType;
class MTI_ActivityStatusDetailType;
class MultistaticModeOptionsEmployedType;
class RadarPointingTargetType;
class RepetitionType;
class SMTI_PredictedCollectionsType;

/** See annotations in child elements and messages/elements that use this type for details. */
class SMTI_ActivityType : public virtual uci::type::SMTI_ActivityType, public virtual SharedRF_ApertureActivityBaseType {
public:
  /** Indicates a specific SubCapability associated with the Activity. If omitted, all SubCapabilities of the associated
    * Capability are applicable for the Activity. This element is required whenever a subset of SubCapabilities of a
    * Capability are used by the Activity. List size for this element is based on "Select All That Apply" condition.
    * [Occurrences: Minimum: 0; Maximum: 5]
    */
  using SubCapability = asb_uci::base::BoundedList<uci::type::SMTI_SubCapabilityEnum, uci::type::accessorType::sMTI_SubCapabilityEnum, asb_uci::type::SMTI_SubCapabilityEnum>;

  /** Specific performance metrics that provide the system insight regarding the progress of an activity, description of
    * the results of an activity and related stats. This is a list to provide reporting for all revisits between activity
    * messages. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using Metrics = asb_uci::base::BoundedList<uci::type::MTI_ActivityStatusDetailType, uci::type::accessorType::mTI_ActivityStatusDetailType, asb_uci::type::MTI_ActivityStatusDetailType>;

  /** Supports interaction with a capability assessment function. This allows a subsystem or a model of a subsystem to
    * estimate future performance. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using PredictedCollections = asb_uci::base::BoundedList<uci::type::SMTI_PredictedCollectionsType, uci::type::accessorType::sMTI_PredictedCollectionsType, asb_uci::type::SMTI_PredictedCollectionsType>;

  /** Indicates which electronic protection IDs are in use for this activity. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  using ElectronicProtectionOptionsEmployed = asb_uci::base::BoundedList<uci::type::ForeignKeyType, uci::type::accessorType::foreignKeyType, asb_uci::type::ForeignKeyType>;

  /** The constructor */
  SMTI_ActivityType();

  /** The copy constructor
    *
    * @param rhs The SMTI_ActivityType to copy from
    */
  SMTI_ActivityType(const SMTI_ActivityType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SMTI_ActivityType to move from
    */
  SMTI_ActivityType(SMTI_ActivityType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The SMTI_ActivityType to copy from
    * @return The SMTI_ActivityType that was assigned
    */
  SMTI_ActivityType& operator=(const SMTI_ActivityType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SMTI_ActivityType to move from
    * @return The SMTI_ActivityType that was assigned
    */
  SMTI_ActivityType& operator=(SMTI_ActivityType&& rhs) = delete;

  /** The destructor */
  ~SMTI_ActivityType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SMTI_ActivityType whose contents are to be used to set this
    *      uci::type::SMTI_ActivityType's contents.
    */
  void copy(const uci::type::SMTI_ActivityType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SMTI_ActivityType whose contents are to be used to set this
    *      uci::type::SMTI_ActivityType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SMTI_ActivityType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the SubCapability field contained in this message fragment
    *
    * @return The const reference to the accessor to the SubCapability field.
    */
  const uci::type::SMTI_ActivityType::SubCapability& getSubCapability() const override;

  /** Returns the accessor to the SubCapability field contained in this message fragment
    *
    * @return The reference to the accessor to the SubCapability field.
    */
  uci::type::SMTI_ActivityType::SubCapability& getSubCapability() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_ActivityType& setSubCapability(const uci::type::SMTI_ActivityType::SubCapability& accessor) override;

  /** Returns the accessor to the RadarPointingTarget field contained in this message fragment
    *
    * @return The const reference to the accessor to the RadarPointingTarget field.
    */
  const uci::type::RadarPointingTargetType& getRadarPointingTarget() const override;

  /** Returns the accessor to the RadarPointingTarget field contained in this message fragment
    *
    * @return The reference to the accessor to the RadarPointingTarget field.
    */
  uci::type::RadarPointingTargetType& getRadarPointingTarget() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_ActivityType& setRadarPointingTarget(const uci::type::RadarPointingTargetType& accessor) override;

  /** Returns the accessor to the Metrics field contained in this message fragment
    *
    * @return The const reference to the accessor to the Metrics field.
    */
  const uci::type::SMTI_ActivityType::Metrics& getMetrics() const override;

  /** Returns the accessor to the Metrics field contained in this message fragment
    *
    * @return The reference to the accessor to the Metrics field.
    */
  uci::type::SMTI_ActivityType::Metrics& getMetrics() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_ActivityType& setMetrics(const uci::type::SMTI_ActivityType::Metrics& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RepetitionType& getRepetition_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::RepetitionType& getRepetition() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RepetitionType& getRepetition() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_ActivityType& setRepetition(const uci::type::RepetitionType& accessor) override;

  /** Returns whether this optional field Repetitionis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasRepetition() const noexcept override;

  /** Enables the optional field such that getRepetition will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RepetitionType& enableRepetition(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_ActivityType& clearRepetition() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getPolicyApplied() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_ActivityType& setPolicyApplied(xs::Boolean value) override;

  /** Returns whether this optional field PolicyAppliedis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPolicyApplied() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_ActivityType& clearPolicyApplied() noexcept override;

  /** Returns the contents of the message's AllProductsAndMessagesProduced field
    *
    * @return The contents of the AllProductsAndMessagesProduced field
    */
  xs::Boolean getAllProductsAndMessagesProduced() const override;

  /** Sets the contents of the message's AllProductsAndMessagesProduced field
    *
    * @param value The new value to set the AllProductsAndMessagesProduced field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_ActivityType& setAllProductsAndMessagesProduced(xs::Boolean value) override;

  /** Returns the accessor to the PredictedCollections field contained in this message fragment
    *
    * @return The const reference to the accessor to the PredictedCollections field.
    */
  const uci::type::SMTI_ActivityType::PredictedCollections& getPredictedCollections() const override;

  /** Returns the accessor to the PredictedCollections field contained in this message fragment
    *
    * @return The reference to the accessor to the PredictedCollections field.
    */
  uci::type::SMTI_ActivityType::PredictedCollections& getPredictedCollections() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_ActivityType& setPredictedCollections(const uci::type::SMTI_ActivityType::PredictedCollections& accessor) override;

  /** Returns the accessor to the ElectronicProtectionOptionsEmployed field contained in this message fragment
    *
    * @return The const reference to the accessor to the ElectronicProtectionOptionsEmployed field.
    */
  const uci::type::SMTI_ActivityType::ElectronicProtectionOptionsEmployed& getElectronicProtectionOptionsEmployed() const override;

  /** Returns the accessor to the ElectronicProtectionOptionsEmployed field contained in this message fragment
    *
    * @return The reference to the accessor to the ElectronicProtectionOptionsEmployed field.
    */
  uci::type::SMTI_ActivityType::ElectronicProtectionOptionsEmployed& getElectronicProtectionOptionsEmployed() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_ActivityType& setElectronicProtectionOptionsEmployed(const uci::type::SMTI_ActivityType::ElectronicProtectionOptionsEmployed& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MultistaticModeOptionsEmployedType& getMultistaticModeOptionsEmployed_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::MultistaticModeOptionsEmployedType& getMultistaticModeOptionsEmployed() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MultistaticModeOptionsEmployedType& getMultistaticModeOptionsEmployed() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_ActivityType& setMultistaticModeOptionsEmployed(const uci::type::MultistaticModeOptionsEmployedType& accessor) override;

  /** Returns whether this optional field MultistaticModeOptionsEmployedis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMultistaticModeOptionsEmployed() const noexcept override;

  /** Enables the optional field such that getMultistaticModeOptionsEmployed will return the optional field and not throw
    * an exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MultistaticModeOptionsEmployedType& enableMultistaticModeOptionsEmployed(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_ActivityType& clearMultistaticModeOptionsEmployed() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SMTI_ActivityType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SMTI_ActivityType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::SMTI_ActivityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<SubCapability> subCapability_Accessor;
  std::unique_ptr<RadarPointingTargetType> radarPointingTarget_Accessor;
  std::unique_ptr<Metrics> metrics_Accessor;
  std::unique_ptr<RepetitionType> repetition_Accessor;
  boost::optional<asb_xs::Boolean> policyApplied_Accessor;
  asb_xs::Boolean allProductsAndMessagesProduced_Accessor{false};
  std::unique_ptr<PredictedCollections> predictedCollections_Accessor;
  std::unique_ptr<ElectronicProtectionOptionsEmployed> electronicProtectionOptionsEmployed_Accessor;
  std::unique_ptr<MultistaticModeOptionsEmployedType> multistaticModeOptionsEmployed_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SMTI_ACTIVITYTYPE_H
