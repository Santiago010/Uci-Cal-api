/** @file RF_ThreadInstanceCommandType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#ifndef ASB_UCI_TYPE_RF_THREADINSTANCECOMMANDTYPE_H
#define ASB_UCI_TYPE_RF_THREADINSTANCECOMMANDTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RF_ThreadInstanceCommandType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ModifyRF_ThreadInstanceType;
class RemoveRF_ThreadInstanceType;
class SetupRF_ThreadInstanceType;

/** See annotations in child elements and messages/elements that use this type for details. */
class RF_ThreadInstanceCommandType : public virtual uci::type::RF_ThreadInstanceCommandType {
public:
  /** Sets up the allocated RF Thread Instance that will be utilized by the subsystem (e.g. EA, ESM). This information is
    * passed to the Real Time Arbitration and Control component of the RFDC for configuration for future use. [Occurrences:
    * Minimum: 1; Maximum: MAX_LENGTH]
    */
  using SetupRF_ThreadInstance = asb_uci::base::BoundedList<uci::type::SetupRF_ThreadInstanceType, uci::type::accessorType::setupRF_ThreadInstanceType, asb_uci::type::SetupRF_ThreadInstanceType>;

  /** Modify RF Thread Instances that has been setup. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  using ModifyRF_ThreadInstance = asb_uci::base::BoundedList<uci::type::ModifyRF_ThreadInstanceType, uci::type::accessorType::modifyRF_ThreadInstanceType, asb_uci::type::ModifyRF_ThreadInstanceType>;

  /** Remove RF Thread Instances that has been setup. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  using RemoveRF_ThreadInstance = asb_uci::base::BoundedList<uci::type::RemoveRF_ThreadInstanceType, uci::type::accessorType::removeRF_ThreadInstanceType, asb_uci::type::RemoveRF_ThreadInstanceType>;

  /** The constructor */
  RF_ThreadInstanceCommandType();

