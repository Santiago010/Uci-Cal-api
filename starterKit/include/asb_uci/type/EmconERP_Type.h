/** @file EmconERP_Type.h
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

#ifndef ASB_UCI_TYPE_EMCONERP_TYPE_H
#define ASB_UCI_TYPE_EMCONERP_TYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/MilliwattPowerRatioType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EmconERP_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class EmconERP_Type : public virtual uci::type::EmconERP_Type {
public:
  /** The constructor */
  EmconERP_Type();

  /** The copy constructor
    *
    * @param rhs The EmconERP_Type to copy from
    */
  EmconERP_Type(const EmconERP_Type& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The EmconERP_Type to move from
    */
  EmconERP_Type(EmconERP_Type&& rhs) = delete;

  /** The assignment operator [not supported]
    *
    * @param rhs The EmconERP_Type to copy from
    * @return The EmconERP_Type that was assigned
    */
  EmconERP_Type& operator=(const EmconERP_Type& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The EmconERP_Type to move from
    * @return The EmconERP_Type that was assigned
    */
  EmconERP_Type& operator=(EmconERP_Type&& rhs) = delete;

  /** The destructor */
  virtual ~EmconERP_Type();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::EmconERP_Type whose contents are to be used to set this uci::type::EmconERP_Type's
    *      contents.
    */
  void copy(const uci::type::EmconERP_Type& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::EmconERP_Type whose contents are to be used to set this uci::type::EmconERP_Type's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::EmconERP_Type& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value
    */
  uci::type::EmconERP_Type::EmconERP_TypeChoice getEmconERP_TypeChoiceOrdinal() const noexcept override;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getEmconERP_TypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In addition, the access
    * methods associated with the chosen element will be enabled and will provide access to the chosen element.
    *
    * @param ordinal The ordinal to set this choice's selected ordinal to.
    * @param type The type of data that is to be made available when the ordinal is set.
    * @return A reference to the object on which this method was called.
    */
  uci::type::EmconERP_Type& setEmconERP_TypeChoiceOrdinal(uci::type::EmconERP_Type::EmconERP_TypeChoice ordinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the contents of the message's MaximumRadiatedERP item
    *
    * @return The contents of the MaximumRadiatedERP field
    */
  uci::type::MilliwattPowerRatioTypeValue getMaximumRadiatedERP() const override;

  /** Sets this choice's choice to be MaximumRadiatedERP and initializes MaximumRadiatedERP to be the specified value
    *
    * @param value The new value to set MaximumRadiatedERP to
    * @return A reference to the object on which this method was called.
    */
  uci::type::EmconERP_Type& setMaximumRadiatedERP(uci::type::MilliwattPowerRatioTypeValue value) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by MaximumRadiatedERP.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by MaximumRadiatedERP, false
    *      otherwise.
    */
  bool isMaximumRadiatedERP() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by MaximumRadiatedERP. */
  void chooseMaximumRadiatedERP();

  /** Returns the contents of the message's RadiateFullPower item
    *
    * @return The contents of the RadiateFullPower field
    */
  xs::Boolean getRadiateFullPower() const override;

  /** Sets this choice's choice to be RadiateFullPower and initializes RadiateFullPower to be the specified value
    *
    * @param value The new value to set RadiateFullPower to
    * @return A reference to the object on which this method was called.
    */
  uci::type::EmconERP_Type& setRadiateFullPower(xs::Boolean value) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by RadiateFullPower.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by RadiateFullPower, false
    *      otherwise.
    */
  bool isRadiateFullPower() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by RadiateFullPower. */
  void chooseRadiateFullPower();

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<EmconERP_Type> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::EmconERP_Type& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::EmconERP_Type& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  boost::optional<asb_xs::Double> maximumRadiatedERP_Accessor;
  boost::optional<asb_xs::Boolean> radiateFullPower_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_EMCONERP_TYPE_H
