/** @file IPON_IID2_Type.h
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

#ifndef ASB_UCI_TYPE_IPON_IID2_TYPE_H
#define ASB_UCI_TYPE_IPON_IID2_TYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/IPON_IID2_ProgramCodeType.h"
#include "../../../include/asb_uci/type/IPON_IID2_ProjectCodeType.h"
#include "../../../include/asb_uci/type/IPON_IID2_SortieNumberType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IPON_IID2_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class IPON_IID2_Type : public virtual uci::type::IPON_IID2_Type {
public:
  /** The constructor */
  IPON_IID2_Type();

  /** The copy constructor
    *
    * @param rhs The IPON_IID2_Type to copy from
    */
  IPON_IID2_Type(const IPON_IID2_Type& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The IPON_IID2_Type to move from
    */
  IPON_IID2_Type(IPON_IID2_Type&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The IPON_IID2_Type to copy from
    * @return The IPON_IID2_Type that was assigned
    */
  IPON_IID2_Type& operator=(const IPON_IID2_Type& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The IPON_IID2_Type to move from
    * @return The IPON_IID2_Type that was assigned
    */
  IPON_IID2_Type& operator=(IPON_IID2_Type&& rhs) = delete;

  /** The destructor */
  virtual ~IPON_IID2_Type();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::IPON_IID2_Type whose contents are to be used to set this uci::type::IPON_IID2_Type's
    *      contents.
    */
  void copy(const uci::type::IPON_IID2_Type& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::IPON_IID2_Type whose contents are to be used to set this uci::type::IPON_IID2_Type's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::IPON_IID2_Type& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's ProgramCode field
    *
    * @return The contents of the ProgramCode field
    */
  const uci::type::IPON_IID2_ProgramCodeType& getProgramCode() const noexcept override;

  /** Returns the contents of the message's ProgramCode field
    *
    * @return The contents of the ProgramCode field
    */
  uci::type::IPON_IID2_ProgramCodeType& getProgramCode() noexcept override;

  /** Sets the contents of the message's ProgramCode field
    *
    * @param value The new value to set the ProgramCode field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPON_IID2_Type& setProgramCode(const uci::type::IPON_IID2_ProgramCodeType& value) override;

  /** Sets the contents of the message's ProgramCode field
    *
    * @param value The new value to set the ProgramCode field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPON_IID2_Type& setProgramCode(const std::string& value) override;

  /** Sets the contents of the message's ProgramCode field
    *
    * @param value The new value to set the ProgramCode field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPON_IID2_Type& setProgramCode(const char* value) override;

  /** Returns the contents of the message's SortieNumber field
    *
    * @return The contents of the SortieNumber field
    */
  const uci::type::IPON_IID2_SortieNumberType& getSortieNumber() const noexcept override;

  /** Returns the contents of the message's SortieNumber field
    *
    * @return The contents of the SortieNumber field
    */
  uci::type::IPON_IID2_SortieNumberType& getSortieNumber() noexcept override;

  /** Sets the contents of the message's SortieNumber field
    *
    * @param value The new value to set the SortieNumber field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPON_IID2_Type& setSortieNumber(const uci::type::IPON_IID2_SortieNumberType& value) override;

  /** Sets the contents of the message's SortieNumber field
    *
    * @param value The new value to set the SortieNumber field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPON_IID2_Type& setSortieNumber(const std::string& value) override;

  /** Sets the contents of the message's SortieNumber field
    *
    * @param value The new value to set the SortieNumber field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPON_IID2_Type& setSortieNumber(const char* value) override;

  /** Returns the contents of the message's ProjectCode field
    *
    * @return The contents of the ProjectCode field
    */
  const uci::type::IPON_IID2_ProjectCodeType& getProjectCode() const noexcept override;

  /** Returns the contents of the message's ProjectCode field
    *
    * @return The contents of the ProjectCode field
    */
  uci::type::IPON_IID2_ProjectCodeType& getProjectCode() noexcept override;

  /** Sets the contents of the message's ProjectCode field
    *
    * @param value The new value to set the ProjectCode field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPON_IID2_Type& setProjectCode(const uci::type::IPON_IID2_ProjectCodeType& value) override;

  /** Sets the contents of the message's ProjectCode field
    *
    * @param value The new value to set the ProjectCode field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPON_IID2_Type& setProjectCode(const std::string& value) override;

  /** Sets the contents of the message's ProjectCode field
    *
    * @param value The new value to set the ProjectCode field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IPON_IID2_Type& setProjectCode(const char* value) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<IPON_IID2_Type> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::IPON_IID2_Type& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::IPON_IID2_Type& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<IPON_IID2_ProgramCodeType> programCode_Accessor;
  std::unique_ptr<IPON_IID2_SortieNumberType> sortieNumber_Accessor;
  std::unique_ptr<IPON_IID2_ProjectCodeType> projectCode_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_IPON_IID2_TYPE_H
