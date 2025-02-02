/** @file ActivityByType.h
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

#ifndef ASB_UCI_TYPE_ACTIVITYBYTYPE_H
#define ASB_UCI_TYPE_ACTIVITYBYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/ActivitySubCategoryEnum.h"
#include "../../../include/asb_uci/type/EnvironmentEnum.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityByType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ForeignKeyType;

/** See annotations in child elements and messages/elements that use this type for details. */
class ActivityByType : public virtual uci::type::ActivityByType {
public:
  /** The constructor */
  ActivityByType();

  /** The copy constructor
    *
    * @param rhs The ActivityByType to copy from
    */
  ActivityByType(const ActivityByType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The ActivityByType to move from
    */
  ActivityByType(ActivityByType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The ActivityByType to copy from
    * @return The ActivityByType that was assigned
    */
  ActivityByType& operator=(const ActivityByType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The ActivityByType to move from
    * @return The ActivityByType that was assigned
    */
  ActivityByType& operator=(ActivityByType&& rhs) = delete;

  /** The destructor */
  virtual ~ActivityByType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ActivityByType whose contents are to be used to set this uci::type::ActivityByType's
    *      contents.
    */
  void copy(const uci::type::ActivityByType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ActivityByType whose contents are to be used to set this uci::type::ActivityByType's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::ActivityByType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's Activity field
    *
    * @return The contents of the Activity field
    */
  xs::UnsignedInt getActivity() const override;

  /** Sets the contents of the message's Activity field
    *
    * @param value The new value to set the Activity field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityByType& setActivity(xs::UnsignedInt value) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::UnsignedInt getActivityAmplification() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityByType& setActivityAmplification(xs::UnsignedInt value) override;

  /** Returns whether this optional field ActivityAmplificationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasActivityAmplification() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityByType& clearActivityAmplification() noexcept override;

  /** Returns the contents of the message's ActivityCategory field
    *
    * @return The contents of the ActivityCategory field
    */
  const uci::type::EnvironmentEnum& getActivityCategory() const override;

  /** Returns the contents of the message's ActivityCategory field
    *
    * @return The contents of the ActivityCategory field
    */
  uci::type::EnvironmentEnum& getActivityCategory() override;

  /** Sets the contents of the message's ActivityCategory field
    *
    * @param accessor The accessor to use to set the ActivityCategory field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityByType& setActivityCategory(const uci::type::EnvironmentEnum& accessor) override;

  /** Sets the contents of the message's ActivityCategory field
    *
    * @param value The new value to set the ActivityCategory field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityByType& setActivityCategory(uci::type::EnvironmentEnum::EnumerationItem value) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ForeignKeyType& getCustomActivity_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ForeignKeyType& getCustomActivity() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ForeignKeyType& getCustomActivity() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityByType& setCustomActivity(const uci::type::ForeignKeyType& accessor) override;

  /** Returns whether this optional field CustomActivityis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasCustomActivity() const noexcept override;

  /** Enables the optional field such that getCustomActivity will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ForeignKeyType& enableCustomActivity(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityByType& clearCustomActivity() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ActivitySubCategoryEnum& getActivitySubCategory_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ActivitySubCategoryEnum& getActivitySubCategory() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ActivitySubCategoryEnum& getActivitySubCategory() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityByType& setActivitySubCategory(const uci::type::ActivitySubCategoryEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityByType& setActivitySubCategory(uci::type::ActivitySubCategoryEnum::EnumerationItem value) override;

  /** Returns whether this optional field ActivitySubCategoryis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasActivitySubCategory() const noexcept override;

  /** Enables the optional field such that getActivitySubCategory will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ActivitySubCategoryEnum& enableActivitySubCategory(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityByType& clearActivitySubCategory() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<ActivityByType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::ActivityByType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::ActivityByType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  asb_xs::UnsignedInt activity_Accessor{0};
  boost::optional<asb_xs::UnsignedInt> activityAmplification_Accessor;
  std::unique_ptr<EnvironmentEnum> activityCategory_Accessor;
  std::unique_ptr<ForeignKeyType> customActivity_Accessor;
  std::unique_ptr<ActivitySubCategoryEnum> activitySubCategory_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_ACTIVITYBYTYPE_H
