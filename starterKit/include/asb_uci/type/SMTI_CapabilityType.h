/** @file SMTI_CapabilityType.h
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

#ifndef ASB_UCI_TYPE_SMTI_CAPABILITYTYPE_H
#define ASB_UCI_TYPE_SMTI_CAPABILITYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/CommandableCapabilityDeclarationType.h"
#include "../../../include/asb_uci/type/NIIRS_Type.h"
#include "../../../include/asb_uci/type/SMTI_CapabilityEnum.h"
#include "../../../include/asb_uci/type/SMTI_MessageOutputsEnum.h"
#include "../../../include/asb_uci/type/SMTI_SubCapabilityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SMTI_CapabilityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ComponentFieldOfRegardType;
class FrequencyRangeType;
class SMTI_CapabilityOptionsType;

/** See annotations in child elements and messages/elements that use this type for details. */
class SMTI_CapabilityType : public virtual uci::type::SMTI_CapabilityType, public virtual CommandableCapabilityDeclarationType {
public:
  /** Indicates a frequency band/range used by the Capability. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  using Band = asb_uci::base::BoundedList<uci::type::FrequencyRangeType, uci::type::accessorType::frequencyRangeType, asb_uci::type::FrequencyRangeType>;

  /** Indicates a Moving Target Indication Interpretability Rating Scale level supported by the Capability. See annotations
    * of the underlying type for further details. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using MT_IIRS_Level = asb_uci::base::BoundedList<uci::type::NIIRS_Type, uci::type::accessorType::nIIRS_Type, asb_uci::type::NIIRS_Type>;

  /** Indicates a message that is an output of the Capability. See enumerated type annotations for details. List size for
    * this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 4]
    */
  using MessageOutput = asb_uci::base::BoundedList<uci::type::SMTI_MessageOutputsEnum, uci::type::accessorType::sMTI_MessageOutputsEnum, asb_uci::type::SMTI_MessageOutputsEnum>;

  /** Fields of Regard for each component in the capability. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  using ComponentFieldOfRegard = asb_uci::base::BoundedList<uci::type::ComponentFieldOfRegardType, uci::type::accessorType::componentFieldOfRegardType, asb_uci::type::ComponentFieldOfRegardType>;

  /** The constructor */
  SMTI_CapabilityType();

