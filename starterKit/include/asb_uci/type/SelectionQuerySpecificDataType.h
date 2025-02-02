/** @file SelectionQuerySpecificDataType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:15 PM
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

#ifndef ASB_UCI_TYPE_SELECTIONQUERYSPECIFICDATATYPE_H
#define ASB_UCI_TYPE_SELECTIONQUERYSPECIFICDATATYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/DataUpdateRequestCategoryEnum.h"
#include "../../../include/asb_uci/type/QuerySpecificDataPET.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SelectionQuerySpecificDataType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** Identify what kind of data is requested as part of the data update request. */
class SelectionQuerySpecificDataType : public virtual uci::type::SelectionQuerySpecificDataType, public virtual QuerySpecificDataPET {
public:
  /** The constructor */
  SelectionQuerySpecificDataType();

  /** The copy constructor
    *
    * @param rhs The SelectionQuerySpecificDataType to copy from
    */
  SelectionQuerySpecificDataType(const SelectionQuerySpecificDataType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SelectionQuerySpecificDataType to move from
    */
  SelectionQuerySpecificDataType(SelectionQuerySpecificDataType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The SelectionQuerySpecificDataType to copy from
    * @return The SelectionQuerySpecificDataType that was assigned
    */
  SelectionQuerySpecificDataType& operator=(const SelectionQuerySpecificDataType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SelectionQuerySpecificDataType to move from
    * @return The SelectionQuerySpecificDataType that was assigned
    */
  SelectionQuerySpecificDataType& operator=(SelectionQuerySpecificDataType&& rhs) = delete;

  /** The destructor */
  ~SelectionQuerySpecificDataType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SelectionQuerySpecificDataType whose contents are to be used to set this
    *      uci::type::SelectionQuerySpecificDataType's contents.
    */
  void copy(const uci::type::SelectionQuerySpecificDataType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SelectionQuerySpecificDataType whose contents are to be used to set this
    *      uci::type::SelectionQuerySpecificDataType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SelectionQuerySpecificDataType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's Category field
    *
    * @return The contents of the Category field
    */
  const uci::type::DataUpdateRequestCategoryEnum& getCategory() const override;

  /** Returns the contents of the message's Category field
    *
    * @return The contents of the Category field
    */
  uci::type::DataUpdateRequestCategoryEnum& getCategory() override;

  /** Sets the contents of the message's Category field
    *
    * @param accessor The accessor to use to set the Category field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SelectionQuerySpecificDataType& setCategory(const uci::type::DataUpdateRequestCategoryEnum& accessor) override;

  /** Sets the contents of the message's Category field
    *
    * @param value The new value to set the Category field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SelectionQuerySpecificDataType& setCategory(uci::type::DataUpdateRequestCategoryEnum::EnumerationItem value) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SelectionQuerySpecificDataType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SelectionQuerySpecificDataType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::SelectionQuerySpecificDataType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<DataUpdateRequestCategoryEnum> category_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SELECTIONQUERYSPECIFICDATATYPE_H
