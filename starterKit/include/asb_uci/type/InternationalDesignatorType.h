/** @file InternationalDesignatorType.h
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

#ifndef ASB_UCI_TYPE_INTERNATIONALDESIGNATORTYPE_H
#define ASB_UCI_TYPE_INTERNATIONALDESIGNATORTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/LaunchPieceType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/InternationalDesignatorType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class InternationalDesignatorType : public virtual uci::type::InternationalDesignatorType {
public:
  /** The constructor */
  InternationalDesignatorType();

  /** The copy constructor
    *
    * @param rhs The InternationalDesignatorType to copy from
    */
  InternationalDesignatorType(const InternationalDesignatorType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The InternationalDesignatorType to move from
    */
  InternationalDesignatorType(InternationalDesignatorType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The InternationalDesignatorType to copy from
    * @return The InternationalDesignatorType that was assigned
    */
  InternationalDesignatorType& operator=(const InternationalDesignatorType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The InternationalDesignatorType to move from
    * @return The InternationalDesignatorType that was assigned
    */
  InternationalDesignatorType& operator=(InternationalDesignatorType&& rhs) = delete;

  /** The destructor */
  virtual ~InternationalDesignatorType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::InternationalDesignatorType whose contents are to be used to set this
    *      uci::type::InternationalDesignatorType's contents.
    */
  void copy(const uci::type::InternationalDesignatorType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::InternationalDesignatorType whose contents are to be used to set this
    *      uci::type::InternationalDesignatorType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::InternationalDesignatorType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's Year field
    *
    * @return The contents of the Year field
    */
  xs::UnsignedByte getYear() const override;

  /** Sets the contents of the message's Year field
    *
    * @param value The new value to set the Year field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::InternationalDesignatorType& setYear(xs::UnsignedByte value) override;

  /** Returns the contents of the message's Number field
    *
    * @return The contents of the Number field
    */
  xs::UnsignedShort getNumber() const override;

  /** Sets the contents of the message's Number field
    *
    * @param value The new value to set the Number field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::InternationalDesignatorType& setNumber(xs::UnsignedShort value) override;

  /** Returns the contents of the message's Piece field
    *
    * @return The contents of the Piece field
    */
  const uci::type::LaunchPieceType& getPiece() const noexcept override;

  /** Returns the contents of the message's Piece field
    *
    * @return The contents of the Piece field
    */
  uci::type::LaunchPieceType& getPiece() noexcept override;

  /** Sets the contents of the message's Piece field
    *
    * @param value The new value to set the Piece field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::InternationalDesignatorType& setPiece(const uci::type::LaunchPieceType& value) override;

  /** Sets the contents of the message's Piece field
    *
    * @param value The new value to set the Piece field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::InternationalDesignatorType& setPiece(const std::string& value) override;

  /** Sets the contents of the message's Piece field
    *
    * @param value The new value to set the Piece field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::InternationalDesignatorType& setPiece(const char* value) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<InternationalDesignatorType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::InternationalDesignatorType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::InternationalDesignatorType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  asb_xs::UnsignedByte year_Accessor{0};
  asb_xs::UnsignedShort number_Accessor{0};
  std::unique_ptr<LaunchPieceType> piece_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_INTERNATIONALDESIGNATORTYPE_H