  /** The copy constructor
    *
    * @param rhs The SMTI_CapabilityType to copy from
    */
  SMTI_CapabilityType(const SMTI_CapabilityType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SMTI_CapabilityType to move from
    */
  SMTI_CapabilityType(SMTI_CapabilityType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The SMTI_CapabilityType to copy from
    * @return The SMTI_CapabilityType that was assigned
    */
  SMTI_CapabilityType& operator=(const SMTI_CapabilityType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SMTI_CapabilityType to move from
    * @return The SMTI_CapabilityType that was assigned
    */
  SMTI_CapabilityType& operator=(SMTI_CapabilityType&& rhs) = delete;

  /** The destructor */
  ~SMTI_CapabilityType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SMTI_CapabilityType whose contents are to be used to set this
    *      uci::type::SMTI_CapabilityType's contents.
    */
  void copy(const uci::type::SMTI_CapabilityType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SMTI_CapabilityType whose contents are to be used to set this
    *      uci::type::SMTI_CapabilityType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SMTI_CapabilityType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's CapabilityType field
    *
    * @return The contents of the CapabilityType field
    */
  const uci::type::SMTI_CapabilityEnum& getCapabilityType() const override;

  /** Returns the contents of the message's CapabilityType field
    *
    * @return The contents of the CapabilityType field
    */
  uci::type::SMTI_CapabilityEnum& getCapabilityType() override;

  /** Sets the contents of the message's CapabilityType field
    *
    * @param accessor The accessor to use to set the CapabilityType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityType& setCapabilityType(const uci::type::SMTI_CapabilityEnum& accessor) override;

  /** Sets the contents of the message's CapabilityType field
    *
    * @param value The new value to set the CapabilityType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityType& setCapabilityType(uci::type::SMTI_CapabilityEnum::EnumerationItem value) override;

  /** Returns the contents of the message's SubCapabilityType field
    *
    * @return The contents of the SubCapabilityType field
    */
  const uci::type::SMTI_SubCapabilityEnum& getSubCapabilityType() const override;

  /** Returns the contents of the message's SubCapabilityType field
    *
    * @return The contents of the SubCapabilityType field
    */
  uci::type::SMTI_SubCapabilityEnum& getSubCapabilityType() override;

  /** Sets the contents of the message's SubCapabilityType field
    *
    * @param accessor The accessor to use to set the SubCapabilityType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityType& setSubCapabilityType(const uci::type::SMTI_SubCapabilityEnum& accessor) override;

  /** Sets the contents of the message's SubCapabilityType field
    *
    * @param value The new value to set the SubCapabilityType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityType& setSubCapabilityType(uci::type::SMTI_SubCapabilityEnum::EnumerationItem value) override;

  /** Returns the accessor to the CapabilityOptions field contained in this message fragment
    *
    * @return The const reference to the accessor to the CapabilityOptions field.
    */
  const uci::type::SMTI_CapabilityOptionsType& getCapabilityOptions() const override;

  /** Returns the accessor to the CapabilityOptions field contained in this message fragment
    *
    * @return The reference to the accessor to the CapabilityOptions field.
    */
  uci::type::SMTI_CapabilityOptionsType& getCapabilityOptions() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityType& setCapabilityOptions(const uci::type::SMTI_CapabilityOptionsType& accessor) override;

  /** Returns the accessor to the Band field contained in this message fragment
    *
    * @return The const reference to the accessor to the Band field.
    */
  const uci::type::SMTI_CapabilityType::Band& getBand() const override;

  /** Returns the accessor to the Band field contained in this message fragment
    *
    * @return The reference to the accessor to the Band field.
    */
  uci::type::SMTI_CapabilityType::Band& getBand() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityType& setBand(const uci::type::SMTI_CapabilityType::Band& accessor) override;

  /** Returns the accessor to the MT_IIRS_Level field contained in this message fragment
    *
    * @return The const reference to the accessor to the MT_IIRS_Level field.
    */
  const uci::type::SMTI_CapabilityType::MT_IIRS_Level& getMT_IIRS_Level() const override;

  /** Returns the accessor to the MT_IIRS_Level field contained in this message fragment
    *
    * @return The reference to the accessor to the MT_IIRS_Level field.
    */
  uci::type::SMTI_CapabilityType::MT_IIRS_Level& getMT_IIRS_Level() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityType& setMT_IIRS_Level(const uci::type::SMTI_CapabilityType::MT_IIRS_Level& accessor) override;

  /** Returns the accessor to the MessageOutput field contained in this message fragment
    *
    * @return The const reference to the accessor to the MessageOutput field.
    */
  const uci::type::SMTI_CapabilityType::MessageOutput& getMessageOutput() const override;

  /** Returns the accessor to the MessageOutput field contained in this message fragment
    *
    * @return The reference to the accessor to the MessageOutput field.
    */
  uci::type::SMTI_CapabilityType::MessageOutput& getMessageOutput() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityType& setMessageOutput(const uci::type::SMTI_CapabilityType::MessageOutput& accessor) override;

  /** Returns the accessor to the ComponentFieldOfRegard field contained in this message fragment
    *
    * @return The const reference to the accessor to the ComponentFieldOfRegard field.
    */
  const uci::type::SMTI_CapabilityType::ComponentFieldOfRegard& getComponentFieldOfRegard() const override;

  /** Returns the accessor to the ComponentFieldOfRegard field contained in this message fragment
    *
    * @return The reference to the accessor to the ComponentFieldOfRegard field.
    */
  uci::type::SMTI_CapabilityType::ComponentFieldOfRegard& getComponentFieldOfRegard() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SMTI_CapabilityType& setComponentFieldOfRegard(const uci::type::SMTI_CapabilityType::ComponentFieldOfRegard& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SMTI_CapabilityType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SMTI_CapabilityType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::SMTI_CapabilityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<SMTI_CapabilityEnum> capabilityType_Accessor;
  std::unique_ptr<SMTI_SubCapabilityEnum> subCapabilityType_Accessor;
  std::unique_ptr<SMTI_CapabilityOptionsType> capabilityOptions_Accessor;
  std::unique_ptr<Band> band_Accessor;
  std::unique_ptr<MT_IIRS_Level> mT_IIRS_Level_Accessor;
  std::unique_ptr<MessageOutput> messageOutput_Accessor;
  std::unique_ptr<ComponentFieldOfRegard> componentFieldOfRegard_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SMTI_CAPABILITYTYPE_H
