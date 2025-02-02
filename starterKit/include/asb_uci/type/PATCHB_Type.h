/** @file PATCHB_Type.h
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

#ifndef ASB_UCI_TYPE_PATCHB_TYPE_H
#define ASB_UCI_TYPE_PATCHB_TYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/PATCHB_GravityStringType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PATCHB_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class PATCHB_Type : public virtual uci::type::PATCHB_Type {
public:
  /** The constructor */
  PATCHB_Type();

  /** The copy constructor
    *
    * @param rhs The PATCHB_Type to copy from
    */
  PATCHB_Type(const PATCHB_Type& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The PATCHB_Type to move from
    */
  PATCHB_Type(PATCHB_Type&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The PATCHB_Type to copy from
    * @return The PATCHB_Type that was assigned
    */
  PATCHB_Type& operator=(const PATCHB_Type& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The PATCHB_Type to move from
    * @return The PATCHB_Type that was assigned
    */
  PATCHB_Type& operator=(PATCHB_Type&& rhs) = delete;

  /** The destructor */
  virtual ~PATCHB_Type();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PATCHB_Type whose contents are to be used to set this uci::type::PATCHB_Type's
    *      contents.
    */
  void copy(const uci::type::PATCHB_Type& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PATCHB_Type whose contents are to be used to set this uci::type::PATCHB_Type's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::PATCHB_Type& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::PATCHB_GravityStringType& getGRAVITY_() const;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  const uci::type::PATCHB_GravityStringType& getGRAVITY() const override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::PATCHB_GravityStringType& getGRAVITY() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PATCHB_Type& setGRAVITY(const uci::type::PATCHB_GravityStringType& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PATCHB_Type& setGRAVITY(const std::string& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PATCHB_Type& setGRAVITY(const char* value) override;

  /** Returns whether this optional field gRAVITY_is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasGRAVITY() const noexcept override;

  /** Enables the optional field such that getGRAVITY will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The value of the optional field
    */
  uci::type::PATCHB_GravityStringType& enableGRAVITY(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PATCHB_Type& clearGRAVITY() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<PATCHB_Type> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::PATCHB_Type& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::PATCHB_Type& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<PATCHB_GravityStringType> gRAVITY_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_PATCHB_TYPE_H
