/** @file AccessAssessmentMDT.h
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

#ifndef ASB_UCI_TYPE_ACCESSASSESSMENTMDT_H
#define ASB_UCI_TYPE_ACCESSASSESSMENTMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/DateTimeType.h"
#include "../../../include/asb_uci/type/VisibleString1024Type.h"
#include "../../../include/asb_uci/type/VisibleString32Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AccessAssessmentMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class AccessAssessmentID_Type;
class AccessAssessmentType;
class AssociatedAccessAssessmentInfoType;
class NotificationSourceType;
class RequestID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class AccessAssessmentMDT : public virtual uci::type::AccessAssessmentMDT {
public:
  /** Indicates a message that is associated with or the cause of the Access Assessment; this would include launch
    * observations, operator notifications, other associated access assessments, and other relevant messages. [Occurrences:
    * Minimum: 0; Maximum: 8]
    */
  using AssociatedAccessAssessmentInfo = asb_uci::base::BoundedList<uci::type::AssociatedAccessAssessmentInfoType, uci::type::accessorType::associatedAccessAssessmentInfoType, asb_uci::type::AssociatedAccessAssessmentInfoType>;

  /** Each instance is a column in the access assessment table. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  using Assessment = asb_uci::base::BoundedList<uci::type::AccessAssessmentType, uci::type::accessorType::accessAssessmentType, asb_uci::type::AccessAssessmentType>;

  /** The constructor */
  AccessAssessmentMDT();

  /** The copy constructor
    *
    * @param rhs The AccessAssessmentMDT to copy from
    */
  AccessAssessmentMDT(const AccessAssessmentMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The AccessAssessmentMDT to move from
    */
  AccessAssessmentMDT(AccessAssessmentMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The AccessAssessmentMDT to copy from
    * @return The AccessAssessmentMDT that was assigned
    */
  AccessAssessmentMDT& operator=(const AccessAssessmentMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The AccessAssessmentMDT to move from
    * @return The AccessAssessmentMDT that was assigned
    */
  AccessAssessmentMDT& operator=(AccessAssessmentMDT&& rhs) = delete;

  /** The destructor */
  virtual ~AccessAssessmentMDT();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::AccessAssessmentMDT whose contents are to be used to set this
    *      uci::type::AccessAssessmentMDT's contents.
    */
  void copy(const uci::type::AccessAssessmentMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::AccessAssessmentMDT whose contents are to be used to set this
    *      uci::type::AccessAssessmentMDT's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::AccessAssessmentMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the AccessAssessmentID field contained in this message fragment
    *
    * @return The const reference to the accessor to the AccessAssessmentID field.
    */
  const uci::type::AccessAssessmentID_Type& getAccessAssessmentID() const override;

  /** Returns the accessor to the AccessAssessmentID field contained in this message fragment
    *
    * @return The reference to the accessor to the AccessAssessmentID field.
    */
  uci::type::AccessAssessmentID_Type& getAccessAssessmentID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::AccessAssessmentMDT& setAccessAssessmentID(const uci::type::AccessAssessmentID_Type& accessor) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::VisibleString32Type& getAssessmentName_() const;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  const uci::type::VisibleString32Type& getAssessmentName() const override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::VisibleString32Type& getAssessmentName() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::AccessAssessmentMDT& setAssessmentName(const uci::type::VisibleString32Type& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::AccessAssessmentMDT& setAssessmentName(const std::string& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::AccessAssessmentMDT& setAssessmentName(const char* value) override;

  /** Returns whether this optional field assessmentName_is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasAssessmentName() const noexcept override;

  /** Enables the optional field such that getAssessmentName will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The value of the optional field
    */
  uci::type::VisibleString32Type& enableAssessmentName(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::AccessAssessmentMDT& clearAssessmentName() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RequestID_Type& getAccessAssessmentRequestID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::RequestID_Type& getAccessAssessmentRequestID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RequestID_Type& getAccessAssessmentRequestID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::AccessAssessmentMDT& setAccessAssessmentRequestID(const uci::type::RequestID_Type& accessor) override;

  /** Returns whether this optional field AccessAssessmentRequestIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasAccessAssessmentRequestID() const noexcept override;

  /** Enables the optional field such that getAccessAssessmentRequestID will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RequestID_Type& enableAccessAssessmentRequestID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::AccessAssessmentMDT& clearAccessAssessmentRequestID() noexcept override;

  /** Returns the accessor to the AssessementSource field contained in this message fragment
    *
    * @return The const reference to the accessor to the AssessementSource field.
    */
  const uci::type::NotificationSourceType& getAssessementSource() const override;

  /** Returns the accessor to the AssessementSource field contained in this message fragment
    *
    * @return The reference to the accessor to the AssessementSource field.
    */
  uci::type::NotificationSourceType& getAssessementSource() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::AccessAssessmentMDT& setAssessementSource(const uci::type::NotificationSourceType& accessor) override;

  /** Returns the accessor to the AssociatedAccessAssessmentInfo field contained in this message fragment
    *
    * @return The const reference to the accessor to the AssociatedAccessAssessmentInfo field.
    */
  const uci::type::AccessAssessmentMDT::AssociatedAccessAssessmentInfo& getAssociatedAccessAssessmentInfo() const override;

  /** Returns the accessor to the AssociatedAccessAssessmentInfo field contained in this message fragment
    *
    * @return The reference to the accessor to the AssociatedAccessAssessmentInfo field.
    */
  uci::type::AccessAssessmentMDT::AssociatedAccessAssessmentInfo& getAssociatedAccessAssessmentInfo() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::AccessAssessmentMDT& setAssociatedAccessAssessmentInfo(const uci::type::AccessAssessmentMDT::AssociatedAccessAssessmentInfo& accessor) override;

  /** Returns the accessor to the Assessment field contained in this message fragment
    *
    * @return The const reference to the accessor to the Assessment field.
    */
  const uci::type::AccessAssessmentMDT::Assessment& getAssessment() const override;

  /** Returns the accessor to the Assessment field contained in this message fragment
    *
    * @return The reference to the accessor to the Assessment field.
    */
  uci::type::AccessAssessmentMDT::Assessment& getAssessment() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::AccessAssessmentMDT& setAssessment(const uci::type::AccessAssessmentMDT::Assessment& accessor) override;

  /** Returns the contents of the message's CompletionTime field
    *
    * @return The contents of the CompletionTime field
    */
  uci::type::DateTimeTypeValue getCompletionTime() const override;

  /** Sets the contents of the message's CompletionTime field
    *
    * @param value The new value to set the CompletionTime field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::AccessAssessmentMDT& setCompletionTime(uci::type::DateTimeTypeValue value) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::VisibleString1024Type& getAssessmentNarrative_() const;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  const uci::type::VisibleString1024Type& getAssessmentNarrative() const override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::VisibleString1024Type& getAssessmentNarrative() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::AccessAssessmentMDT& setAssessmentNarrative(const uci::type::VisibleString1024Type& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::AccessAssessmentMDT& setAssessmentNarrative(const std::string& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::AccessAssessmentMDT& setAssessmentNarrative(const char* value) override;

  /** Returns whether this optional field assessmentNarrative_is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasAssessmentNarrative() const noexcept override;

  /** Enables the optional field such that getAssessmentNarrative will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The value of the optional field
    */
  uci::type::VisibleString1024Type& enableAssessmentNarrative(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::AccessAssessmentMDT& clearAssessmentNarrative() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<AccessAssessmentMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::AccessAssessmentMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::AccessAssessmentMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<AccessAssessmentID_Type> accessAssessmentID_Accessor;
  std::unique_ptr<VisibleString32Type> assessmentName_Accessor;
  std::unique_ptr<RequestID_Type> accessAssessmentRequestID_Accessor;
  std::unique_ptr<NotificationSourceType> assessementSource_Accessor;
  std::unique_ptr<AssociatedAccessAssessmentInfo> associatedAccessAssessmentInfo_Accessor;
  std::unique_ptr<Assessment> assessment_Accessor;
  DateTimeTypeValue completionTime_Accessor{0};
  std::unique_ptr<VisibleString1024Type> assessmentNarrative_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_ACCESSASSESSMENTMDT_H
