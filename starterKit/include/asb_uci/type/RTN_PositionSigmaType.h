/** @file RTN_PositionSigmaType.h
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

#ifndef ASB_UCI_TYPE_RTN_POSITIONSIGMATYPE_H
#define ASB_UCI_TYPE_RTN_POSITIONSIGMATYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/DistanceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RTN_PositionSigmaType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** Describes a position in Radial-Transverse-Normal (RTN) sigmas. */
class RTN_PositionSigmaType : public virtual uci::type::RTN_PositionSigmaType {
public:
  /** The constructor */
  RTN_PositionSigmaType();

  /** The copy constructor
    *
    * @param rhs The RTN_PositionSigmaType to copy from
    */
  RTN_PositionSigmaType(const RTN_PositionSigmaType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The RTN_PositionSigmaType to move from
    */
  RTN_PositionSigmaType(RTN_PositionSigmaType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The RTN_PositionSigmaType to copy from
    * @return The RTN_PositionSigmaType that was assigned
    */
  RTN_PositionSigmaType& operator=(const RTN_PositionSigmaType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The RTN_PositionSigmaType to move from
    * @return The RTN_PositionSigmaType that was assigned
    */
  RTN_PositionSigmaType& operator=(RTN_PositionSigmaType&& rhs) = delete;

  /** The destructor */
  virtual ~RTN_PositionSigmaType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RTN_PositionSigmaType whose contents are to be used to set this
    *      uci::type::RTN_PositionSigmaType's contents.
    */
  void copy(const uci::type::RTN_PositionSigmaType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RTN_PositionSigmaType whose contents are to be used to set this
    *      uci::type::RTN_PositionSigmaType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::RTN_PositionSigmaType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's RadialSigma field
    *
    * @return The contents of the RadialSigma field
    */
  uci::type::DistanceTypeValue getRadialSigma() const override;

  /** Sets the contents of the message's RadialSigma field
    *
    * @param value The new value to set the RadialSigma field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::RTN_PositionSigmaType& setRadialSigma(uci::type::DistanceTypeValue value) override;

  /** Returns the contents of the message's TransverseSigma field
    *
    * @return The contents of the TransverseSigma field
    */
  uci::type::DistanceTypeValue getTransverseSigma() const override;

  /** Sets the contents of the message's TransverseSigma field
    *
    * @param value The new value to set the TransverseSigma field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::RTN_PositionSigmaType& setTransverseSigma(uci::type::DistanceTypeValue value) override;

  /** Returns the contents of the message's NormalSigma field
    *
    * @return The contents of the NormalSigma field
    */
  uci::type::DistanceTypeValue getNormalSigma() const override;

  /** Sets the contents of the message's NormalSigma field
    *
    * @param value The new value to set the NormalSigma field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::RTN_PositionSigmaType& setNormalSigma(uci::type::DistanceTypeValue value) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<RTN_PositionSigmaType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::RTN_PositionSigmaType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::RTN_PositionSigmaType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  DistanceTypeValue radialSigma_Accessor{0.0};
  DistanceTypeValue transverseSigma_Accessor{0.0};
  DistanceTypeValue normalSigma_Accessor{0.0};

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_RTN_POSITIONSIGMATYPE_H
