/** @file ESM_CapabilityCommandType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#ifndef ASB_UCI_TYPE_ESM_CAPABILITYCOMMANDTYPE_H
#define ASB_UCI_TYPE_ESM_CAPABILITYCOMMANDTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/SharedRF_ApertureCapabilityCommandBaseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ESM_CapabilityCommandType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CapabilityCommandFrequencyType;
class ESM_BinGroupActivationType;
class ProductOutputCommandBasicType;
class ResourceAllocatorCommandExtensionType;
class SubCapabilitySelectionType;

/** See annotations in child elements and messages/elements that use this type for details. */
class ESM_CapabilityCommandType : public virtual uci::type::ESM_CapabilityCommandType, public virtual SharedRF_ApertureCapabilityCommandBaseType {
public:
  /** This indicates the SubCapability and the SubCapabilityDetails being commanded. It's assumed one or more activities
    * are created for each SubCapabilitySelection. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  using SubCapabilitySelection = asb_uci::base::BoundedList<uci::type::SubCapabilitySelectionType, uci::type::accessorType::subCapabilitySelectionType, asb_uci::type::SubCapabilitySelectionType>;

  /** Indicates a required output Product of the Command. Only Products consistent with ESM and supported by the commanded
    * ESM Capability should be requested. If omitted, no output Product should be produced. See ProductTypeEnum for further
    * details. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using ProductOutput = asb_uci::base::BoundedList<uci::type::ProductOutputCommandBasicType, uci::type::accessorType::productOutputCommandBasicType, asb_uci::type::ProductOutputCommandBasicType>;

  /** The constructor */
  ESM_CapabilityCommandType();

  /** The copy constructor
    *
    * @param rhs The ESM_CapabilityCommandType to copy from
    */
  ESM_CapabilityCommandType(const ESM_CapabilityCommandType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The ESM_CapabilityCommandType to move from
    */
  ESM_CapabilityCommandType(ESM_CapabilityCommandType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The ESM_CapabilityCommandType to copy from
    * @return The ESM_CapabilityCommandType that was assigned
    */
  ESM_CapabilityCommandType& operator=(const ESM_CapabilityCommandType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The ESM_CapabilityCommandType to move from
    * @return The ESM_CapabilityCommandType that was assigned
    */
  ESM_CapabilityCommandType& operator=(ESM_CapabilityCommandType&& rhs) = delete;

  /** The destructor */
  ~ESM_CapabilityCommandType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ESM_CapabilityCommandType whose contents are to be used to set this
    *      uci::type::ESM_CapabilityCommandType's contents.
    */
  void copy(const uci::type::ESM_CapabilityCommandType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ESM_CapabilityCommandType whose contents are to be used to set this
    *      uci::type::ESM_CapabilityCommandType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::ESM_CapabilityCommandType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ResourceAllocatorCommandExtensionType& getResourceAllocatorCommandExtension_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ResourceAllocatorCommandExtensionType& getResourceAllocatorCommandExtension() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ResourceAllocatorCommandExtensionType& getResourceAllocatorCommandExtension() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ESM_CapabilityCommandType& setResourceAllocatorCommandExtension(const uci::type::ResourceAllocatorCommandExtensionType& accessor) override;

  /** Returns whether this optional field ResourceAllocatorCommandExtensionis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasResourceAllocatorCommandExtension() const noexcept override;

  /** Enables the optional field such that getResourceAllocatorCommandExtension will return the optional field and not
    * throw an exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ResourceAllocatorCommandExtensionType& enableResourceAllocatorCommandExtension(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ESM_CapabilityCommandType& clearResourceAllocatorCommandExtension() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ESM_BinGroupActivationType& getScanScheduleActivation_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ESM_BinGroupActivationType& getScanScheduleActivation() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ESM_BinGroupActivationType& getScanScheduleActivation() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ESM_CapabilityCommandType& setScanScheduleActivation(const uci::type::ESM_BinGroupActivationType& accessor) override;

  /** Returns whether this optional field ScanScheduleActivationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasScanScheduleActivation() const noexcept override;

  /** Enables the optional field such that getScanScheduleActivation will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ESM_BinGroupActivationType& enableScanScheduleActivation(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ESM_CapabilityCommandType& clearScanScheduleActivation() noexcept override;

  /** Returns the accessor to the SubCapabilitySelection field contained in this message fragment
    *
    * @return The const reference to the accessor to the SubCapabilitySelection field.
    */
  const uci::type::ESM_CapabilityCommandType::SubCapabilitySelection& getSubCapabilitySelection() const override;

  /** Returns the accessor to the SubCapabilitySelection field contained in this message fragment
    *
    * @return The reference to the accessor to the SubCapabilitySelection field.
    */
  uci::type::ESM_CapabilityCommandType::SubCapabilitySelection& getSubCapabilitySelection() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ESM_CapabilityCommandType& setSubCapabilitySelection(const uci::type::ESM_CapabilityCommandType::SubCapabilitySelection& accessor) override;

  /** Returns the accessor to the ProductOutput field contained in this message fragment
    *
    * @return The const reference to the accessor to the ProductOutput field.
    */
  const uci::type::ESM_CapabilityCommandType::ProductOutput& getProductOutput() const override;

  /** Returns the accessor to the ProductOutput field contained in this message fragment
    *
    * @return The reference to the accessor to the ProductOutput field.
    */
  uci::type::ESM_CapabilityCommandType::ProductOutput& getProductOutput() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ESM_CapabilityCommandType& setProductOutput(const uci::type::ESM_CapabilityCommandType::ProductOutput& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CapabilityCommandFrequencyType& getFrequency_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CapabilityCommandFrequencyType& getFrequency() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CapabilityCommandFrequencyType& getFrequency() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ESM_CapabilityCommandType& setFrequency(const uci::type::CapabilityCommandFrequencyType& accessor) override;

  /** Returns whether this optional field Frequencyis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasFrequency() const noexcept override;

  /** Enables the optional field such that getFrequency will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CapabilityCommandFrequencyType& enableFrequency(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ESM_CapabilityCommandType& clearFrequency() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<ESM_CapabilityCommandType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::ESM_CapabilityCommandType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::ESM_CapabilityCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<ResourceAllocatorCommandExtensionType> resourceAllocatorCommandExtension_Accessor;
  std::unique_ptr<ESM_BinGroupActivationType> scanScheduleActivation_Accessor;
  std::unique_ptr<SubCapabilitySelection> subCapabilitySelection_Accessor;
  std::unique_ptr<ProductOutput> productOutput_Accessor;
  std::unique_ptr<CapabilityCommandFrequencyType> frequency_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_ESM_CAPABILITYCOMMANDTYPE_H
