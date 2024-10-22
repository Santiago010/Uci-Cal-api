/** @file Link16DataStoreManagementType.h
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

#ifndef ASB_UCI_TYPE_LINK16DATASTOREMANAGEMENTTYPE_H
#define ASB_UCI_TYPE_LINK16DATASTOREMANAGEMENTTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Link16DataStoreManagementType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class Link16AmplificationDataStoreActionType;
class Link16EW_DataStoreActionType;
class Link16EngagementStatusDataStoreActionType;
class Link16FriendlyTargetofInterestDataStoreActionType;
class Link16ReferencePointDataStoreActionType;
class Link16TextReportDataStoreActionType;
class Link16ThreatWarningDataStoreActionType;

/** Contains aggregated information about the engagement status, reference point data, and other relevant information to
  * Link 16 Data Stores.
  */
class Link16DataStoreManagementType : public virtual uci::type::Link16DataStoreManagementType {
public:
  /** Contains the Data Store Action and the UCI ID that correspond to Display Relationships. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  using AmplificationDataStoreAction = asb_uci::base::BoundedList<uci::type::Link16AmplificationDataStoreActionType, uci::type::accessorType::link16AmplificationDataStoreActionType, asb_uci::type::Link16AmplificationDataStoreActionType>;

  /** Contains the Data Store Action and the ID that corresponds to Display Relationships. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  using EngagementStatusDataStoreAction = asb_uci::base::BoundedList<uci::type::Link16EngagementStatusDataStoreActionType, uci::type::accessorType::link16EngagementStatusDataStoreActionType, asb_uci::type::Link16EngagementStatusDataStoreActionType>;

  /** Contains the Data Store Action and the IDs of the Entity and the Signal Report. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  using EW_DataStoreAction = asb_uci::base::BoundedList<uci::type::Link16EW_DataStoreActionType, uci::type::accessorType::link16EW_DataStoreActionType, asb_uci::type::Link16EW_DataStoreActionType>;

  /** Contains the IDs of the OpPoint, OpLine, OpZone, Entity, and Subsystem. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  using FriendlyTargetofInterestDataStoreAction = asb_uci::base::BoundedList<uci::type::Link16FriendlyTargetofInterestDataStoreActionType, uci::type::accessorType::link16FriendlyTargetofInterestDataStoreActionType, asb_uci::type::Link16FriendlyTargetofInterestDataStoreActionType>;

  /** Contains the Data Store Action and the IDs of the OpLine, OpPoint, and OpZone. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  using ReferencePointDataStoreAction = asb_uci::base::BoundedList<uci::type::Link16ReferencePointDataStoreActionType, uci::type::accessorType::link16ReferencePointDataStoreActionType, asb_uci::type::Link16ReferencePointDataStoreActionType>;

  /** Contains the Data Store Actions and the DisplayRelationship IDs. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  using ThreatWarningDataStoreAction = asb_uci::base::BoundedList<uci::type::Link16ThreatWarningDataStoreActionType, uci::type::accessorType::link16ThreatWarningDataStoreActionType, asb_uci::type::Link16ThreatWarningDataStoreActionType>;

  /** Contains the Data Store Actions and the UCI IDs that correspond to Operator Notifications. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  using TextReportDataStoreAction = asb_uci::base::BoundedList<uci::type::Link16TextReportDataStoreActionType, uci::type::accessorType::link16TextReportDataStoreActionType, asb_uci::type::Link16TextReportDataStoreActionType>;

  /** The constructor */
  Link16DataStoreManagementType();

