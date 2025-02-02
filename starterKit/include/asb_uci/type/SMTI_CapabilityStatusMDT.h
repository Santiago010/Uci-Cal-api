/** @file SMTI_CapabilityStatusMDT.h
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

#ifndef ASB_UCI_TYPE_SMTI_CAPABILITYSTATUSMDT_H
#define ASB_UCI_TYPE_SMTI_CAPABILITYSTATUSMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/CapabilityStatusBaseType.h"
#include "../../../include/asb_uci/type/EmissionBalanceEnum.h"
#include "../../../include/asb_uci/type/SMTI_MessageOutputsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SMTI_CapabilityStatusMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CapabilityStatusType;
class ElectronicProtectionOptionsEnabledType;
class RF_ProfileType;
class STANAG_4607_PackingPlanPET;

/** See annotations in child elements and messages/elements that use this type for details. */
class SMTI_CapabilityStatusMDT : public virtual uci::type::SMTI_CapabilityStatusMDT, public virtual CapabilityStatusBaseType {
public:
  /** Indicates the high level availability/state of a Capability instance. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  using CapabilityStatus = asb_uci::base::BoundedList<uci::type::CapabilityStatusType, uci::type::accessorType::capabilityStatusType, asb_uci::type::CapabilityStatusType>;

  /** Indicates a RF Emission Profile currently applied to the Capability. If omitted, there are no current profiles and
    * the Capability is operating per its defaults and other constraints. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using RF_Profile = asb_uci::base::BoundedList<uci::type::RF_ProfileType, uci::type::accessorType::rF_ProfileType, asb_uci::type::RF_ProfileType>;

  /** Indicates a message that is currently an output of the Capability. See enumerated type annotations for details. List
    * size for this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 4]
    */
  using MessageOutput = asb_uci::base::BoundedList<uci::type::SMTI_MessageOutputsEnum, uci::type::accessorType::sMTI_MessageOutputsEnum, asb_uci::type::SMTI_MessageOutputsEnum>;

  /** Indicates which electronic protection options are currently enabled and will be used by this Capability.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using ElectronicProtectionOptionsEnabled = asb_uci::base::BoundedList<uci::type::ElectronicProtectionOptionsEnabledType, uci::type::accessorType::electronicProtectionOptionsEnabledType, asb_uci::type::ElectronicProtectionOptionsEnabledType>;

  /** The constructor */
  SMTI_CapabilityStatusMDT();

