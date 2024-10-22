/** @file FrequencySetType.h
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

#ifndef ASB_UCI_TYPE_FREQUENCYSETTYPE_H
#define ASB_UCI_TYPE_FREQUENCYSETTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/ModulationEnum.h"
#include "../../../include/asb_uci/type/RF_SignalContentEnum.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FrequencySetType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class FrequencyMultiChannelType;
class FrequencyRangeType;

/** Modeled after SensorSpecificData in the ACTDF standard. */
class FrequencySetType : public virtual uci::type::FrequencySetType {
public:
  /** Indicates frequency or frequencies, expressed by either a single frequency, frequency range, or any multiple and
    * combination of the two. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  using FrequencyRange = asb_uci::base::BoundedList<uci::type::FrequencyRangeType, uci::type::accessorType::frequencyRangeType, asb_uci::type::FrequencyRangeType>;

  /** Indicates the signal modulation. List size for this element is based on "Select All That Apply" condition.
    * [Occurrences: Minimum: 0; Maximum: 62]
    */
  using Modulation = asb_uci::base::BoundedList<uci::type::ModulationEnum, uci::type::accessorType::modulationEnum, asb_uci::type::ModulationEnum>;

  /** The constructor */
  FrequencySetType();

  /** The copy constructor
    *
    * @param rhs The FrequencySetType to copy from
    */
  FrequencySetType(const FrequencySetType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The FrequencySetType to move from
    */
  FrequencySetType(FrequencySetType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The FrequencySetType to copy from
    * @return The FrequencySetType that was assigned
    */
  FrequencySetType& operator=(const FrequencySetType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The FrequencySetType to move from
    * @return The FrequencySetType that was assigned
    */
  FrequencySetType& operator=(FrequencySetType&& rhs) = delete;

  /** The destructor */
  virtual ~FrequencySetType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::FrequencySetType whose contents are to be used to set this
    *      uci::type::FrequencySetType's contents.
    */
  void copy(const uci::type::FrequencySetType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::FrequencySetType whose contents are to be used to set this
    *      uci::type::FrequencySetType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::FrequencySetType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the FrequencyRange field contained in this message fragment
    *
    * @return The const reference to the accessor to the FrequencyRange field.
    */
  const uci::type::FrequencySetType::FrequencyRange& getFrequencyRange() const override;

  /** Returns the accessor to the FrequencyRange field contained in this message fragment
    *
    * @return The reference to the accessor to the FrequencyRange field.
    */
  uci::type::FrequencySetType::FrequencyRange& getFrequencyRange() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FrequencySetType& setFrequencyRange(const uci::type::FrequencySetType::FrequencyRange& accessor) override;

  /** Returns the accessor to the Modulation field contained in this message fragment
    *
    * @return The const reference to the accessor to the Modulation field.
    */
  const uci::type::FrequencySetType::Modulation& getModulation() const override;

  /** Returns the accessor to the Modulation field contained in this message fragment
    *
    * @return The reference to the accessor to the Modulation field.
    */
  uci::type::FrequencySetType::Modulation& getModulation() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FrequencySetType& setModulation(const uci::type::FrequencySetType::Modulation& accessor) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getEncrypted() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::FrequencySetType& setEncrypted(xs::Boolean value) override;

  /** Returns whether this optional field Encryptedis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasEncrypted() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::FrequencySetType& clearEncrypted() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FrequencyMultiChannelType& getMultiChannel_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::FrequencyMultiChannelType& getMultiChannel() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FrequencyMultiChannelType& getMultiChannel() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FrequencySetType& setMultiChannel(const uci::type::FrequencyMultiChannelType& accessor) override;

  /** Returns whether this optional field MultiChannelis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMultiChannel() const noexcept override;

  /** Enables the optional field such that getMultiChannel will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FrequencyMultiChannelType& enableMultiChannel(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::FrequencySetType& clearMultiChannel() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RF_SignalContentEnum& getContent_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::RF_SignalContentEnum& getContent() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RF_SignalContentEnum& getContent() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FrequencySetType& setContent(const uci::type::RF_SignalContentEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FrequencySetType& setContent(uci::type::RF_SignalContentEnum::EnumerationItem value) override;

  /** Returns whether this optional field Contentis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasContent() const noexcept override;

  /** Enables the optional field such that getContent will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RF_SignalContentEnum& enableContent(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::FrequencySetType& clearContent() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<FrequencySetType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::FrequencySetType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::FrequencySetType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<FrequencyRange> frequencyRange_Accessor;
  std::unique_ptr<Modulation> modulation_Accessor;
  boost::optional<asb_xs::Boolean> encrypted_Accessor;
  std::unique_ptr<FrequencyMultiChannelType> multiChannel_Accessor;
  std::unique_ptr<RF_SignalContentEnum> content_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_FREQUENCYSETTYPE_H
