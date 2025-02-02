/** @file ActivitySourceType.h
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

#ifndef ASB_UCI_TYPE_ACTIVITYSOURCETYPE_H
#define ASB_UCI_TYPE_ACTIVITYSOURCETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivitySourceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ActivityPlanReferenceType;
class AssociatedMessageSourceType;
class MDF_ReferenceType;
class RequirementInstanceID_ChoiceType;

/** See annotations in child elements and messages/elements that use this type for details. */
class ActivitySourceType : public virtual uci::type::ActivitySourceType {
public:
  /** The constructor */
  ActivitySourceType();

  /** The copy constructor
    *
    * @param rhs The ActivitySourceType to copy from
    */
  ActivitySourceType(const ActivitySourceType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The ActivitySourceType to move from
    */
  ActivitySourceType(ActivitySourceType&& rhs) = delete;

  /** The assignment operator [not supported]
    *
    * @param rhs The ActivitySourceType to copy from
    * @return The ActivitySourceType that was assigned
    */
  ActivitySourceType& operator=(const ActivitySourceType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The ActivitySourceType to move from
    * @return The ActivitySourceType that was assigned
    */
  ActivitySourceType& operator=(ActivitySourceType&& rhs) = delete;

  /** The destructor */
  virtual ~ActivitySourceType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ActivitySourceType whose contents are to be used to set this
    *      uci::type::ActivitySourceType's contents.
    */
  void copy(const uci::type::ActivitySourceType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ActivitySourceType whose contents are to be used to set this
    *      uci::type::ActivitySourceType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::ActivitySourceType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value
    */
  uci::type::ActivitySourceType::ActivitySourceTypeChoice getActivitySourceTypeChoiceOrdinal() const noexcept override;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getActivitySourceTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In addition, the
    * access methods associated with the chosen element will be enabled and will provide access to the chosen element.
    *
    * @param ordinal The ordinal to set this choice's selected ordinal to.
    * @param type The type of data that is to be made available when the ordinal is set.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivitySourceType& setActivitySourceTypeChoiceOrdinal(uci::type::ActivitySourceType::ActivitySourceTypeChoice ordinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the Requirement field contained in this message fragment
    *
    * @return The const reference to the accessor to the Requirement field.
    */
  uci::type::RequirementInstanceID_ChoiceType& getRequirement_() const;

  /** Returns the accessor to the Requirement field contained in this message fragment
    *
    * @return The const reference to the accessor to the Requirement field.
    */
  const uci::type::RequirementInstanceID_ChoiceType& getRequirement() const override;

  /** Returns the accessor to the Requirement field contained in this message fragment
    *
    * @return The reference to the accessor to the Requirement field.
    */
  uci::type::RequirementInstanceID_ChoiceType& getRequirement() override;

  /** Sets this choice's choice to be Requirement and initializes Requirement to be the specified value. A deep copy will
    * be used by this method to set Requirement
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivitySourceType& setRequirement(const uci::type::RequirementInstanceID_ChoiceType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by Requirement.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by Requirement, false otherwise.
    */
  bool isRequirement() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by Requirement.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by Requirement.
    */
  uci::type::RequirementInstanceID_ChoiceType& chooseRequirement(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by Requirement.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by Requirement.
    */
  uci::type::RequirementInstanceID_ChoiceType& chooseRequirement(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the MDF field contained in this message fragment
    *
    * @return The const reference to the accessor to the MDF field.
    */
  uci::type::MDF_ReferenceType& getMDF_() const;

  /** Returns the accessor to the MDF field contained in this message fragment
    *
    * @return The reference to the accessor to the MDF field.
    */
  const uci::type::MDF_ReferenceType& getMDF() const override;

  /** Returns the accessor to the MDF field contained in this message fragment
    *
    * @return The reference to the accessor to the MDF field.
    */
  uci::type::MDF_ReferenceType& getMDF() override;

  /** Sets this choice's choice to be mDF and initializes mDF to be the specified value. A deep copy will be used by this
    * method to set mDF
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivitySourceType& setMDF(const uci::type::MDF_ReferenceType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by MDF.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by MDF, false otherwise.
    */
  bool isMDF() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by MDF.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by MDF.
    */
  uci::type::MDF_ReferenceType& chooseMDF(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by MDF.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by MDF.
    */
  uci::type::MDF_ReferenceType& chooseMDF(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the ActivityPlan field contained in this message fragment
    *
    * @return The const reference to the accessor to the ActivityPlan field.
    */
  uci::type::ActivityPlanReferenceType& getActivityPlan_() const;

  /** Returns the accessor to the ActivityPlan field contained in this message fragment
    *
    * @return The reference to the accessor to the ActivityPlan field.
    */
  const uci::type::ActivityPlanReferenceType& getActivityPlan() const override;

  /** Returns the accessor to the ActivityPlan field contained in this message fragment
    *
    * @return The reference to the accessor to the ActivityPlan field.
    */
  uci::type::ActivityPlanReferenceType& getActivityPlan() override;

  /** Sets this choice's choice to be activityPlan and initializes activityPlan to be the specified value. A deep copy will
    * be used by this method to set activityPlan
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivitySourceType& setActivityPlan(const uci::type::ActivityPlanReferenceType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by ActivityPlan.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by ActivityPlan, false otherwise.
    */
  bool isActivityPlan() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by ActivityPlan.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by ActivityPlan.
    */
  uci::type::ActivityPlanReferenceType& chooseActivityPlan(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by ActivityPlan.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by ActivityPlan.
    */
  uci::type::ActivityPlanReferenceType& chooseActivityPlan(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the AssociatedMessage field contained in this message fragment
    *
    * @return The const reference to the accessor to the AssociatedMessage field.
    */
  uci::type::AssociatedMessageSourceType& getAssociatedMessage_() const;

  /** Returns the accessor to the AssociatedMessage field contained in this message fragment
    *
    * @return The const reference to the accessor to the AssociatedMessage field.
    */
  const uci::type::AssociatedMessageSourceType& getAssociatedMessage() const override;

  /** Returns the accessor to the AssociatedMessage field contained in this message fragment
    *
    * @return The reference to the accessor to the AssociatedMessage field.
    */
  uci::type::AssociatedMessageSourceType& getAssociatedMessage() override;

  /** Sets this choice's choice to be AssociatedMessage and initializes AssociatedMessage to be the specified value. A deep
    * copy will be used by this method to set AssociatedMessage
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivitySourceType& setAssociatedMessage(const uci::type::AssociatedMessageSourceType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by AssociatedMessage.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by AssociatedMessage, false
    *      otherwise.
    */
  bool isAssociatedMessage() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by AssociatedMessage.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by AssociatedMessage.
    */
  uci::type::AssociatedMessageSourceType& chooseAssociatedMessage(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by AssociatedMessage.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by AssociatedMessage.
    */
  uci::type::AssociatedMessageSourceType& chooseAssociatedMessage(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<ActivitySourceType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::ActivitySourceType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::ActivitySourceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<RequirementInstanceID_ChoiceType> requirement_Accessor;
  std::unique_ptr<MDF_ReferenceType> mDF_Accessor;
  std::unique_ptr<ActivityPlanReferenceType> activityPlan_Accessor;
  std::unique_ptr<AssociatedMessageSourceType> associatedMessage_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_ACTIVITYSOURCETYPE_H