  /** The copy constructor
    *
    * @param rhs The Link16DataStoreManagementType to copy from
    */
  Link16DataStoreManagementType(const Link16DataStoreManagementType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The Link16DataStoreManagementType to move from
    */
  Link16DataStoreManagementType(Link16DataStoreManagementType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The Link16DataStoreManagementType to copy from
    * @return The Link16DataStoreManagementType that was assigned
    */
  Link16DataStoreManagementType& operator=(const Link16DataStoreManagementType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The Link16DataStoreManagementType to move from
    * @return The Link16DataStoreManagementType that was assigned
    */
  Link16DataStoreManagementType& operator=(Link16DataStoreManagementType&& rhs) = delete;

  /** The destructor */
  virtual ~Link16DataStoreManagementType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::Link16DataStoreManagementType whose contents are to be used to set this
    *      uci::type::Link16DataStoreManagementType's contents.
    */
  void copy(const uci::type::Link16DataStoreManagementType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::Link16DataStoreManagementType whose contents are to be used to set this
    *      uci::type::Link16DataStoreManagementType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::Link16DataStoreManagementType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the AmplificationDataStoreAction field contained in this message fragment
    *
    * @return The const reference to the accessor to the AmplificationDataStoreAction field.
    */
  const uci::type::Link16DataStoreManagementType::AmplificationDataStoreAction& getAmplificationDataStoreAction() const override;

  /** Returns the accessor to the AmplificationDataStoreAction field contained in this message fragment
    *
    * @return The reference to the accessor to the AmplificationDataStoreAction field.
    */
  uci::type::Link16DataStoreManagementType::AmplificationDataStoreAction& getAmplificationDataStoreAction() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16DataStoreManagementType& setAmplificationDataStoreAction(const uci::type::Link16DataStoreManagementType::AmplificationDataStoreAction& accessor) override;

  /** Returns the accessor to the EngagementStatusDataStoreAction field contained in this message fragment
    *
    * @return The const reference to the accessor to the EngagementStatusDataStoreAction field.
    */
  const uci::type::Link16DataStoreManagementType::EngagementStatusDataStoreAction& getEngagementStatusDataStoreAction() const override;

  /** Returns the accessor to the EngagementStatusDataStoreAction field contained in this message fragment
    *
    * @return The reference to the accessor to the EngagementStatusDataStoreAction field.
    */
  uci::type::Link16DataStoreManagementType::EngagementStatusDataStoreAction& getEngagementStatusDataStoreAction() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16DataStoreManagementType& setEngagementStatusDataStoreAction(const uci::type::Link16DataStoreManagementType::EngagementStatusDataStoreAction& accessor) override;

  /** Returns the accessor to the EW_DataStoreAction field contained in this message fragment
    *
    * @return The const reference to the accessor to the EW_DataStoreAction field.
    */
  const uci::type::Link16DataStoreManagementType::EW_DataStoreAction& getEW_DataStoreAction() const override;

  /** Returns the accessor to the EW_DataStoreAction field contained in this message fragment
    *
    * @return The reference to the accessor to the EW_DataStoreAction field.
    */
  uci::type::Link16DataStoreManagementType::EW_DataStoreAction& getEW_DataStoreAction() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16DataStoreManagementType& setEW_DataStoreAction(const uci::type::Link16DataStoreManagementType::EW_DataStoreAction& accessor) override;

  /** Returns the accessor to the FriendlyTargetofInterestDataStoreAction field contained in this message fragment
    *
    * @return The const reference to the accessor to the FriendlyTargetofInterestDataStoreAction field.
    */
  const uci::type::Link16DataStoreManagementType::FriendlyTargetofInterestDataStoreAction& getFriendlyTargetofInterestDataStoreAction() const override;

  /** Returns the accessor to the FriendlyTargetofInterestDataStoreAction field contained in this message fragment
    *
    * @return The reference to the accessor to the FriendlyTargetofInterestDataStoreAction field.
    */
  uci::type::Link16DataStoreManagementType::FriendlyTargetofInterestDataStoreAction& getFriendlyTargetofInterestDataStoreAction() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16DataStoreManagementType& setFriendlyTargetofInterestDataStoreAction(const uci::type::Link16DataStoreManagementType::FriendlyTargetofInterestDataStoreAction& accessor) override;

  /** Returns the accessor to the ReferencePointDataStoreAction field contained in this message fragment
    *
    * @return The const reference to the accessor to the ReferencePointDataStoreAction field.
    */
  const uci::type::Link16DataStoreManagementType::ReferencePointDataStoreAction& getReferencePointDataStoreAction() const override;

  /** Returns the accessor to the ReferencePointDataStoreAction field contained in this message fragment
    *
    * @return The reference to the accessor to the ReferencePointDataStoreAction field.
    */
  uci::type::Link16DataStoreManagementType::ReferencePointDataStoreAction& getReferencePointDataStoreAction() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16DataStoreManagementType& setReferencePointDataStoreAction(const uci::type::Link16DataStoreManagementType::ReferencePointDataStoreAction& accessor) override;

  /** Returns the accessor to the ThreatWarningDataStoreAction field contained in this message fragment
    *
    * @return The const reference to the accessor to the ThreatWarningDataStoreAction field.
    */
  const uci::type::Link16DataStoreManagementType::ThreatWarningDataStoreAction& getThreatWarningDataStoreAction() const override;

  /** Returns the accessor to the ThreatWarningDataStoreAction field contained in this message fragment
    *
    * @return The reference to the accessor to the ThreatWarningDataStoreAction field.
    */
  uci::type::Link16DataStoreManagementType::ThreatWarningDataStoreAction& getThreatWarningDataStoreAction() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16DataStoreManagementType& setThreatWarningDataStoreAction(const uci::type::Link16DataStoreManagementType::ThreatWarningDataStoreAction& accessor) override;

  /** Returns the accessor to the TextReportDataStoreAction field contained in this message fragment
    *
    * @return The const reference to the accessor to the TextReportDataStoreAction field.
    */
  const uci::type::Link16DataStoreManagementType::TextReportDataStoreAction& getTextReportDataStoreAction() const override;

  /** Returns the accessor to the TextReportDataStoreAction field contained in this message fragment
    *
    * @return The reference to the accessor to the TextReportDataStoreAction field.
    */
  uci::type::Link16DataStoreManagementType::TextReportDataStoreAction& getTextReportDataStoreAction() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16DataStoreManagementType& setTextReportDataStoreAction(const uci::type::Link16DataStoreManagementType::TextReportDataStoreAction& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<Link16DataStoreManagementType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::Link16DataStoreManagementType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::Link16DataStoreManagementType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<AmplificationDataStoreAction> amplificationDataStoreAction_Accessor;
  std::unique_ptr<EngagementStatusDataStoreAction> engagementStatusDataStoreAction_Accessor;
  std::unique_ptr<EW_DataStoreAction> eW_DataStoreAction_Accessor;
  std::unique_ptr<FriendlyTargetofInterestDataStoreAction> friendlyTargetofInterestDataStoreAction_Accessor;
  std::unique_ptr<ReferencePointDataStoreAction> referencePointDataStoreAction_Accessor;
  std::unique_ptr<ThreatWarningDataStoreAction> threatWarningDataStoreAction_Accessor;
  std::unique_ptr<TextReportDataStoreAction> textReportDataStoreAction_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_LINK16DATASTOREMANAGEMENTTYPE_H
