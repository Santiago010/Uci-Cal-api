/** @file COMINT_ActivityType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:12 PM
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

#ifndef ASB_UCI_TYPE_COMINT_ACTIVITYTYPE_H
#define ASB_UCI_TYPE_COMINT_ACTIVITYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/COMINT_SubCapabilityEnum.h"
#include "../../../include/asb_uci/type/ConsentEnum.h"
#include "../../../include/asb_uci/type/DateTimeType.h"
#include "../../../include/asb_uci/type/SharedRF_ApertureActivityBaseType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/COMINT_ActivityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class COMINT_ReceiveDwellType;
class COMINT_SubCapabilityDetailsType;

/** See annotations in child elements and messages/elements that use this type for details. */
class COMINT_ActivityType : public virtual uci::type::COMINT_ActivityType, public virtual SharedRF_ApertureActivityBaseType {
public:
  /** Indicates a specific SubCapability that is included in the Activity. If omitted, all SubCapabilities of the
    * associated Capability or Capabilities (as indicated in the Capability message) will be included in the Activity. This
    * element is required whenever a subset of SubCapabilities of the associated Capability or Capabilities are included in
    * the Activity. List size for this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 0;
    * Maximum: 16]
    */
  using SubCapability = asb_uci::base::BoundedList<uci::type::COMINT_SubCapabilityEnum, uci::type::accessorType::cOMINT_SubCapabilityEnum, asb_uci::type::COMINT_SubCapabilityEnum>;

  /** Indicates a receiver dwell that is applicable to the Activity. This element is optional in support of Capabilities
    * whose detailed dwell configuration and scheduling is internally isolated. Though optional here, dwell information is
    * required for successful, higher level Capability management across heterogeneous families Systems, Services and
    * Subsystems. dwell information is potentially useful even if the associated Activity and/or Capability aren't manual
    * and/or interactive. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using ReceiveDwell = asb_uci::base::BoundedList<uci::type::COMINT_ReceiveDwellType, uci::type::accessorType::cOMINT_ReceiveDwellType, asb_uci::type::COMINT_ReceiveDwellType>;

  /** Indicates select SubCapability-specific details regarding the originating command/source of the Activity (as
    * indicated by the sibling Source element). In other words, this element is an echo of select elements from the
    * Command, MDF, etc. that originated the Activity. Additionally, in the case of Commands whose results are independent
    * of typical output messages such as Entity or SignalReport, discrete command results are given here instead of in
    * those messages. If multiple instances are given, each must be of a different choice in the child choice type.
    * [Occurrences: Minimum: 0; Maximum: 5]
    */
  using SubCapabilityDetails = asb_uci::base::BoundedList<uci::type::COMINT_SubCapabilityDetailsType, uci::type::accessorType::cOMINT_SubCapabilityDetailsType, asb_uci::type::COMINT_SubCapabilityDetailsType>;

  /** The constructor */
  COMINT_ActivityType();

