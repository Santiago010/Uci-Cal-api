/** @file RF_ProfileMDT.h
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

#ifndef ASB_UCI_TYPE_RF_PROFILEMDT_H
#define ASB_UCI_TYPE_RF_PROFILEMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RF_ProfileMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class RF_ProfileBandType;
class RF_ProfileID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class RF_ProfileMDT : public virtual uci::type::RF_ProfileMDT {
public:
  /** Indicates a RF band within the profile. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  using ProfileBand = asb_uci::base::BoundedList<uci::type::RF_ProfileBandType, uci::type::accessorType::rF_ProfileBandType, asb_uci::type::RF_ProfileBandType>;

  /** The constructor */
  RF_ProfileMDT();

  /** The copy constructor
    *
    * @param rhs The RF_ProfileMDT to copy from
    */
  RF_ProfileMDT(const RF_ProfileMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The RF_ProfileMDT to move from
    */
  RF_ProfileMDT(RF_ProfileMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The RF_ProfileMDT to copy from
    * @return The RF_ProfileMDT that was assigned
    */
  RF_ProfileMDT& operator=(const RF_ProfileMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The RF_ProfileMDT to move from
    * @return The RF_ProfileMDT that was assigned
    */
  RF_ProfileMDT& operator=(RF_ProfileMDT&& rhs) = delete;

  /** The destructor */
  virtual ~RF_ProfileMDT();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RF_ProfileMDT whose contents are to be used to set this uci::type::RF_ProfileMDT's
    *      contents.
    */
  void copy(const uci::type::RF_ProfileMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RF_ProfileMDT whose contents are to be used to set this uci::type::RF_ProfileMDT's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::RF_ProfileMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the RF_ProfileID field contained in this message fragment
    *
    * @return The const reference to the accessor to the RF_ProfileID field.
    */
  const uci::type::RF_ProfileID_Type& getRF_ProfileID() const override;

  /** Returns the accessor to the RF_ProfileID field contained in this message fragment
    *
    * @return The reference to the accessor to the RF_ProfileID field.
    */
  uci::type::RF_ProfileID_Type& getRF_ProfileID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RF_ProfileMDT& setRF_ProfileID(const uci::type::RF_ProfileID_Type& accessor) override;

  /** Returns the accessor to the ProfileBand field contained in this message fragment
    *
    * @return The const reference to the accessor to the ProfileBand field.
    */
  const uci::type::RF_ProfileMDT::ProfileBand& getProfileBand() const override;

  /** Returns the accessor to the ProfileBand field contained in this message fragment
    *
    * @return The reference to the accessor to the ProfileBand field.
    */
  uci::type::RF_ProfileMDT::ProfileBand& getProfileBand() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RF_ProfileMDT& setProfileBand(const uci::type::RF_ProfileMDT::ProfileBand& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<RF_ProfileMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::RF_ProfileMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::RF_ProfileMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<RF_ProfileID_Type> rF_ProfileID_Accessor;
  std::unique_ptr<ProfileBand> profileBand_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_RF_PROFILEMDT_H
