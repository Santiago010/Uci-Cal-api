/** @file ActivityBaseType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
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

#ifndef ASB_UCI_TYPE_ACTIVITYBASETYPE_H
#define ASB_UCI_TYPE_ACTIVITYBASETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../asb_uci/base/BoundedList.h"
#include "ActivityBasisEnum.h"
#include "ActivityStateEnum.h"
#include "DateTimeType.h"
#include "PercentType.h"
#include "../../asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityBaseType.h"
#include "CapabilityID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ActivityID_Type;
class ActivitySourceType;
class CannotComplyType;
class CapabilityID_Type;
class ComparableRankingType;

/** See annotations in child elements and messages/elements that use this type for details. */
class ActivityBaseType : public virtual uci::type::ActivityBaseType {
public:


  virtual ActivityBaseType& addCapabilityID(std::vector<asb_uci::type::CapabilityID_Type> vargs);

  /** Indicates a Capability which the Activity is an instance of. Generally an Activity is an instance of a single
    * Capability. An Activity can be associated with multiple Capabilities when, for example, a Subsystem has distinct
    * Capabilities for automated and manual. In this case, if a manual command is issued while an automated Activity that
    * achieves the desired result already exists, a single Activity represents both Capabilities. [Occurrences: Minimum: 1;
    * Maximum: MAX_LENGTH]
    */
  using CapabilityID = asb_uci::base::BoundedList<uci::type::CapabilityID_Type, uci::type::accessorType::capabilityID_Type, asb_uci::type::CapabilityID_Type>;

  /** Indicates an originating "source" of the Activity; the command or other item which invoked this specific Activity of
    * a Capability. A single Activity can fully or partially satisfy Activity sources. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  using Source = asb_uci::base::BoundedList<uci::type::ActivitySourceType, uci::type::accessorType::activitySourceType, asb_uci::type::ActivitySourceType>;

  /** The constructor */
  ActivityBaseType();

