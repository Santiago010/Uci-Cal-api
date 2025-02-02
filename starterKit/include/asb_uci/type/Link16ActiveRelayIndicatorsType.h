/** @file Link16ActiveRelayIndicatorsType.h
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

#ifndef ASB_UCI_TYPE_LINK16ACTIVERELAYINDICATORSTYPE_H
#define ASB_UCI_TYPE_LINK16ACTIVERELAYINDICATORSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Link16ActiveRelayIndicatorsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** Indicates the status of a unit's re-area network laying capability over various channels/networks. */
class Link16ActiveRelayIndicatorsType : public virtual uci::type::Link16ActiveRelayIndicatorsType {
public:
  /** The constructor */
  Link16ActiveRelayIndicatorsType();

  /** The copy constructor
    *
    * @param rhs The Link16ActiveRelayIndicatorsType to copy from
    */
  Link16ActiveRelayIndicatorsType(const Link16ActiveRelayIndicatorsType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The Link16ActiveRelayIndicatorsType to move from
    */
  Link16ActiveRelayIndicatorsType(Link16ActiveRelayIndicatorsType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The Link16ActiveRelayIndicatorsType to copy from
    * @return The Link16ActiveRelayIndicatorsType that was assigned
    */
  Link16ActiveRelayIndicatorsType& operator=(const Link16ActiveRelayIndicatorsType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The Link16ActiveRelayIndicatorsType to move from
    * @return The Link16ActiveRelayIndicatorsType that was assigned
    */
  Link16ActiveRelayIndicatorsType& operator=(Link16ActiveRelayIndicatorsType&& rhs) = delete;

  /** The destructor */
  virtual ~Link16ActiveRelayIndicatorsType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::Link16ActiveRelayIndicatorsType whose contents are to be used to set this
    *      uci::type::Link16ActiveRelayIndicatorsType's contents.
    */
  void copy(const uci::type::Link16ActiveRelayIndicatorsType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::Link16ActiveRelayIndicatorsType whose contents are to be used to set this
    *      uci::type::Link16ActiveRelayIndicatorsType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::Link16ActiveRelayIndicatorsType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getControlChannel() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16ActiveRelayIndicatorsType& setControlChannel(xs::Boolean value) override;

  /** Returns whether this optional field ControlChannelis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasControlChannel() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16ActiveRelayIndicatorsType& clearControlChannel() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getVoiceChannel() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16ActiveRelayIndicatorsType& setVoiceChannel(xs::Boolean value) override;

  /** Returns whether this optional field VoiceChannelis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasVoiceChannel() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16ActiveRelayIndicatorsType& clearVoiceChannel() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getWideAreaNetwork() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16ActiveRelayIndicatorsType& setWideAreaNetwork(xs::Boolean value) override;

  /** Returns whether this optional field WideAreaNetworkis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasWideAreaNetwork() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16ActiveRelayIndicatorsType& clearWideAreaNetwork() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<Link16ActiveRelayIndicatorsType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::Link16ActiveRelayIndicatorsType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::Link16ActiveRelayIndicatorsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  boost::optional<asb_xs::Boolean> controlChannel_Accessor;
  boost::optional<asb_xs::Boolean> voiceChannel_Accessor;
  boost::optional<asb_xs::Boolean> wideAreaNetwork_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_LINK16ACTIVERELAYINDICATORSTYPE_H
