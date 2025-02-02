/** @file RelationshipDesignationMDT.h
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

#ifndef ASB_UCI_TYPE_RELATIONSHIPDESIGNATIONMDT_H
#define ASB_UCI_TYPE_RELATIONSHIPDESIGNATIONMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/DataRecordBaseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RelationshipDesignationMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class DataLinkIdentifierPET;
class GeoLocatedObjectType;
class RelationshipDesignationID_Type;
class RelationshipType;
class SystemMessageIdentifierType;

/** See annotations in child elements and messages/elements that use this type for details. */
class RelationshipDesignationMDT : public virtual uci::type::RelationshipDesignationMDT, public virtual DataRecordBaseType {
public:
  /** List of data link ID. Multiple data link IDs can be reported for the same network type. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  using DataLinkIdentifier = asb_uci::base::BoundedList<uci::type::DataLinkIdentifierPET, uci::type::accessorType::dataLinkIdentifierPET, asb_uci::type::DataLinkIdentifierPET>;

  /** The constructor */
  RelationshipDesignationMDT();

  /** The copy constructor
    *
    * @param rhs The RelationshipDesignationMDT to copy from
    */
  RelationshipDesignationMDT(const RelationshipDesignationMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The RelationshipDesignationMDT to move from
    */
  RelationshipDesignationMDT(RelationshipDesignationMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The RelationshipDesignationMDT to copy from
    * @return The RelationshipDesignationMDT that was assigned
    */
  RelationshipDesignationMDT& operator=(const RelationshipDesignationMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The RelationshipDesignationMDT to move from
    * @return The RelationshipDesignationMDT that was assigned
    */
  RelationshipDesignationMDT& operator=(RelationshipDesignationMDT&& rhs) = delete;

  /** The destructor */
  ~RelationshipDesignationMDT() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RelationshipDesignationMDT whose contents are to be used to set this
    *      uci::type::RelationshipDesignationMDT's contents.
    */
  void copy(const uci::type::RelationshipDesignationMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RelationshipDesignationMDT whose contents are to be used to set this
    *      uci::type::RelationshipDesignationMDT's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::RelationshipDesignationMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the RelationshipDesignationID field contained in this message fragment
    *
    * @return The const reference to the accessor to the RelationshipDesignationID field.
    */
  const uci::type::RelationshipDesignationID_Type& getRelationshipDesignationID() const override;

  /** Returns the accessor to the RelationshipDesignationID field contained in this message fragment
    *
    * @return The reference to the accessor to the RelationshipDesignationID field.
    */
  uci::type::RelationshipDesignationID_Type& getRelationshipDesignationID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RelationshipDesignationMDT& setRelationshipDesignationID(const uci::type::RelationshipDesignationID_Type& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SystemMessageIdentifierType& getReportingSystem_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SystemMessageIdentifierType& getReportingSystem() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SystemMessageIdentifierType& getReportingSystem() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RelationshipDesignationMDT& setReportingSystem(const uci::type::SystemMessageIdentifierType& accessor) override;

  /** Returns whether this optional field ReportingSystemis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasReportingSystem() const noexcept override;

  /** Enables the optional field such that getReportingSystem will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SystemMessageIdentifierType& enableReportingSystem(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RelationshipDesignationMDT& clearReportingSystem() noexcept override;

  /** Returns the accessor to the Source field contained in this message fragment
    *
    * @return The const reference to the accessor to the Source field.
    */
  const uci::type::GeoLocatedObjectType& getSource() const override;

  /** Returns the accessor to the Source field contained in this message fragment
    *
    * @return The reference to the accessor to the Source field.
    */
  uci::type::GeoLocatedObjectType& getSource() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RelationshipDesignationMDT& setSource(const uci::type::GeoLocatedObjectType& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::GeoLocatedObjectType& getDestination_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::GeoLocatedObjectType& getDestination() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::GeoLocatedObjectType& getDestination() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RelationshipDesignationMDT& setDestination(const uci::type::GeoLocatedObjectType& accessor) override;

  /** Returns whether this optional field Destinationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDestination() const noexcept override;

  /** Enables the optional field such that getDestination will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::GeoLocatedObjectType& enableDestination(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RelationshipDesignationMDT& clearDestination() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RelationshipType& getRelationship_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::RelationshipType& getRelationship() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RelationshipType& getRelationship() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RelationshipDesignationMDT& setRelationship(const uci::type::RelationshipType& accessor) override;

  /** Returns whether this optional field Relationshipis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasRelationship() const noexcept override;

  /** Enables the optional field such that getRelationship will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RelationshipType& enableRelationship(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RelationshipDesignationMDT& clearRelationship() noexcept override;

  /** Returns the accessor to the DataLinkIdentifier field contained in this message fragment
    *
    * @return The const reference to the accessor to the DataLinkIdentifier field.
    */
  const uci::type::RelationshipDesignationMDT::DataLinkIdentifier& getDataLinkIdentifier() const override;

  /** Returns the accessor to the DataLinkIdentifier field contained in this message fragment
    *
    * @return The reference to the accessor to the DataLinkIdentifier field.
    */
  uci::type::RelationshipDesignationMDT::DataLinkIdentifier& getDataLinkIdentifier() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RelationshipDesignationMDT& setDataLinkIdentifier(const uci::type::RelationshipDesignationMDT::DataLinkIdentifier& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<RelationshipDesignationMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::RelationshipDesignationMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::RelationshipDesignationMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<RelationshipDesignationID_Type> relationshipDesignationID_Accessor;
  std::unique_ptr<SystemMessageIdentifierType> reportingSystem_Accessor;
  std::unique_ptr<GeoLocatedObjectType> source_Accessor;
  std::unique_ptr<GeoLocatedObjectType> destination_Accessor;
  std::unique_ptr<RelationshipType> relationship_Accessor;
  std::unique_ptr<DataLinkIdentifier> dataLinkIdentifier_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_RELATIONSHIPDESIGNATIONMDT_H
