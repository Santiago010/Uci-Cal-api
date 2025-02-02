/** @file MissionContingencyAlertMDT.h
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

#ifndef ASB_UCI_TYPE_MISSIONCONTINGENCYALERTMDT_H
#define ASB_UCI_TYPE_MISSIONCONTINGENCYALERTMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionContingencyAlertMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class MissionContingencyAlertID_Type;
class MissionContingencyConditionType;
class SystemID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class MissionContingencyAlertMDT : public virtual uci::type::MissionContingencyAlertMDT {
public:
  /** This element is intended to capture contingency conditions identified by the impacted system. The ID references and
    * elements herein are intended to complete the following statement: ConflictedSystem S1 has a conflict (contingency)
    * caused by ConflictingObject X at ConflictLocation Y. As a result, AffectedTaskID Z can no longer be performed. The
    * Contingency Management function has identified this as AutonomyCase AC1 and either: 1. Autonomy is allowed and the
    * system is addressing the contingency. 2. Autonomy is not allowed and the Contingency Management function recommends
    * that the operator perform certain actions to resolve the condition. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  using ContingencyCondition = asb_uci::base::BoundedList<uci::type::MissionContingencyConditionType, uci::type::accessorType::missionContingencyConditionType, asb_uci::type::MissionContingencyConditionType>;

  /** The constructor */
  MissionContingencyAlertMDT();

  /** The copy constructor
    *
    * @param rhs The MissionContingencyAlertMDT to copy from
    */
  MissionContingencyAlertMDT(const MissionContingencyAlertMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The MissionContingencyAlertMDT to move from
    */
  MissionContingencyAlertMDT(MissionContingencyAlertMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The MissionContingencyAlertMDT to copy from
    * @return The MissionContingencyAlertMDT that was assigned
    */
  MissionContingencyAlertMDT& operator=(const MissionContingencyAlertMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The MissionContingencyAlertMDT to move from
    * @return The MissionContingencyAlertMDT that was assigned
    */
  MissionContingencyAlertMDT& operator=(MissionContingencyAlertMDT&& rhs) = delete;

  /** The destructor */
  virtual ~MissionContingencyAlertMDT();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::MissionContingencyAlertMDT whose contents are to be used to set this
    *      uci::type::MissionContingencyAlertMDT's contents.
    */
  void copy(const uci::type::MissionContingencyAlertMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::MissionContingencyAlertMDT whose contents are to be used to set this
    *      uci::type::MissionContingencyAlertMDT's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::MissionContingencyAlertMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the MissionContingencyAlertID field contained in this message fragment
    *
    * @return The const reference to the accessor to the MissionContingencyAlertID field.
    */
  const uci::type::MissionContingencyAlertID_Type& getMissionContingencyAlertID() const override;

  /** Returns the accessor to the MissionContingencyAlertID field contained in this message fragment
    *
    * @return The reference to the accessor to the MissionContingencyAlertID field.
    */
  uci::type::MissionContingencyAlertID_Type& getMissionContingencyAlertID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionContingencyAlertMDT& setMissionContingencyAlertID(const uci::type::MissionContingencyAlertID_Type& accessor) override;

  /** Returns the accessor to the SourceSystemID field contained in this message fragment
    *
    * @return The const reference to the accessor to the SourceSystemID field.
    */
  const uci::type::SystemID_Type& getSourceSystemID() const override;

  /** Returns the accessor to the SourceSystemID field contained in this message fragment
    *
    * @return The reference to the accessor to the SourceSystemID field.
    */
  uci::type::SystemID_Type& getSourceSystemID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionContingencyAlertMDT& setSourceSystemID(const uci::type::SystemID_Type& accessor) override;

  /** Returns the accessor to the ContingencyCondition field contained in this message fragment
    *
    * @return The const reference to the accessor to the ContingencyCondition field.
    */
  const uci::type::MissionContingencyAlertMDT::ContingencyCondition& getContingencyCondition() const override;

  /** Returns the accessor to the ContingencyCondition field contained in this message fragment
    *
    * @return The reference to the accessor to the ContingencyCondition field.
    */
  uci::type::MissionContingencyAlertMDT::ContingencyCondition& getContingencyCondition() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionContingencyAlertMDT& setContingencyCondition(const uci::type::MissionContingencyAlertMDT::ContingencyCondition& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<MissionContingencyAlertMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::MissionContingencyAlertMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::MissionContingencyAlertMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<MissionContingencyAlertID_Type> missionContingencyAlertID_Accessor;
  std::unique_ptr<SystemID_Type> sourceSystemID_Accessor;
  std::unique_ptr<ContingencyCondition> contingencyCondition_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_MISSIONCONTINGENCYALERTMDT_H
