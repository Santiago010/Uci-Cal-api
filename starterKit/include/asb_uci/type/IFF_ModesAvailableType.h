/** @file IFF_ModesAvailableType.h
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

#ifndef ASB_UCI_TYPE_IFF_MODESAVAILABLETYPE_H
#define ASB_UCI_TYPE_IFF_MODESAVAILABLETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/IFF_ADS_B_SubtypeType.h"
#include "../../../include/asb_uci/type/IFF_ADS_B_Type.h"
#include "../../../include/asb_uci/type/IFF_Mode5_FormatType.h"
#include "../../../include/asb_uci/type/IFF_ModeS_SupportEnum.h"
#include "../../../include/asb_uci/type/IFF_ModesEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFF_ModesAvailableType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** Only enabled modes are available to the IFF Capability when IFF_Auto is selected in the IFF_Command. */
class IFF_ModesAvailableType : public virtual uci::type::IFF_ModesAvailableType {
public:
  /** Specifies the list of IFF Modes available. List size for this element is based on "Select All That Apply" condition.
    * [Occurrences: Minimum: 1; Maximum: 7]
    */
  using IFF_Modes = asb_uci::base::BoundedList<uci::type::IFF_ModesEnum, uci::type::accessorType::iFF_ModesEnum, asb_uci::type::IFF_ModesEnum>;

  /** These are from the IFF specification and identify 31 possible formats for Mode5 [Occurrences: Minimum: 0; Maximum:
    * 31]
    */
  using Mode5_Format = asb_uci::base::BoundedList<uci::type::IFF_Mode5_FormatType, uci::type::accessorType::iFF_Mode5_FormatType, asb_uci::type::IFF_Mode5_FormatType>;

  /** EHS or ELS (Enhanced vs Elementary) used in when ModeS is selected in IFF_Modes. List size for this element is based
    * on "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 4]
    */
  using ModeS_RegistersSupported = asb_uci::base::BoundedList<uci::type::IFF_ModeS_SupportEnum, uci::type::accessorType::iFF_ModeS_SupportEnum, asb_uci::type::IFF_ModeS_SupportEnum>;

  /** These are from the IFF specification and identify 31 possible formats for Mode5. [Occurrences: Minimum: 0; Maximum:
    * 31]
    */
  using ADS_B_Type = asb_uci::base::BoundedList<uci::type::IFF_ADS_B_Type, uci::type::accessorType::iFF_ADS_B_Type, asb_uci::type::IFF_ADS_B_Type>;

  /** These are from the IFF specification and identify 7 possible Subtypes to the Types in ADS-B. [Occurrences: Minimum:
    * 0; Maximum: 7]
    */
  using ADS_B_SubType = asb_uci::base::BoundedList<uci::type::IFF_ADS_B_SubtypeType, uci::type::accessorType::iFF_ADS_B_SubtypeType, asb_uci::type::IFF_ADS_B_SubtypeType>;

  /** The constructor */
  IFF_ModesAvailableType();