  /** The copy constructor
    *
    * @param rhs The COMINT_ActivityType to copy from
    */
  COMINT_ActivityType(const COMINT_ActivityType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The COMINT_ActivityType to move from
    */
  COMINT_ActivityType(COMINT_ActivityType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The COMINT_ActivityType to copy from
    * @return The COMINT_ActivityType that was assigned
    */
  COMINT_ActivityType& operator=(const COMINT_ActivityType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The COMINT_ActivityType to move from
    * @return The COMINT_ActivityType that was assigned
    */
  COMINT_ActivityType& operator=(COMINT_ActivityType&& rhs) = delete;

  /** The destructor */
  ~COMINT_ActivityType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::COMINT_ActivityType whose contents are to be used to set this
    *      uci::type::COMINT_ActivityType's contents.
    */
  void copy(const uci::type::COMINT_ActivityType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::COMINT_ActivityType whose contents are to be used to set this
    *      uci::type::COMINT_ActivityType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::COMINT_ActivityType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the SubCapability field contained in this message fragment
    *
    * @return The const reference to the accessor to the SubCapability field.
    */
  const uci::type::COMINT_ActivityType::SubCapability& getSubCapability() const override;

  /** Returns the accessor to the SubCapability field contained in this message fragment
    *
    * @return The reference to the accessor to the SubCapability field.
    */
  uci::type::COMINT_ActivityType::SubCapability& getSubCapability() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ActivityType& setSubCapability(const uci::type::COMINT_ActivityType::SubCapability& accessor) override;

  /** Returns the accessor to the ReceiveDwell field contained in this message fragment
    *
    * @return The const reference to the accessor to the ReceiveDwell field.
    */
  const uci::type::COMINT_ActivityType::ReceiveDwell& getReceiveDwell() const override;

  /** Returns the accessor to the ReceiveDwell field contained in this message fragment
    *
    * @return The reference to the accessor to the ReceiveDwell field.
    */
  uci::type::COMINT_ActivityType::ReceiveDwell& getReceiveDwell() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ActivityType& setReceiveDwell(const uci::type::COMINT_ActivityType::ReceiveDwell& accessor) override;

  /** Returns the accessor to the SubCapabilityDetails field contained in this message fragment
    *
    * @return The const reference to the accessor to the SubCapabilityDetails field.
    */
  const uci::type::COMINT_ActivityType::SubCapabilityDetails& getSubCapabilityDetails() const override;

  /** Returns the accessor to the SubCapabilityDetails field contained in this message fragment
    *
    * @return The reference to the accessor to the SubCapabilityDetails field.
    */
  uci::type::COMINT_ActivityType::SubCapabilityDetails& getSubCapabilityDetails() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ActivityType& setSubCapabilityDetails(const uci::type::COMINT_ActivityType::SubCapabilityDetails& accessor) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getConsentRequired() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ActivityType& setConsentRequired(xs::Boolean value) override;

  /** Returns whether this optional field ConsentRequiredis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasConsentRequired() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ActivityType& clearConsentRequired() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ConsentEnum& getConsentState_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ConsentEnum& getConsentState() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ConsentEnum& getConsentState() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ActivityType& setConsentState(const uci::type::ConsentEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ActivityType& setConsentState(uci::type::ConsentEnum::EnumerationItem value) override;

  /** Returns whether this optional field ConsentStateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasConsentState() const noexcept override;

  /** Enables the optional field such that getConsentState will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ConsentEnum& enableConsentState(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ActivityType& clearConsentState() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DateTimeTypeValue getActualStartTime() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ActivityType& setActualStartTime(uci::type::DateTimeTypeValue value) override;

  /** Returns whether this optional field ActualStartTimeis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasActualStartTime() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ActivityType& clearActualStartTime() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DateTimeTypeValue getActualEndTime() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ActivityType& setActualEndTime(uci::type::DateTimeTypeValue value) override;

  /** Returns whether this optional field ActualEndTimeis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasActualEndTime() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ActivityType& clearActualEndTime() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getSpectralDensityReporting() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ActivityType& setSpectralDensityReporting(xs::Boolean value) override;

  /** Returns whether this optional field SpectralDensityReportingis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSpectralDensityReporting() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_ActivityType& clearSpectralDensityReporting() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<COMINT_ActivityType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::COMINT_ActivityType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::COMINT_ActivityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<SubCapability> subCapability_Accessor;
  std::unique_ptr<ReceiveDwell> receiveDwell_Accessor;
  std::unique_ptr<SubCapabilityDetails> subCapabilityDetails_Accessor;
  boost::optional<asb_xs::Boolean> consentRequired_Accessor;
  std::unique_ptr<ConsentEnum> consentState_Accessor;
  boost::optional<DateTimeTypeValue> actualStartTime_Accessor;
  boost::optional<DateTimeTypeValue> actualEndTime_Accessor;
  boost::optional<asb_xs::Boolean> spectralDensityReporting_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_COMINT_ACTIVITYTYPE_H
