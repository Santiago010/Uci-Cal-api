/** @file CommMADL_NetworkType.h
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

#ifndef ASB_UCI_TYPE_COMMMADL_NETWORKTYPE_H
#define ASB_UCI_TYPE_COMMMADL_NETWORKTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/MADL_MIDE_Type.h"
#include "../../../include/asb_uci/type/MADL_MissionIdentifierType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommMADL_NetworkType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class CommMADL_NetworkType : public virtual uci::type::CommMADL_NetworkType {
public:
  /** The constructor */
  CommMADL_NetworkType();

  /** The copy constructor
    *
    * @param rhs The CommMADL_NetworkType to copy from
    */
  CommMADL_NetworkType(const CommMADL_NetworkType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The CommMADL_NetworkType to move from
    */
  CommMADL_NetworkType(CommMADL_NetworkType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The CommMADL_NetworkType to copy from
    * @return The CommMADL_NetworkType that was assigned
    */
  CommMADL_NetworkType& operator=(const CommMADL_NetworkType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The CommMADL_NetworkType to move from
    * @return The CommMADL_NetworkType that was assigned
    */
  CommMADL_NetworkType& operator=(CommMADL_NetworkType&& rhs) = delete;

  /** The destructor */
  virtual ~CommMADL_NetworkType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CommMADL_NetworkType whose contents are to be used to set this
    *      uci::type::CommMADL_NetworkType's contents.
    */
  void copy(const uci::type::CommMADL_NetworkType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CommMADL_NetworkType whose contents are to be used to set this
    *      uci::type::CommMADL_NetworkType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::CommMADL_NetworkType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's MADL_MissionIdentifier field
    *
    * @return The contents of the MADL_MissionIdentifier field
    */
  uci::type::MADL_MissionIdentifierTypeValue getMADL_MissionIdentifier() const override;

  /** Sets the contents of the message's MADL_MissionIdentifier field
    *
    * @param value The new value to set the MADL_MissionIdentifier field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_NetworkType& setMADL_MissionIdentifier(uci::type::MADL_MissionIdentifierTypeValue value) override;

  /** Returns the contents of the message's MIDE field
    *
    * @return The contents of the MIDE field
    */
  uci::type::MADL_MIDE_TypeValue getMIDE() const override;

  /** Sets the contents of the message's MIDE field
    *
    * @param value The new value to set the MIDE field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommMADL_NetworkType& setMIDE(uci::type::MADL_MIDE_TypeValue value) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<CommMADL_NetworkType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::CommMADL_NetworkType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::CommMADL_NetworkType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  MADL_MissionIdentifierTypeValue mADL_MissionIdentifier_Accessor{0};
  MADL_MIDE_TypeValue mIDE_Accessor{0};

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_COMMMADL_NETWORKTYPE_H
