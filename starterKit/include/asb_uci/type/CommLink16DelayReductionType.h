/** @file CommLink16DelayReductionType.h
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

#ifndef ASB_UCI_TYPE_COMMLINK16DELAYREDUCTIONTYPE_H
#define ASB_UCI_TYPE_COMMLINK16DELAYREDUCTIONTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/Link16_MessageLabelType.h"
#include "../../../include/asb_uci/type/Link16_MessageSubLabelType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommLink16DelayReductionType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** The Delay Reduction Participation Group (PG) Index Number specifies which message or messages are subject to Delay
  * Reduction.
  */
class CommLink16DelayReductionType : public virtual uci::type::CommLink16DelayReductionType {
public:
  /** The constructor */
  CommLink16DelayReductionType();

  /** The copy constructor
    *
    * @param rhs The CommLink16DelayReductionType to copy from
    */
  CommLink16DelayReductionType(const CommLink16DelayReductionType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The CommLink16DelayReductionType to move from
    */
  CommLink16DelayReductionType(CommLink16DelayReductionType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The CommLink16DelayReductionType to copy from
    * @return The CommLink16DelayReductionType that was assigned
    */
  CommLink16DelayReductionType& operator=(const CommLink16DelayReductionType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The CommLink16DelayReductionType to move from
    * @return The CommLink16DelayReductionType that was assigned
    */
  CommLink16DelayReductionType& operator=(CommLink16DelayReductionType&& rhs) = delete;

  /** The destructor */
  virtual ~CommLink16DelayReductionType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CommLink16DelayReductionType whose contents are to be used to set this
    *      uci::type::CommLink16DelayReductionType's contents.
    */
  void copy(const uci::type::CommLink16DelayReductionType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CommLink16DelayReductionType whose contents are to be used to set this
    *      uci::type::CommLink16DelayReductionType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::CommLink16DelayReductionType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's UseMIDS_DelayReduction field
    *
    * @return The contents of the UseMIDS_DelayReduction field
    */
  xs::Boolean getUseMIDS_DelayReduction() const override;

  /** Sets the contents of the message's UseMIDS_DelayReduction field
    *
    * @param value The new value to set the UseMIDS_DelayReduction field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommLink16DelayReductionType& setUseMIDS_DelayReduction(xs::Boolean value) override;

  /** Returns the contents of the message's MessageLabel field
    *
    * @return The contents of the MessageLabel field
    */
  uci::type::Link16_MessageLabelTypeValue getMessageLabel() const override;

  /** Sets the contents of the message's MessageLabel field
    *
    * @param value The new value to set the MessageLabel field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommLink16DelayReductionType& setMessageLabel(uci::type::Link16_MessageLabelTypeValue value) override;

  /** Returns the contents of the message's Link16_MessageSubLabelType field
    *
    * @return The contents of the Link16_MessageSubLabelType field
    */
  uci::type::Link16_MessageSubLabelTypeValue getLink16_MessageSubLabelType() const override;

  /** Sets the contents of the message's Link16_MessageSubLabelType field
    *
    * @param value The new value to set the Link16_MessageSubLabelType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommLink16DelayReductionType& setLink16_MessageSubLabelType(uci::type::Link16_MessageSubLabelTypeValue value) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<CommLink16DelayReductionType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::CommLink16DelayReductionType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::CommLink16DelayReductionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  asb_xs::Boolean useMIDS_DelayReduction_Accessor{false};
  Link16_MessageLabelTypeValue messageLabel_Accessor{0};
  Link16_MessageSubLabelTypeValue link16_MessageSubLabelType_Accessor{0};

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_COMMLINK16DELAYREDUCTIONTYPE_H