  /** The copy constructor
    *
    * @param rhs The RF_ThreadInstanceCommandType to copy from
    */
  RF_ThreadInstanceCommandType(const RF_ThreadInstanceCommandType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The RF_ThreadInstanceCommandType to move from
    */
  RF_ThreadInstanceCommandType(RF_ThreadInstanceCommandType&& rhs) = delete;

  /** The assignment operator [not supported]
    *
    * @param rhs The RF_ThreadInstanceCommandType to copy from
    * @return The RF_ThreadInstanceCommandType that was assigned
    */
  RF_ThreadInstanceCommandType& operator=(const RF_ThreadInstanceCommandType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The RF_ThreadInstanceCommandType to move from
    * @return The RF_ThreadInstanceCommandType that was assigned
    */
  RF_ThreadInstanceCommandType& operator=(RF_ThreadInstanceCommandType&& rhs) = delete;

  /** The destructor */
  virtual ~RF_ThreadInstanceCommandType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RF_ThreadInstanceCommandType whose contents are to be used to set this
    *      uci::type::RF_ThreadInstanceCommandType's contents.
    */
  void copy(const uci::type::RF_ThreadInstanceCommandType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RF_ThreadInstanceCommandType whose contents are to be used to set this
    *      uci::type::RF_ThreadInstanceCommandType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::RF_ThreadInstanceCommandType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value
    */
  uci::type::RF_ThreadInstanceCommandType::RF_ThreadInstanceCommandTypeChoice getRF_ThreadInstanceCommandTypeChoiceOrdinal() const noexcept override;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getRF_ThreadInstanceCommandTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In
    * addition, the access methods associated with the chosen element will be enabled and will provide access to the chosen
    * element.
    *
    * @param ordinal The ordinal to set this choice's selected ordinal to.
    * @param type The type of data that is to be made available when the ordinal is set.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RF_ThreadInstanceCommandType& setRF_ThreadInstanceCommandTypeChoiceOrdinal(uci::type::RF_ThreadInstanceCommandType::RF_ThreadInstanceCommandTypeChoice ordinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the SetupRF_ThreadInstance item contained in this message fragment
    *
    * @return The const reference to the accessor to the SetupRF_ThreadInstance item.
    */
  uci::type::RF_ThreadInstanceCommandType::SetupRF_ThreadInstance& getSetupRF_ThreadInstance_() const;

  /** Returns the accessor to the SetupRF_ThreadInstance item contained in this message fragment
    *
    * @return The const reference to the accessor to the SetupRF_ThreadInstance item.
    */
  const uci::type::RF_ThreadInstanceCommandType::SetupRF_ThreadInstance& getSetupRF_ThreadInstance() const override;

  /** Returns the accessor to the SetupRF_ThreadInstance item contained in this message fragment
    *
    * @return The reference to the accessor to the SetupRF_ThreadInstance item.
    */
  uci::type::RF_ThreadInstanceCommandType::SetupRF_ThreadInstance& getSetupRF_ThreadInstance() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RF_ThreadInstanceCommandType& setSetupRF_ThreadInstance(const uci::type::RF_ThreadInstanceCommandType::SetupRF_ThreadInstance& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by SetupRF_ThreadInstance.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by SetupRF_ThreadInstance, false
    *      otherwise.
    */
  bool isSetupRF_ThreadInstance() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by SetupRF_ThreadInstance.
    *
    * @return A reference to the accessor that provides access to the choice identified by SetupRF_ThreadInstance.
    */
  uci::type::RF_ThreadInstanceCommandType::SetupRF_ThreadInstance& chooseSetupRF_ThreadInstance() override;

  /** Returns the accessor to the ModifyRF_ThreadInstance item contained in this message fragment
    *
    * @return The const reference to the accessor to the ModifyRF_ThreadInstance item.
    */
  uci::type::RF_ThreadInstanceCommandType::ModifyRF_ThreadInstance& getModifyRF_ThreadInstance_() const;

  /** Returns the accessor to the ModifyRF_ThreadInstance item contained in this message fragment
    *
    * @return The const reference to the accessor to the ModifyRF_ThreadInstance item.
    */
  const uci::type::RF_ThreadInstanceCommandType::ModifyRF_ThreadInstance& getModifyRF_ThreadInstance() const override;

  /** Returns the accessor to the ModifyRF_ThreadInstance item contained in this message fragment
    *
    * @return The reference to the accessor to the ModifyRF_ThreadInstance item.
    */
  uci::type::RF_ThreadInstanceCommandType::ModifyRF_ThreadInstance& getModifyRF_ThreadInstance() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RF_ThreadInstanceCommandType& setModifyRF_ThreadInstance(const uci::type::RF_ThreadInstanceCommandType::ModifyRF_ThreadInstance& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by ModifyRF_ThreadInstance.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by ModifyRF_ThreadInstance, false
    *      otherwise.
    */
  bool isModifyRF_ThreadInstance() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by ModifyRF_ThreadInstance.
    *
    * @return A reference to the accessor that provides access to the choice identified by ModifyRF_ThreadInstance.
    */
  uci::type::RF_ThreadInstanceCommandType::ModifyRF_ThreadInstance& chooseModifyRF_ThreadInstance() override;

  /** Returns the accessor to the RemoveRF_ThreadInstance item contained in this message fragment
    *
    * @return The const reference to the accessor to the RemoveRF_ThreadInstance item.
    */
  uci::type::RF_ThreadInstanceCommandType::RemoveRF_ThreadInstance& getRemoveRF_ThreadInstance_() const;

  /** Returns the accessor to the RemoveRF_ThreadInstance item contained in this message fragment
    *
    * @return The const reference to the accessor to the RemoveRF_ThreadInstance item.
    */
  const uci::type::RF_ThreadInstanceCommandType::RemoveRF_ThreadInstance& getRemoveRF_ThreadInstance() const override;

  /** Returns the accessor to the RemoveRF_ThreadInstance item contained in this message fragment
    *
    * @return The reference to the accessor to the RemoveRF_ThreadInstance item.
    */
  uci::type::RF_ThreadInstanceCommandType::RemoveRF_ThreadInstance& getRemoveRF_ThreadInstance() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RF_ThreadInstanceCommandType& setRemoveRF_ThreadInstance(const uci::type::RF_ThreadInstanceCommandType::RemoveRF_ThreadInstance& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by RemoveRF_ThreadInstance.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by RemoveRF_ThreadInstance, false
    *      otherwise.
    */
  bool isRemoveRF_ThreadInstance() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by RemoveRF_ThreadInstance.
    *
    * @return A reference to the accessor that provides access to the choice identified by RemoveRF_ThreadInstance.
    */
  uci::type::RF_ThreadInstanceCommandType::RemoveRF_ThreadInstance& chooseRemoveRF_ThreadInstance() override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<RF_ThreadInstanceCommandType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::RF_ThreadInstanceCommandType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::RF_ThreadInstanceCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<SetupRF_ThreadInstance> setupRF_ThreadInstance_Accessor;
  std::unique_ptr<ModifyRF_ThreadInstance> modifyRF_ThreadInstance_Accessor;
  std::unique_ptr<RemoveRF_ThreadInstance> removeRF_ThreadInstance_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_RF_THREADINSTANCECOMMANDTYPE_H