  /** The copy constructor
    *
    * @param rhs The ActivityBaseType to copy from
    */
  ActivityBaseType(const ActivityBaseType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The ActivityBaseType to move from
    */
  ActivityBaseType(ActivityBaseType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The ActivityBaseType to copy from
    * @return The ActivityBaseType that was assigned
    */
  ActivityBaseType& operator=(const ActivityBaseType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The ActivityBaseType to move from
    * @return The ActivityBaseType that was assigned
    */
  ActivityBaseType& operator=(ActivityBaseType&& rhs) = delete;

  /** The destructor */
  virtual ~ActivityBaseType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ActivityBaseType whose contents are to be used to set this
    *      uci::type::ActivityBaseType's contents.
    */
  void copy(const uci::type::ActivityBaseType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ActivityBaseType whose contents are to be used to set this
    *      uci::type::ActivityBaseType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::ActivityBaseType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the ActivityID field contained in this message fragment
    *
    * @return The const reference to the accessor to the ActivityID field.
    */
  const uci::type::ActivityID_Type& getActivityID() const override;

  /** Returns the accessor to the ActivityID field contained in this message fragment
    *
    * @return The reference to the accessor to the ActivityID field.
    */
  uci::type::ActivityID_Type& getActivityID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& setActivityID(const uci::type::ActivityID_Type& accessor) override;

  /** Returns the accessor to the CapabilityID field contained in this message fragment
    *
    * @return The const reference to the accessor to the CapabilityID field.
    */
  const uci::type::ActivityBaseType::CapabilityID& getCapabilityID() const override;

  /** Returns the accessor to the CapabilityID field contained in this message fragment
    *
    * @return The reference to the accessor to the CapabilityID field.
    */
  uci::type::ActivityBaseType::CapabilityID& getCapabilityID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& setCapabilityID(const uci::type::ActivityBaseType::CapabilityID& accessor) override;

  /** Returns the contents of the message's Interactive field
    *
    * @return The contents of the Interactive field
    */
  xs::Boolean getInteractive() const override;

  /** Sets the contents of the message's Interactive field
    *
    * @param value The new value to set the Interactive field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& setInteractive(xs::Boolean value) override;

  /** Returns the contents of the message's ActivityState field
    *
    * @return The contents of the ActivityState field
    */
  const uci::type::ActivityStateEnum& getActivityState() const override;

  /** Returns the contents of the message's ActivityState field
    *
    * @return The contents of the ActivityState field
    */
  uci::type::ActivityStateEnum& getActivityState() override;

  /** Sets the contents of the message's ActivityState field
    *
    * @param accessor The accessor to use to set the ActivityState field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& setActivityState(const uci::type::ActivityStateEnum& accessor) override;

  /** Sets the contents of the message's ActivityState field
    *
    * @param value The new value to set the ActivityState field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& setActivityState(uci::type::ActivityStateEnum::EnumerationItem value) override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ActivityBasisEnum& getBasis_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ActivityBasisEnum& getBasis() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ActivityBasisEnum& getBasis() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& setBasis(const uci::type::ActivityBasisEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& setBasis(uci::type::ActivityBasisEnum::EnumerationItem value) override;

  /** Returns whether this optional field Basisis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasBasis() const noexcept override;

  /** Enables the optional field such that getBasis will return the optional field and not throw an exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ActivityBasisEnum& enableBasis(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& clearBasis() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComparableRankingType& getActivityRank_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ComparableRankingType& getActivityRank() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComparableRankingType& getActivityRank() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& setActivityRank(const uci::type::ComparableRankingType& accessor) override;

  /** Returns whether this optional field ActivityRankis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasActivityRank() const noexcept override;

  /** Enables the optional field such that getActivityRank will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComparableRankingType& enableActivityRank(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& clearActivityRank() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CannotComplyType& getActivityReason_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CannotComplyType& getActivityReason() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CannotComplyType& getActivityReason() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& setActivityReason(const uci::type::CannotComplyType& accessor) override;

  /** Returns whether this optional field ActivityReasonis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasActivityReason() const noexcept override;

  /** Enables the optional field such that getActivityReason will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CannotComplyType& enableActivityReason(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& clearActivityReason() noexcept override;

  /** Returns the accessor to the Source field contained in this message fragment
    *
    * @return The const reference to the accessor to the Source field.
    */
  const uci::type::ActivityBaseType::Source& getSource() const override;

  /** Returns the accessor to the Source field contained in this message fragment
    *
    * @return The reference to the accessor to the Source field.
    */
  uci::type::ActivityBaseType::Source& getSource() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& setSource(const uci::type::ActivityBaseType::Source& accessor) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DateTimeTypeValue getEstimatedStartTime() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& setEstimatedStartTime(uci::type::DateTimeTypeValue value) override;

  /** Returns whether this optional field EstimatedStartTimeis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasEstimatedStartTime() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& clearEstimatedStartTime() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DateTimeTypeValue getEstimatedCompletionTime() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& setEstimatedCompletionTime(uci::type::DateTimeTypeValue value) override;

  /** Returns whether this optional field EstimatedCompletionTimeis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasEstimatedCompletionTime() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& clearEstimatedCompletionTime() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::PercentTypeValue getEstimatedPercentComplete() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& setEstimatedPercentComplete(uci::type::PercentTypeValue value) override;

  /** Returns whether this optional field EstimatedPercentCompleteis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasEstimatedPercentComplete() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityBaseType& clearEstimatedPercentComplete() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<ActivityBaseType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::ActivityBaseType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::ActivityBaseType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<ActivityID_Type> activityID_Accessor;
  std::unique_ptr<CapabilityID> capabilityID_Accessor;
  CapabilityID capabilityID;
  asb_xs::Boolean interactive_Accessor{false};
  std::unique_ptr<ActivityStateEnum> activityState_Accessor;
  std::unique_ptr<ActivityBasisEnum> basis_Accessor;
  std::unique_ptr<ComparableRankingType> activityRank_Accessor;
  std::unique_ptr<CannotComplyType> activityReason_Accessor;
  std::unique_ptr<Source> source_Accessor;
  boost::optional<DateTimeTypeValue> estimatedStartTime_Accessor;
  boost::optional<DateTimeTypeValue> estimatedCompletionTime_Accessor;
  boost::optional<PercentTypeValue> estimatedPercentComplete_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_ACTIVITYBASETYPE_H