  /** The copy constructor
    *
    * @param rhs The IFF_ModesAvailableType to copy from
    */
  IFF_ModesAvailableType(const IFF_ModesAvailableType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The IFF_ModesAvailableType to move from
    */
  IFF_ModesAvailableType(IFF_ModesAvailableType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The IFF_ModesAvailableType to copy from
    * @return The IFF_ModesAvailableType that was assigned
    */
  IFF_ModesAvailableType& operator=(const IFF_ModesAvailableType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The IFF_ModesAvailableType to move from
    * @return The IFF_ModesAvailableType that was assigned
    */
  IFF_ModesAvailableType& operator=(IFF_ModesAvailableType&& rhs) = delete;

  /** The destructor */
  virtual ~IFF_ModesAvailableType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::IFF_ModesAvailableType whose contents are to be used to set this
    *      uci::type::IFF_ModesAvailableType's contents.
    */
  void copy(const uci::type::IFF_ModesAvailableType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::IFF_ModesAvailableType whose contents are to be used to set this
    *      uci::type::IFF_ModesAvailableType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::IFF_ModesAvailableType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the IFF_Modes field contained in this message fragment
    *
    * @return The const reference to the accessor to the IFF_Modes field.
    */
  const uci::type::IFF_ModesAvailableType::IFF_Modes& getIFF_Modes() const override;

  /** Returns the accessor to the IFF_Modes field contained in this message fragment
    *
    * @return The reference to the accessor to the IFF_Modes field.
    */
  uci::type::IFF_ModesAvailableType::IFF_Modes& getIFF_Modes() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModesAvailableType& setIFF_Modes(const uci::type::IFF_ModesAvailableType::IFF_Modes& accessor) override;

  /** Returns the accessor to the Mode5_Format field contained in this message fragment
    *
    * @return The const reference to the accessor to the Mode5_Format field.
    */
  const uci::type::IFF_ModesAvailableType::Mode5_Format& getMode5_Format() const override;

  /** Returns the accessor to the Mode5_Format field contained in this message fragment
    *
    * @return The reference to the accessor to the Mode5_Format field.
    */
  uci::type::IFF_ModesAvailableType::Mode5_Format& getMode5_Format() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModesAvailableType& setMode5_Format(const uci::type::IFF_ModesAvailableType::Mode5_Format& accessor) override;

  /** Returns the accessor to the ModeS_RegistersSupported field contained in this message fragment
    *
    * @return The const reference to the accessor to the ModeS_RegistersSupported field.
    */
  const uci::type::IFF_ModesAvailableType::ModeS_RegistersSupported& getModeS_RegistersSupported() const override;

  /** Returns the accessor to the ModeS_RegistersSupported field contained in this message fragment
    *
    * @return The reference to the accessor to the ModeS_RegistersSupported field.
    */
  uci::type::IFF_ModesAvailableType::ModeS_RegistersSupported& getModeS_RegistersSupported() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModesAvailableType& setModeS_RegistersSupported(const uci::type::IFF_ModesAvailableType::ModeS_RegistersSupported& accessor) override;

  /** Returns the accessor to the ADS_B_Type field contained in this message fragment
    *
    * @return The const reference to the accessor to the ADS_B_Type field.
    */
  const uci::type::IFF_ModesAvailableType::ADS_B_Type& getADS_B_Type() const override;

  /** Returns the accessor to the ADS_B_Type field contained in this message fragment
    *
    * @return The reference to the accessor to the ADS_B_Type field.
    */
  uci::type::IFF_ModesAvailableType::ADS_B_Type& getADS_B_Type() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModesAvailableType& setADS_B_Type(const uci::type::IFF_ModesAvailableType::ADS_B_Type& accessor) override;

  /** Returns the accessor to the ADS_B_SubType field contained in this message fragment
    *
    * @return The const reference to the accessor to the ADS_B_SubType field.
    */
  const uci::type::IFF_ModesAvailableType::ADS_B_SubType& getADS_B_SubType() const override;

  /** Returns the accessor to the ADS_B_SubType field contained in this message fragment
    *
    * @return The reference to the accessor to the ADS_B_SubType field.
    */
  uci::type::IFF_ModesAvailableType::ADS_B_SubType& getADS_B_SubType() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModesAvailableType& setADS_B_SubType(const uci::type::IFF_ModesAvailableType::ADS_B_SubType& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<IFF_ModesAvailableType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::IFF_ModesAvailableType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::IFF_ModesAvailableType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<IFF_Modes> iFF_Modes_Accessor;
  std::unique_ptr<Mode5_Format> mode5_Format_Accessor;
  std::unique_ptr<ModeS_RegistersSupported> modeS_RegistersSupported_Accessor;
  std::unique_ptr<ADS_B_Type> aDS_B_Type_Accessor;
  std::unique_ptr<ADS_B_SubType> aDS_B_SubType_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_IFF_MODESAVAILABLETYPE_H