  /** The copy constructor
    *
    * @param rhs The SMTI_CapabilityStatusMDT to copy from
    */
  SMTI_CapabilityStatusMDT(const SMTI_CapabilityStatusMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SMTI_CapabilityStatusMDT to move from
    */
  SMTI_CapabilityStatusMDT(SMTI_CapabilityStatusMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The SMTI_CapabilityStatusMDT to copy from
    * @return The SMTI_CapabilityStatusMDT that was assigned
    */
  SMTI_CapabilityStatusMDT& operator=(const SMTI_CapabilityStatusMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SMTI_CapabilityStatusMDT to move from
    * @return The SMTI_CapabilityStatusMDT that was assigned
    */
  SMTI_CapabilityStatusMDT& operator=(SMTI_CapabilityStatusMDT&& rhs) = delete;

  /** The destructor */
  ~SMTI_CapabilityStatusMDT() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SMTI_CapabilityStatusMDT whose contents are to be used to set this
    *      uci::type::SMTI_CapabilityStatusMDT's contents.
    */
  void copy(const uci::type::SMTI_CapabilityStatusMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SMTI_CapabilityStatusMDT whose contents are to be used to set this
    *      uci::type::SMTI_CapabilityStatusMDT's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SMTI_CapabilityStatusMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the CapabilityStatus field contained in this message fragment
    *
    * @return The const reference to the accessor to the CapabilityStatus field.
    */
  const uci::type::SMTI_CapabilityStatusMDT::CapabilityStatus& getCapabilityStatus() const override;

  /** Returns the accessor to the CapabilityStatus field contained in this message fragment
    *
    * @return The reference to the accessor to the CapabilityStatus field.
    */
  uci::type::SMTI_CapabilityStatusMDT::CapabilityStatus& getCapabilityStatus() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityStatusMDT& setCapabilityStatus(const uci::type::SMTI_CapabilityStatusMDT::CapabilityStatus& accessor) override;

  /** Returns the accessor to the RF_Profile field contained in this message fragment
    *
    * @return The const reference to the accessor to the RF_Profile field.
    */
  const uci::type::SMTI_CapabilityStatusMDT::RF_Profile& getRF_Profile() const override;

  /** Returns the accessor to the RF_Profile field contained in this message fragment
    *
    * @return The reference to the accessor to the RF_Profile field.
    */
  uci::type::SMTI_CapabilityStatusMDT::RF_Profile& getRF_Profile() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityStatusMDT& setRF_Profile(const uci::type::SMTI_CapabilityStatusMDT::RF_Profile& accessor) override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::EmissionBalanceEnum& getEmissionBalanceState_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::EmissionBalanceEnum& getEmissionBalanceState() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::EmissionBalanceEnum& getEmissionBalanceState() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityStatusMDT& setEmissionBalanceState(const uci::type::EmissionBalanceEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityStatusMDT& setEmissionBalanceState(uci::type::EmissionBalanceEnum::EnumerationItem value) override;

  /** Returns whether this optional field EmissionBalanceStateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasEmissionBalanceState() const noexcept override;

  /** Enables the optional field such that getEmissionBalanceState will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::EmissionBalanceEnum& enableEmissionBalanceState(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityStatusMDT& clearEmissionBalanceState() noexcept override;

  /** Returns the accessor to the MessageOutput field contained in this message fragment
    *
    * @return The const reference to the accessor to the MessageOutput field.
    */
  const uci::type::SMTI_CapabilityStatusMDT::MessageOutput& getMessageOutput() const override;

  /** Returns the accessor to the MessageOutput field contained in this message fragment
    *
    * @return The reference to the accessor to the MessageOutput field.
    */
  uci::type::SMTI_CapabilityStatusMDT::MessageOutput& getMessageOutput() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityStatusMDT& setMessageOutput(const uci::type::SMTI_CapabilityStatusMDT::MessageOutput& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::STANAG_4607_PackingPlanPET& getDefaultPackingPlan_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::STANAG_4607_PackingPlanPET& getDefaultPackingPlan() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::STANAG_4607_PackingPlanPET& getDefaultPackingPlan() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityStatusMDT& setDefaultPackingPlan(const uci::type::STANAG_4607_PackingPlanPET& accessor) override;

  /** Returns whether this optional field DefaultPackingPlanis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDefaultPackingPlan() const noexcept override;

  /** Enables the optional field such that getDefaultPackingPlan will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::STANAG_4607_PackingPlanPET& enableDefaultPackingPlan(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityStatusMDT& clearDefaultPackingPlan() noexcept override;

  /** Returns the accessor to the ElectronicProtectionOptionsEnabled field contained in this message fragment
    *
    * @return The const reference to the accessor to the ElectronicProtectionOptionsEnabled field.
    */
  const uci::type::SMTI_CapabilityStatusMDT::ElectronicProtectionOptionsEnabled& getElectronicProtectionOptionsEnabled() const override;

  /** Returns the accessor to the ElectronicProtectionOptionsEnabled field contained in this message fragment
    *
    * @return The reference to the accessor to the ElectronicProtectionOptionsEnabled field.
    */
  uci::type::SMTI_CapabilityStatusMDT::ElectronicProtectionOptionsEnabled& getElectronicProtectionOptionsEnabled() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityStatusMDT& setElectronicProtectionOptionsEnabled(const uci::type::SMTI_CapabilityStatusMDT::ElectronicProtectionOptionsEnabled& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SMTI_CapabilityStatusMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SMTI_CapabilityStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::SMTI_CapabilityStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<CapabilityStatus> capabilityStatus_Accessor;
  std::unique_ptr<RF_Profile> rF_Profile_Accessor;
  std::unique_ptr<EmissionBalanceEnum> emissionBalanceState_Accessor;
  std::unique_ptr<MessageOutput> messageOutput_Accessor;
  std::unique_ptr<STANAG_4607_PackingPlanPET> defaultPackingPlan_Accessor;
  std::unique_ptr<ElectronicProtectionOptionsEnabled> electronicProtectionOptionsEnabled_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SMTI_CAPABILITYSTATUSMDT_H
